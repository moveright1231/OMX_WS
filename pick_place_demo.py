#!/usr/bin/env python3
"""OM-X: 실제 오브젝트 pick & place 데모 (+ 장애물 회피)

Gazebo에 물리 큐브를 스폰하고, 그리퍼로 집어서 다른 위치로 옮긴다.
기본으로 집기-놓기 경로 중간에 기둥 장애물이 실물(Gazebo)과 planning scene
양쪽에 추가되며, 집은 큐브는 그리퍼에 attach되어 운반 중 큐브-기둥 충돌도 회피한다.
큐브의 실제 pose는 Gazebo → ros_gz_bridge로 받아 Foxglove에 /cube_marker로 표시됨.

  /usr/bin/python3 pick_place_demo.py                    # 기본값 (장애물 포함)
  /usr/bin/python3 pick_place_demo.py --no-pillar        # 장애물 없이
  /usr/bin/python3 pick_place_demo.py --pillar-height 0.12 --pillar-angle -0.5
  /usr/bin/python3 pick_place_demo.py --cube-size 0.03

동작: 큐브+기둥 스폰 → 접근 → 집기 → attach → 들어올려 기둥 회피 이동 → 내려놓기 → 복귀
"""
import argparse
import math
import subprocess
import time, threading
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.parameter import Parameter
from rclpy.qos import QoSProfile, DurabilityPolicy
from control_msgs.action import GripperCommand
from geometry_msgs.msg import PoseStamped
from pymoveit2 import MoveIt2
from visualization_msgs.msg import Marker

JOINTS = ['joint1', 'joint2', 'joint3', 'joint4']

# URDF 링크 치수 [m]
BASE_R = 0.012          # joint1 축에서 joint2까지 반경 오프셋
BASE_Z = 0.0595         # joint2 높이
L_UPPER = math.hypot(0.024, 0.128)   # joint2→joint3
ALPHA = math.atan2(0.024, 0.128)     # 상완 링크의 굽힘 오프셋 각
L_FORE = 0.124          # joint3→joint4
L_HAND = 0.126          # joint4→end_effector

JOINT_LIMITS = [(-3.14, 3.14), (-1.5, 1.5), (-1.5, 1.4), (-1.7, 1.97)]
GRIPPER_OPEN = 0.019


def ik(x, y, z, pitch):
    """4-DOF 해석적 IK. pitch: 손끝 아래쪽 기울기 [rad] (0=수평).
    반환: [j1, j2, j3, j4] / 도달 불가·한계 초과 시 ValueError"""
    j1 = math.atan2(y, x)
    r = math.hypot(x, y)

    # 손목(joint4) 위치
    r_w = r - L_HAND * math.cos(pitch)
    z_w = z + L_HAND * math.sin(pitch)

    # joint2 기준 상대 위치
    dr = r_w - BASE_R
    dz = z_w - BASE_Z
    d = math.hypot(dr, dz)

    cos_delta = (d * d - L_UPPER**2 - L_FORE**2) / (2 * L_UPPER * L_FORE)
    if not -1.0 <= cos_delta <= 1.0:
        raise ValueError(f'도달 불가: ({x:.3f}, {y:.3f}, {z:.3f}, pitch={pitch})')
    delta = math.acos(cos_delta)  # elbow-up

    psi = math.atan2(dr, dz)
    u = psi - math.atan2(L_FORE * math.sin(delta), L_UPPER + L_FORE * math.cos(delta))

    j2 = u - ALPHA
    j3 = delta - math.pi / 2 + ALPHA
    j4 = pitch - j2 - j3

    joints = [j1, j2, j3, j4]
    for i, (val, (lo, hi)) in enumerate(zip(joints, JOINT_LIMITS)):
        if not lo <= val <= hi:
            raise ValueError(f'joint{i+1}={val:.3f} 한계({lo}~{hi}) 초과: '
                             f'목표 ({x:.3f}, {y:.3f}, {z:.3f}, pitch={pitch})')
    return joints


