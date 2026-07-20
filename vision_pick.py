#!/usr/bin/env python3
"""비전 기반 집기: 카메라로 파란 큐브를 검출해 좌표를 추정하고 집어서 옮긴다.

사전 조건:
  - gazebo launch + MoveIt launch 실행 중
  - vision_env.py 실행 중 (카메라 이미지)
  - vision_calibrate.py 완료 (vision_calib.json 존재)

  /usr/bin/python3 vision_pick.py                    # 무작위 위치에 큐브 스폰 → 검출 → 집기
  /usr/bin/python3 vision_pick.py --cube-x 0.26 --cube-y 0.05
  /usr/bin/python3 vision_pick.py --detect-only     # 검출/좌표 추정만 (팔 안 움직임)

검증: 스폰한 실제 위치 vs 비전 추정 위치의 오차를 출력.
"""
import argparse
import json
import math
import random
import subprocess
import time, threading

import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from rclpy.action import ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor, SingleThreadedExecutor
from rclpy.node import Node
from rclpy.parameter import Parameter
from control_msgs.action import GripperCommand
from geometry_msgs.msg import PoseStamped
from pymoveit2 import MoveIt2
from rclpy.qos import QoSProfile, DurabilityPolicy
from sensor_msgs.msg import Image
from visualization_msgs.msg import Marker

from pick_place_demo import GRIPPER_OPEN, JOINTS, cube_sdf, ik
from vision_env import IMAGE_TOPIC, LOOK_POSE

CALIB_FILE = '/home/moveright/omx_ws/vision_calib.json'


def detect_cube(img, H, cam_pos, cube_size):
    """파란 큐브 검출 → 바닥평면 world (x, y). 높이 시차(parallax) 보정 포함."""
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, (100, 120, 60), (130, 255, 255))
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    if not contours:
        raise RuntimeError('파란 큐브 미검출 — vision/pick_debug.png 확인')
    c = max(contours, key=cv2.contourArea)
    m = cv2.moments(c)
    px = np.array([m['m10'] / m['m00'], m['m01'] / m['m00']])

    # homography는 바닥평면 기준 → 큐브 윗면(높이 h)은 카메라 정점에서
    # 바깥쪽으로 밀려 보이므로 유사삼각형으로 되돌린다
    mapped = cv2.perspectiveTransform(px.reshape(1, 1, 2), H)[0, 0]
    nadir = np.array(cam_pos[:2])
    scale = (cam_pos[2] - cube_size) / cam_pos[2]
    xy = nadir + (mapped - nadir) * scale
    return float(xy[0]), float(xy[1]), px, c