def cube_sdf(name, size, mass=0.03):
    inertia = mass * size * size / 6.0
    return f"""<?xml version="1.0"?>
<sdf version="1.8">
  <model name="{name}">
    <link name="link">
      <inertial>
        <mass>{mass}</mass>
        <inertia><ixx>{inertia}</ixx><iyy>{inertia}</iyy><izz>{inertia}</izz>
                 <ixy>0</ixy><ixz>0</ixz><iyz>0</iyz></inertia>
      </inertial>
      <collision name="collision">
        <geometry><box><size>{size} {size} {size}</size></box></geometry>
        <surface><friction><ode><mu>2.5</mu><mu2>2.5</mu2></ode></friction></surface>
      </collision>
      <visual name="visual">
        <geometry><box><size>{size} {size} {size}</size></box></geometry>
        <material><ambient>0.1 0.4 1.0 1</ambient><diffuse>0.1 0.4 1.0 1</diffuse></material>
      </visual>
    </link>
    <plugin filename="gz-sim-pose-publisher-system" name="gz::sim::systems::PosePublisher">
      <publish_model_pose>true</publish_model_pose>
      <publish_link_pose>false</publish_link_pose>
      <update_frequency>10</update_frequency>
    </plugin>
  </model>
</sdf>"""


class PickPlaceDemo:

    def __init__(self, args):
        self.args = args
        self.cube_name = 'pick_cube'
        self.cube_pose = None
        self.bridge_proc = None

        self.node = Node('pick_place_demo')
        self.node.set_parameters([Parameter('use_sim_time', Parameter.Type.BOOL, True)])

        cb = ReentrantCallbackGroup()
        self.moveit2 = MoveIt2(
            node=self.node, joint_names=JOINTS,
            base_link_name='world',
            end_effector_name='end_effector_link',
            group_name='arm', callback_group=cb,
        )
        self.gripper_client = ActionClient(
            self.node, GripperCommand, '/gripper_controller/gripper_cmd'
        )

        qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.marker_pub = self.node.create_publisher(Marker, '/cube_marker', qos)
        self.pillar_marker_pub = self.node.create_publisher(Marker, '/obstacle_marker', qos)
        self.node.create_subscription(
            PoseStamped, f'/model/{self.cube_name}/pose', self.cube_pose_cb, 10
        )

        self.executor = MultiThreadedExecutor(4)
        self.executor.add_node(self.node)
        threading.Thread(target=self.executor.spin, daemon=True).start()

    # ---------- Gazebo 오브젝트 ----------

    def gz_remove(self, name):
        """Gazebo에서 모델 제거 (없으면 무시)"""
        subprocess.run(
            ['gz', 'service', '-s', '/world/empty/remove',
             '--reqtype', 'gz.msgs.Entity', '--reptype', 'gz.msgs.Boolean',
             '--timeout', '2000', '--req', f'name: "{name}" type: MODEL'],
            capture_output=True,
        )

    def spawn_cube(self):
        self.gz_remove(self.cube_name)
        time.sleep(0.5)

        sdf = cube_sdf(self.cube_name, self.args.cube_size)
        z0 = self.args.cube_size / 2 + 0.001
        result = subprocess.run(
            ['ros2', 'run', 'ros_gz_sim', 'create', '-string', sdf,
             '-name', self.cube_name,
             '-x', str(self.args.cube_x), '-y', str(self.args.cube_y), '-z', str(z0)],
            capture_output=True, text=True, timeout=15,
        )
        if 'Entity creation successfull' not in result.stdout + result.stderr:
            print(f'큐브 스폰 결과 불명확 — 계속 진행: {result.stdout[-100:]} {result.stderr[-100:]}')
        print(f'큐브 스폰: ({self.args.cube_x}, {self.args.cube_y}), 크기 {self.args.cube_size}m')

        # 큐브 pose를 ROS로 가져오는 브릿지 (스크립트 종료 시 함께 종료)
        # start_new_session: 종료 시 wrapper(ros2 run)만 죽고 실제 브릿지가
        # 좀비로 남는 것을 막기 위해 프로세스 그룹째 kill한다 (cleanup 참고)
        self.bridge_proc = subprocess.Popen(
            ['ros2', 'run', 'ros_gz_bridge', 'parameter_bridge',
             f'/model/{self.cube_name}/pose@geometry_msgs/msg/PoseStamped[gz.msgs.Pose'],
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
            start_new_session=True,
        )

    def spawn_pillar(self, px, py):
        """기둥을 Gazebo 실물(static) + MoveIt planning scene 양쪽에 추가"""
        a = self.args
        h, w = a.pillar_height, a.pillar_width
        self.gz_remove('pillar')
        time.sleep(0.3)
        sdf = f"""<?xml version="1.0"?>
<sdf version="1.8">
  <model name="pillar">
    <static>true</static>
    <link name="link">
      <collision name="collision">
        <geometry><box><size>{w} {w} {h}</size></box></geometry>
      </collision>
      <visual name="visual">
        <geometry><box><size>{w} {w} {h}</size></box></geometry>
        <material><ambient>1.0 0.3 0.1 1</ambient><diffuse>1.0 0.3 0.1 1</diffuse></material>
      </visual>
    </link>
  </model>
</sdf>"""
        subprocess.run(
            ['ros2', 'run', 'ros_gz_sim', 'create', '-string', sdf,
             '-name', 'pillar', '-x', str(px), '-y', str(py), '-z', str(h / 2)],
            capture_output=True, text=True, timeout=15,
        )
        self.moveit2.add_collision_box(
            id='pillar', size=[w, w, h],
            position=[px, py, h / 2], quat_xyzw=[0.0, 0.0, 0.0, 1.0],
            frame_id='world',
        )
        m = Marker()
        m.header.frame_id = 'world'
        m.ns, m.id = 'obstacle', 0
        m.type, m.action = Marker.CUBE, Marker.ADD
        m.pose.position.x, m.pose.position.y, m.pose.position.z = px, py, h / 2
        m.pose.orientation.w = 1.0
        m.scale.x, m.scale.y, m.scale.z = w, w, h
        m.color.r, m.color.g, m.color.b, m.color.a = 1.0, 0.3, 0.1, 0.8
        self.pillar_marker_pub.publish(m)
        print(f'기둥 스폰: ({px:.3f}, {py:.3f}), 크기 {w}x{w}x{h}m')
        time.sleep(1.0)  # planning scene 반영 대기

    def cube_pose_cb(self, msg):
        self.cube_pose = msg.pose
        m = Marker()
        m.header.frame_id = 'world'
        m.ns, m.id = 'cube', 0
        m.type, m.action = Marker.CUBE, Marker.ADD
        m.pose = msg.pose
        m.scale.x = m.scale.y = m.scale.z = self.args.cube_size
        m.color.r, m.color.g, m.color.b, m.color.a = 0.1, 0.4, 1.0, 1.0
        self.marker_pub.publish(m)

    # ---------- 로봇 동작 ----------

    def wait_for_joint_states(self, timeout=10.0):
        deadline = time.time() + timeout
        while self.moveit2.joint_state is None:
            if time.time() > deadline:
                raise RuntimeError('joint_states 수신 실패 — 시뮬레이션 확인 필요')
            time.sleep(0.1)
        print('joint_states 수신 OK')

    def move_joints(self, joints, label, retries=3):
        deg = [round(math.degrees(j), 1) for j in joints]
        print(f'[{label}] 관절 목표(deg): {deg}')
        for attempt in range(1, retries + 1):
            self.moveit2.move_to_configuration(joints)
            if self.moveit2.wait_until_executed():
                time.sleep(0.8)  # 정착 대기 (짧으면 다음 플래닝이 start state 불일치로 실패)
                return True
            print(f'[{label}] 시도 {attempt}/{retries} 실패, 재시도...')
            time.sleep(1.0)
        raise RuntimeError(f'[{label}] 이동 실패')

    def set_gripper(self, position, label):
        print(f'[그리퍼] {label} (pos={position:.4f})')
        goal = GripperCommand.Goal()
        goal.command.position = position
        goal.command.max_effort = 5.0
        if not self.gripper_client.wait_for_server(timeout_sec=3.0):
            raise RuntimeError('gripper 액션 서버 없음')
        future = self.gripper_client.send_goal_async(goal)
        rclpy.spin_until_future_complete(self.node, future, timeout_sec=3.0)
        time.sleep(1.0)  # 물리 정착 대기

    # ---------- 시나리오 ----------

    def run(self):
        a = self.args
        self.wait_for_joint_states()
        # 이전 실행 잔여물 정리 (planning scene + Gazebo 실물 모두)
        # → 잔여 기둥 옆에 팔이 멈춰있으면 시작 상태 충돌로 플래닝이 전부 거부되므로,
        #   장애물이 없는 상태에서 먼저 원위치로 복귀한 뒤 스폰한다
        self.moveit2.detach_all_collision_objects()
        self.moveit2.remove_collision_object('pillar')
        self.moveit2.remove_collision_object('cube')
        self.gz_remove('pillar')
        self.gz_remove(self.cube_name)
        time.sleep(1.0)
        self.moveit2.allowed_planning_time = 5.0  # 장애물 회피 경로 탐색 여유
        # 속도/가속 제한 — 빠르게 휘두르면 운반 중 큐브를 놓침
        self.moveit2.max_velocity = 0.3
        self.moveit2.max_acceleration = 0.3
        self.move_joints([0.0, 0.0, 0.0, 0.0], '0/7 초기 원위치')
        self.spawn_cube()
        time.sleep(1.0)

        # 그리퍼 닫힘량: 큐브에 살짝 파고들 정도 (관절 -0.011 한계 내)
        # 주의: 더 세게 조이면(-0.002 이상) 접촉 물리가 큐브를 튕겨내서 오히려 실패함
        touch = (a.cube_size - 0.042) / 2
        close_pos = max(touch - 0.001, -0.011)

        cx, cy = a.cube_x, a.cube_y
        r_cube = math.hypot(cx, cy)
        pitch = a.pitch

        # 웨이포인트 (모두 해석적 IK로 관절 목표 계산)
        # 집기는 큐브 중심보다 grasp_depth만큼 더 뻗어서, 손끝이 아니라
        # 손가락 안쪽에 깊이 물리게 한다 (얕게 잡으면 운반 중 빠짐)
        depth_ratio = (r_cube + a.grasp_depth) / r_cube
        gx, gy = cx * depth_ratio, cy * depth_ratio
        pregrasp = ik(cx * 0.8, cy * 0.8, a.grasp_z + 0.05, pitch)
        grasp = ik(gx, gy, a.grasp_z, pitch)
        lift = ik(gx, gy, a.grasp_z + 0.07, pitch)

        carry_h = a.grasp_z + 0.07  # 운반 높이

        pa = a.place_angle
        cube_angle = math.atan2(cy, cx)
        px = r_cube * math.cos(cube_angle + pa)
        py = r_cube * math.sin(cube_angle + pa)
        place_high = ik(px, py, a.grasp_z + 0.07, pitch)
        place_low = ik(px, py, a.grasp_z + 0.005, pitch)

        print(f'집기: ({cx}, {cy}) → 놓기: ({px:.3f}, {py:.3f})')

        # 기둥: 집기-놓기 경로 중간 각도에 배치
        if not a.no_pillar:
            ox = a.pillar_radius * math.cos(cube_angle + a.pillar_angle)
            oy = a.pillar_radius * math.sin(cube_angle + a.pillar_angle)
            self.spawn_pillar(ox, oy)

        self.set_gripper(GRIPPER_OPEN, '열기')
        self.move_joints(pregrasp, '1/7 접근 준비')

        # 집기 (실패 시 재시도: 큐브 실제 높이로 성공 여부 검증)
        for grasp_try in range(1, 4):
            self.move_joints(grasp, '2/7 집기 위치')
            self.set_gripper(close_pos, '닫기(집기)')
            self.move_joints(lift, '3/7 들어올리기')
            time.sleep(0.5)
            cube_z = self.cube_pose.position.z if self.cube_pose else None
            if cube_z is None or cube_z > a.cube_size / 2 + 0.02:
                break  # 집기 성공 (큐브가 바닥에서 떨어짐)
            print(f'집기 실패 (큐브 높이 {cube_z:.3f}m) — 재시도 {grasp_try}/3')
            self.set_gripper(GRIPPER_OPEN, '열기(재시도)')
            if grasp_try == 3:
                raise RuntimeError('집기 3회 실패 — --grasp-z나 --cube-size 조정 필요')

        # 큐브를 planning scene에 추가하고 그리퍼에 부착
        # → 운반 중 '큐브' 자체와 기둥의 충돌도 회피 대상이 됨
        cp = self.cube_pose
        cube_xyz = ([cp.position.x, cp.position.y, cp.position.z]
                    if cp else [cx, cy, a.cube_size / 2])
        self.moveit2.add_collision_box(
            id='cube', size=[a.cube_size] * 3,
            position=cube_xyz, quat_xyzw=[0.0, 0.0, 0.0, 1.0], frame_id='world',
        )
        time.sleep(0.5)
        self.moveit2.attach_collision_object(
            id='cube', link_name='end_effector_link',
            touch_links=['gripper_left_link', 'gripper_right_link',
                         'link5', 'end_effector_link'],
        )
        time.sleep(0.5)

        # 회피 전략: 팔을 안쪽으로 접어 기둥 반경 안쪽으로 돌아간다.
        # 높이/피치를 유지한 채 반경만 줄이므로 팔꿈치 IK 해가 바뀌지 않아
        # (elbow flip 없음) 큐브를 흘리지 않고, 각 구간은 MoveIt 충돌 검사를 거친다.
        r_in = a.carry_radius
        self.move_joints(
            ik(r_in * math.cos(cube_angle), r_in * math.sin(cube_angle), carry_h, pitch),
            f'4/7 안쪽으로 접기 (r={r_in})')
        n_steps = max(2, int(abs(pa) / 0.4))
        for i in range(1, n_steps + 1):
            ang = cube_angle + pa * i / n_steps
            self.move_joints(
                ik(r_in * math.cos(ang), r_in * math.sin(ang), carry_h, pitch),
                f'4/7 회피 회전 {i}/{n_steps}')
            if self.cube_pose and self.cube_pose.position.z < a.cube_size / 2 + 0.02:
                raise RuntimeError(f'운반 중 큐브 낙하 (회전 {i}/{n_steps} 지점) — '
                                   '마찰/속도/그립 조정 필요')

        self.move_joints(place_high, '5/7 뻗기')
        self.move_joints(place_low, '5/7 내려놓기 위치')

        self.moveit2.detach_collision_object('cube')
        time.sleep(0.5)
        # 활짝 열면 손가락이 기둥 쪽으로 벌어져 충돌 판정될 수 있음 → 큐브가 빠질 만큼만
        release_pos = min(touch + 0.006, GRIPPER_OPEN)
        self.set_gripper(release_pos, '반열기(놓기)')
        self.move_joints(place_high, '6/7 후퇴')
        self.moveit2.remove_collision_object('cube')
        self.move_joints([0.0, 0.0, 0.0, 0.0], '7/7 원위치')

        # 결과 검증: 큐브 실제 위치 확인
        time.sleep(1.0)
        if self.cube_pose is not None:
            fx, fy = self.cube_pose.position.x, self.cube_pose.position.y
            err = math.hypot(fx - px, fy - py)
            print(f'큐브 최종 위치: ({fx:.3f}, {fy:.3f}) — 목표 ({px:.3f}, {py:.3f}), 오차 {err*100:.1f}cm')
            print('성공! 큐브를 옮겼습니다.' if err < 0.06 else
                  '큐브가 목표에서 벗어남 — 집기가 미끄러졌을 수 있습니다.')
        else:
            print('큐브 pose 미수신 (브릿지 확인 필요)')

        if not a.no_hold:
            print('Ctrl+C로 종료 (종료하면 /cube_marker도 사라짐)')
            try:
                while rclpy.ok():
                    time.sleep(1.0)
            except KeyboardInterrupt:
                pass

    def cleanup(self):
        if self.bridge_proc:
            import os
            import signal
            try:
                os.killpg(os.getpgid(self.bridge_proc.pid), signal.SIGTERM)
            except ProcessLookupError:
                pass