class VisionPick:

    def __init__(self, args):
        self.args = args
        self.frame = None
        self.bridge = CvBridge()

        self.node = Node('vision_pick')
        self.node.set_parameters([Parameter('use_sim_time', Parameter.Type.BOOL, True)])
        self.moveit2 = MoveIt2(
            node=self.node, joint_names=JOINTS,
            base_link_name='world', end_effector_name='end_effector_link',
            group_name='arm', callback_group=ReentrantCallbackGroup(),
        )
        self.gripper_client = ActionClient(
            self.node, GripperCommand, '/gripper_controller/gripper_cmd')
        # 이미지 구독은 별도 노드 + 별도 executor로 완전 격리 — pymoveit2가
        # 메인 executor 스레드를 점유해 이미지 콜백이 얼어붙는 문제 방지
        self.cam_node = Node('vision_pick_cam')
        self.cam_node.create_subscription(Image, IMAGE_TOPIC, self.image_cb, 5)
        # 큐브 실제 pose → Foxglove용 /cube_marker 중계 (콜백은 격리된 cam_node에)
        qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.cube_marker_pub = self.cam_node.create_publisher(Marker, '/cube_marker', qos)
        self.pillar_marker_pub = self.cam_node.create_publisher(Marker, '/obstacle_marker', qos)
        self.cam_node.create_subscription(
            PoseStamped, '/model/pick_cube/pose', self.cube_pose_cb, 10)
        self.pose_bridge = subprocess.Popen(
            ['ros2', 'run', 'ros_gz_bridge', 'parameter_bridge',
             '/model/pick_cube/pose@geometry_msgs/msg/PoseStamped[gz.msgs.Pose'],
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
            start_new_session=True)

        cam_exec = SingleThreadedExecutor()
        cam_exec.add_node(self.cam_node)

        def spin_quiet():
            try:
                cam_exec.spin()
            except Exception:
                pass  # rclpy.shutdown 시 데몬 스레드 종료 잡음 무시
        threading.Thread(target=spin_quiet, daemon=True).start()

        executor = MultiThreadedExecutor(4)
        executor.add_node(self.node)
        threading.Thread(target=executor.spin, daemon=True).start()

        self.moveit2.allowed_planning_time = 5.0
        self.moveit2.max_velocity = 0.3
        self.moveit2.max_acceleration = 0.3

    def image_cb(self, msg):
        self.frame = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        self.frame_wall = time.time()
        self.frame_seq = getattr(self, 'frame_seq', 0) + 1

    def cube_pose_cb(self, msg):
        """큐브 실제 pose를 Foxglove용 마커로 중계"""
        m = Marker()
        m.header.frame_id = 'world'
        m.ns, m.id = 'cube', 0
        m.type, m.action = Marker.CUBE, Marker.ADD
        m.pose = msg.pose
        m.scale.x = m.scale.y = m.scale.z = self.args.cube_size
        m.color.r, m.color.g, m.color.b, m.color.a = 0.1, 0.4, 1.0, 1.0
        self.cube_marker_pub.publish(m)

    def check_frames_alive(self):
        if time.time() - getattr(self, 'frame_wall', 0) > 3.0:
            raise RuntimeError('이미지 콜백이 3초 이상 멈춤 — executor 정지 상태')

    def wait_new_frames(self, n=15, timeout=10.0):
        """지금 이후로 렌더링된 프레임 n장을 기다림 (엔티티 변경 반영 보장)"""
        target = getattr(self, 'frame_seq', 0) + n
        deadline = time.time() + timeout
        while getattr(self, 'frame_seq', 0) < target and time.time() < deadline:
            time.sleep(0.1)

    def wait_frame(self, timeout=10.0):
        deadline = time.time() + timeout
        while self.frame is None and time.time() < deadline:
            time.sleep(0.2)
        if self.frame is None:
            raise RuntimeError(f'{IMAGE_TOPIC} 수신 실패 — vision_env.py 확인')

    def blob_estimate(self, H, cam_pos):
        """현재 프레임에서 파란 블롭의 world (x, y) 추정 (없으면 None)"""
        try:
            vx, vy, _, _ = detect_cube(self.frame.copy(), H, cam_pos, self.args.cube_size)
            return vx, vy
        except RuntimeError:
            return None

    def spawn_cube(self, x, y, H, cam_pos):
        """큐브 배치. 정지 위치로 순간이동시키면 pose 변경 이벤트가 1번뿐이라
        비동기 렌더가 놓칠 수 있음 → 공중에서 떨어뜨려(낙하 동안 연속 pose 변경)
        렌더 반영을 강제하고, 검출값이 명령 위치와 일치할 때까지 확인한다."""
        drop_z = 0.06
        # set_pose는 없는 모델에도 'data: true'를 반환(요청 접수일 뿐)하므로
        # 존재 여부는 모델 목록으로 직접 확인해야 한다
        models = subprocess.run(['gz', 'model', '--list'],
                                capture_output=True, text=True, timeout=10).stdout
        cube_exists = 'pick_cube' in models
        for attempt in range(3):
            if not cube_exists:
                subprocess.run(
                    ['ros2', 'run', 'ros_gz_sim', 'create',
                     '-string', cube_sdf('pick_cube', self.args.cube_size),
                     '-name', 'pick_cube', '-x', str(x), '-y', str(y), '-z', str(drop_z)],
                    capture_output=True, text=True, timeout=15)
                print('큐브 최초 생성 (엔티티 추가는 센서 반영이 느릴 수 있음)')
                cube_exists = True
                wait_s = 30  # 엔티티 추가는 렌더 씬 반영이 수십 초 걸릴 수 있음
            else:
                pose_req = f'name: "pick_cube" position {{x: {x} y: {y} z: {drop_z}}}'
                subprocess.run(
                    ['gz', 'service', '-s', '/world/empty/set_pose',
                     '--reqtype', 'gz.msgs.Pose', '--reptype', 'gz.msgs.Boolean',
                     '--timeout', '2000', '--req', pose_req],
                    capture_output=True, text=True)
                wait_s = 10
            # 검출값이 명령 위치 3cm 이내로 들어올 때까지 대기
            deadline = time.time() + wait_s
            while time.time() < deadline:
                self.check_frames_alive()
                est = self.blob_estimate(H, cam_pos)
                if est and math.hypot(est[0] - x, est[1] - y) < 0.03:
                    print(f'큐브 배치 (실제 위치): ({x:.3f}, {y:.3f}) — 센서 반영 확인')
                    time.sleep(0.5)  # 물리 정착
                    return
                time.sleep(0.5)
            print(f'센서 반영 미확인 (시도 {attempt+1}/3) — 재배치')
        raise RuntimeError('큐브 배치가 카메라에 반영되지 않음 — 시뮬레이션 상태 확인')

    def move_joints(self, joints, label, retries=3):
        for attempt in range(1, retries + 1):
            self.moveit2.move_to_configuration(joints)
            if self.moveit2.wait_until_executed():
                time.sleep(0.8)
                return
            time.sleep(1.0)
        raise RuntimeError(f'[{label}] 이동 실패')

    def set_gripper(self, position):
        goal = GripperCommand.Goal()
        goal.command.position = position
        goal.command.max_effort = 5.0
        self.gripper_client.wait_for_server(timeout_sec=3.0)
        future = self.gripper_client.send_goal_async(goal)
        # 주의: rclpy.spin_until_future_complete를 쓰면 백그라운드 executor와
        # 같은 노드를 이중 spin하게 되어 wait set 경쟁으로 executor가 죽음.
        # 콜백 처리는 executor가 하므로 future 완료만 기다린다.
        deadline = time.time() + 3.0
        while not future.done() and time.time() < deadline:
            time.sleep(0.05)
        time.sleep(1.0)

    def gz_remove(self, name):
        subprocess.run(
            ['gz', 'service', '-s', '/world/empty/remove',
             '--reqtype', 'gz.msgs.Entity', '--reptype', 'gz.msgs.Boolean',
             '--timeout', '2000', '--req', f'name: "{name}" type: MODEL'],
            capture_output=True)

    def spawn_pillar(self, ox, oy):
        """기둥을 Gazebo 실물(static) + MoveIt planning scene + Foxglove 마커로 추가"""
        a = self.args
        h, w = a.pillar_height, a.pillar_width
        sdf = f"""<?xml version="1.0"?>
<sdf version="1.8">
  <model name="pillar"><static>true</static><link name="link">
    <collision name="c"><geometry><box><size>{w} {w} {h}</size></box></geometry></collision>
    <visual name="v"><geometry><box><size>{w} {w} {h}</size></box></geometry>
      <material><ambient>1 0.3 0.1 1</ambient><diffuse>1 0.3 0.1 1</diffuse></material>
    </visual></link></model></sdf>"""
        subprocess.run(
            ['ros2', 'run', 'ros_gz_sim', 'create', '-string', sdf, '-name', 'pillar',
             '-x', str(ox), '-y', str(oy), '-z', str(h / 2)],
            capture_output=True, text=True, timeout=15)
        self.moveit2.add_collision_box(
            id='pillar', size=[w, w, h], position=[ox, oy, h / 2],
            quat_xyzw=[0.0, 0.0, 0.0, 1.0], frame_id='world')
        m = Marker()
        m.header.frame_id = 'world'
        m.ns, m.id = 'obstacle', 0
        m.type, m.action = Marker.CUBE, Marker.ADD
        m.pose.position.x, m.pose.position.y, m.pose.position.z = ox, oy, h / 2
        m.pose.orientation.w = 1.0
        m.scale.x, m.scale.y, m.scale.z = w, w, h
        m.color.r, m.color.g, m.color.b, m.color.a = 1.0, 0.3, 0.1, 0.8
        self.pillar_marker_pub.publish(m)
        print(f'기둥 스폰: ({ox:.3f}, {oy:.3f}), 크기 {w}x{w}x{h}m')
        time.sleep(1.0)  # planning scene 반영 대기

    @staticmethod
    def ang_diff(a, b):
        return abs(math.atan2(math.sin(a - b), math.cos(a - b)))

    def sample_pillar_pos(self, cx, cy):
        """체커보드 위 무작위 기둥 위치.
        벌린 그리퍼 폭(±4cm) 때문에 집기 '방향' 부채꼴과 0.5rad 이상 분리 필요.
        반경 0.19 이상: 안쪽 접기 운반 통로(r=0.13) 확보."""
        cube_ang = math.atan2(cy, cx)
        for _ in range(500):
            ox = random.uniform(0.08, 0.33)
            oy = random.uniform(-0.11, 0.11)
            if (0.19 <= math.hypot(ox, oy) <= 0.32
                    and self.ang_diff(math.atan2(oy, ox), cube_ang) >= 0.5
                    and math.hypot(ox - cx, oy - cy) >= 0.10):
                return ox, oy
        raise RuntimeError('기둥 위치 샘플링 실패 — 큐브를 다른 위치로 옮겨보세요')

    def choose_place_angle(self, cube_ang, pillar_ang=None):
        """놓기 각도 선택: 기둥이 있으면 기둥 방향과 0.5rad 이상 분리되는
        후보를 고른다 (놓기 각도를 고정하면 제외 구역이 보드를 다 덮어버림)"""
        candidates = [cube_ang + d for d in
                      (-1.0, -1.2, -1.4, 1.0, 1.2, 1.4, -0.8, 0.8)]
        for ang in candidates:
            if abs(ang) > 2.9:  # joint1 한계 여유
                continue
            if pillar_ang is None or self.ang_diff(ang, pillar_ang) >= 0.5:
                return ang
        raise RuntimeError('놓기 각도 선택 실패')

    def pick(self, cx, cy, place_ang):
        a = self.args
        r = math.hypot(cx, cy)
        depth = (r + a.grasp_depth) / r
        gx, gy = cx * depth, cy * depth
        pitch = 0.4
        touch = (a.cube_size - 0.042) / 2
        close_pos = max(touch - 0.001, -0.011)
        carry_h = a.grasp_z + 0.07
        cube_angle = math.atan2(cy, cx)
        px_, py_ = r * math.cos(place_ang), r * math.sin(place_ang)

        self.set_gripper(GRIPPER_OPEN)
        self.move_joints(ik(cx * 0.8, cy * 0.8, a.grasp_z + 0.05, pitch), '접근')
        self.move_joints(ik(gx, gy, a.grasp_z, pitch), '집기 위치')
        self.set_gripper(close_pos)

        # 큐브를 그리퍼에 attach → 운반 중 큐브-기둥 충돌도 회피 대상
        self.moveit2.add_collision_box(
            id='cube', size=[a.cube_size] * 3,
            position=[cx, cy, a.cube_size / 2], quat_xyzw=[0.0, 0.0, 0.0, 1.0],
            frame_id='world')
        time.sleep(0.3)
        self.moveit2.attach_collision_object(
            id='cube', link_name='end_effector_link',
            touch_links=['gripper_left_link', 'gripper_right_link',
                         'link5', 'end_effector_link'])
        time.sleep(0.5)

        self.move_joints(ik(gx, gy, carry_h, pitch), '들어올리기')

        if a.pillar:
            # 기둥 회피: 팔을 안쪽으로 접어(r=0.13) 기둥 반경 안쪽으로 회전
            # (MoveIt 자유 플래닝은 elbow flip으로 큐브를 놓칠 수 있음)
            r_in = 0.13
            delta = math.atan2(math.sin(place_ang - cube_angle),
                               math.cos(place_ang - cube_angle))
            self.move_joints(
                ik(r_in * math.cos(cube_angle), r_in * math.sin(cube_angle),
                   carry_h, pitch), '안쪽으로 접기')
            n_steps = max(2, math.ceil(abs(delta) / 0.35))
            for i in range(1, n_steps + 1):
                a_i = cube_angle + delta * i / n_steps
                self.move_joints(
                    ik(r_in * math.cos(a_i), r_in * math.sin(a_i), carry_h, pitch),
                    f'회피 회전 {i}/{n_steps}')
            self.move_joints(ik(px_, py_, carry_h, pitch), '뻗기')
        else:
            self.move_joints(ik(px_, py_, carry_h, pitch), '이동')

        self.move_joints(ik(px_, py_, a.grasp_z + 0.005, pitch), '내려놓기')
        self.moveit2.detach_collision_object('cube')
        time.sleep(0.5)
        # 반만 열기 — 활짝 열면 손가락이 근처 기둥과 충돌 판정될 수 있음
        self.set_gripper(min(touch + 0.006, GRIPPER_OPEN))
        self.move_joints(ik(px_, py_, carry_h, pitch), '후퇴')
        self.moveit2.remove_collision_object('cube')
        # 홈([0,0,0,0])은 팔꿈치가 보드 위 각도 0 방향으로 낮게 뻗어 기둥과
        # 간섭하기 쉬움 → 항상 비어있는 관측 자세로 복귀
        self.move_joints(LOOK_POSE, '관측 자세 복귀')
        print(f'놓기 완료: ({px_:.3f}, {py_:.3f})')

    def run(self):
        a = self.args
        with open(CALIB_FILE) as f:
            calib = json.load(f)
        H = np.array(calib['homography'])
        cam_pos = calib['cam_pos']

        self.wait_frame()

        # 이전 실행 잔여물 제거 (planning scene + Gazebo 실물)
        # — 유령/실물 장애물 옆에 팔이 멈춰 있으면 플래닝이 거부되므로 정리 후 이동
        self.moveit2.detach_all_collision_objects()
        self.moveit2.remove_collision_object('pillar')
        self.moveit2.remove_collision_object('cube')
        self.gz_remove('pillar')
        time.sleep(0.5)

        # 팔을 시야 밖으로 치운 뒤 검출 (홈 자세는 작업영역을 가림)
        self.move_joints(LOOK_POSE, '관측 자세')

        # 큐브 스폰 (지정 좌표 또는 카메라 시야 내 무작위)
        if a.cube_x is not None:
            sx, sy = a.cube_x, a.cube_y
        else:
            sx = random.uniform(0.20, 0.30)
            sy = random.uniform(-0.10, 0.10)
        self.spawn_cube(sx, sy, H, cam_pos)

        # 씬 반영 지연에 안전하도록, 몇 프레임 간격으로 두 번 검출해서
        # 추정값이 1cm 이내로 수렴할 때까지 반복 (정지 상태 가정)
        prev = None
        for attempt in range(12):
            self.check_frames_alive()
            frame = self.frame.copy()
            try:
                vx, vy, px, contour = detect_cube(frame, H, cam_pos, a.cube_size)
            except RuntimeError:
                cv2.imwrite('/home/moveright/omx_ws/vision/pick_debug.png', frame)
                if attempt == 11:
                    raise
                self.wait_new_frames(10)
                continue
            if prev is not None and math.hypot(vx - prev[0], vy - prev[1]) < 0.01:
                break
            prev = (vx, vy)
            self.wait_new_frames(5)
        else:
            raise RuntimeError('검출값이 수렴하지 않음 — 카메라/씬 상태 확인')
        err = math.hypot(vx - sx, vy - sy)
        print(f'비전 추정 위치: ({vx:.3f}, {vy:.3f}) — 실제와 오차 {err*100:.1f}cm')

        cv2.drawContours(frame, [contour], -1, (0, 255, 255), 2)
        cv2.circle(frame, tuple(px.astype(int)), 6, (0, 0, 255), -1)
        cv2.putText(frame, f'({vx:.3f}, {vy:.3f})', tuple(px.astype(int) + 12),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 255), 2)
        cv2.imwrite('/home/moveright/omx_ws/vision/pick_debug.png', frame)
        print('검출 확인 이미지: vision/pick_debug.png')

        if a.detect_only:
            return
        if err > 0.05:
            raise RuntimeError('비전 오차가 5cm 초과 — 캘리브레이션을 다시 하세요')

        # 장애물 옵션: 기둥을 먼저 무작위 배치하고, 놓기 각도를 기둥을 피해 선택
        cube_ang = math.atan2(vy, vx)
        if a.pillar:
            ox, oy = self.sample_pillar_pos(vx, vy)
            self.spawn_pillar(ox, oy)
            place_ang = self.choose_place_angle(cube_ang, math.atan2(oy, ox))
        else:
            place_ang = self.choose_place_angle(cube_ang)

        self.pick(vx, vy, place_ang)  # 비전 추정 좌표로 집기 (실제 좌표는 사용 안 함!)


def parse_args():
    p = argparse.ArgumentParser(description='비전 기반 집기 데모',
                                formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    p.add_argument('--cube-x', type=float, default=None, help='큐브 x (생략 시 무작위)')
    p.add_argument('--cube-y', type=float, default=0.0, help='큐브 y')
    p.add_argument('--cube-size', type=float, default=0.025, help='큐브 한 변 [m]')
    p.add_argument('--grasp-z', type=float, default=0.035, help='집기 손끝 높이 [m]')
    p.add_argument('--grasp-depth', type=float, default=0.015, help='깊게 물기 여유 [m]')
    p.add_argument('--detect-only', action='store_true', help='검출만 하고 팔은 안 움직임')
    p.add_argument('--pillar', action='store_true',
                   help='체커보드 위 무작위 위치에 기둥 장애물 추가 (회피 운반)')
    p.add_argument('--pillar-height', type=float, default=0.15, help='기둥 높이 [m]')
    p.add_argument('--pillar-width', type=float, default=0.05, help='기둥 폭 [m]')
    return p.parse_args()


def main():
    args = parse_args()
    rclpy.init()
    demo = None
    try:
        demo = VisionPick(args)
        demo.run()
    finally:
        if demo is not None and demo.pose_bridge:
            import os
            import signal
            try:
                os.killpg(os.getpgid(demo.pose_bridge.pid), signal.SIGTERM)
            except ProcessLookupError:
                pass
        rclpy.shutdown()


if __name__ == '__main__':
    main()