def parse_args():
    p = argparse.ArgumentParser(description='OM-X pick & place 데모',
                                formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    p.add_argument('--cube-x', type=float, default=0.24, help='큐브 x [m]')
    p.add_argument('--cube-y', type=float, default=0.0, help='큐브 y [m]')
    p.add_argument('--cube-size', type=float, default=0.025, help='큐브 한 변 [m]')
    p.add_argument('--grasp-z', type=float, default=0.035, help='집기 시 손끝 높이 [m]')
    p.add_argument('--grasp-depth', type=float, default=0.015,
                   help='큐브 중심보다 더 뻗는 깊이 (깊게 물리기) [m]')
    p.add_argument('--pitch', type=float, default=0.4, help='손끝 아래 기울기 [rad]')
    p.add_argument('--place-angle', type=float, default=-1.2,
                   help='놓을 위치의 베이스 회전량 [rad] (기둥과 너무 가까우면 '
                        '놓은 후 손가락-기둥 충돌 판정으로 후퇴 플래닝이 실패함)')
    p.add_argument('--no-pillar', action='store_true', help='기둥 장애물 없이 실행')
    p.add_argument('--pillar-height', type=float, default=0.15, help='기둥 높이 [m]')
    p.add_argument('--pillar-width', type=float, default=0.05, help='기둥 폭 [m]')
    p.add_argument('--pillar-radius', type=float, default=0.22, help='기둥 반경 위치 [m]')
    p.add_argument('--pillar-angle', type=float, default=-0.5,
                   help='기둥 각도 (집기-놓기 중간, 집기 기준 상대) [rad]')
    p.add_argument('--carry-radius', type=float, default=0.13,
                   help='운반 시 반경 (기둥 안쪽으로 접어서 회전) [m]')
    p.add_argument('--no-hold', action='store_true', help='데모 후 바로 종료')
    return p.parse_args()


def main():
    args = parse_args()
    rclpy.init()
    demo = PickPlaceDemo(args)
    try:
        demo.run()
    finally:
        demo.cleanup()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
