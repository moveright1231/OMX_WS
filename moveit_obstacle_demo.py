#!/usr/bin/env python3
"""OM-X: 장애물 회피 데모

기둥 높이/위치, 시작·목표 지점을 명령행 인자로 조정할 수 있음:

  /usr/bin/python3 moveit_obstacle_demo.py                        # 기본값으로 실행
  /usr/bin/python3 moveit_obstacle_demo.py --pillar-height 0.4    # 기둥 높이 40cm
  /usr/bin/python3 moveit_obstacle_demo.py --start 0.18 -0.14 0.12 --goal 0.18 0.14 0.12
  /usr/bin/python3 moveit_obstacle_demo.py --pillar-pos 0.22 0.0 --pillar-width 0.06
  /usr/bin/python3 moveit_obstacle_demo.py --no-hold              # 데모 후 바로 종료

동작: 시작 지점 이동 → 기둥 장애물 추가 → 목표 지점으로 회피 이동 → 복귀
"""
import argparse
import time, threading
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.parameter import Parameter
from rclpy.qos import QoSProfile, DurabilityPolicy
from pymoveit2 import MoveIt2
from visualization_msgs.msg import Marker

JOINTS = ['joint1', 'joint2', 'joint3', 'joint4']


def parse_args():
    p = argparse.ArgumentParser(
        description='OM-X 장애물 회피 데모',
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    p.add_argument('--start', nargs=3, type=float, metavar=('X', 'Y', 'Z'),
                   default=[0.18, -0.14, 0.12], help='시작 지점 [m]')
    p.add_argument('--goal', nargs=3, type=float, metavar=('X', 'Y', 'Z'),
                   default=[0.18, 0.14, 0.12], help='목표 지점 [m]')
    p.add_argument('--pillar-height', type=float, default=0.30,
                   help='기둥 높이 [m] (바닥에서 세워짐)')
    p.add_argument('--pillar-width', type=float, default=0.04,
                   help='기둥 가로/세로 폭 [m]')
    p.add_argument('--pillar-pos', nargs=2, type=float, metavar=('X', 'Y'),
                   default=[0.20, 0.0], help='기둥 바닥 중심 위치 [m]')
    p.add_argument('--no-hold', action='store_true',
                   help='데모 후 대기하지 않고 바로 종료 (마커도 사라짐)')
    return p.parse_args()


class ObstacleDemo:

    def __init__(self, args):
        self.args = args
        # 기둥: 바닥(z=0)에서 세워지므로 중심 z는 높이의 절반
        self.pillar_size = [args.pillar_width, args.pillar_width, args.pillar_height]
        self.pillar_center = [args.pillar_pos[0], args.pillar_pos[1], args.pillar_height / 2]

        self.node = Node('moveit_obstacle_demo')
        self.node.set_parameters([Parameter('use_sim_time', Parameter.Type.BOOL, True)])

        self.moveit2 = MoveIt2(
            node=self.node, joint_names=JOINTS,
            base_link_name='world',
            end_effector_name='end_effector_link',
            group_name='arm', callback_group=ReentrantCallbackGroup(),
        )

        qos = QoSProfile(depth=1, durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.marker_pub = self.node.create_publisher(Marker, '/obstacle_marker', qos)

        self.executor = MultiThreadedExecutor(4)
        self.executor.add_node(self.node)
        threading.Thread(target=self.executor.spin, daemon=True).start()

    def wait_for_joint_states(self, timeout=10.0):
        deadline = time.time() + timeout
        while self.moveit2.joint_state is None:
            if time.time() > deadline:
                raise RuntimeError('joint_states 수신 실패 — 시뮬레이션이 떠 있는지 확인하세요')
            time.sleep(0.1)
        print('joint_states 수신 OK')

    def add_pillar(self):
        print(f'기둥 추가: 위치 {self.pillar_center}, 크기 {self.pillar_size}')
        self.moveit2.add_collision_box(
            id='pillar', size=self.pillar_size,
            position=self.pillar_center, quat_xyzw=[0.0, 0.0, 0.0, 1.0],
            frame_id='world',
        )
        self.publish_marker()
        time.sleep(1.0)  # planning scene 반영 대기

    def remove_pillar(self):
        self.moveit2.remove_collision_object('pillar')
        time.sleep(0.5)

    def publish_marker(self):
        """Foxglove 3D 패널용 기둥 마커 (latched — 이 노드가 살아있는 동안 유지)"""
        m = Marker()
        m.header.frame_id = 'world'
        m.ns, m.id = 'obstacle', 0
        m.type, m.action = Marker.CUBE, Marker.ADD
        m.pose.position.x, m.pose.position.y, m.pose.position.z = self.pillar_center
        m.pose.orientation.w = 1.0
        m.scale.x, m.scale.y, m.scale.z = self.pillar_size
        m.color.r, m.color.g, m.color.b, m.color.a = 1.0, 0.3, 0.1, 0.8
        self.marker_pub.publish(m)

    def move(self, pos, label, retries=3):
        print(f'[{label}] 목표: {pos}')
        for attempt in range(1, retries + 1):
            self.moveit2.move_to_pose(
                position=list(pos), quat_xyzw=[0.0, 0.0, 0.0, 1.0],
                tolerance_position=0.005, tolerance_orientation=6.28,
            )
            if self.moveit2.wait_until_executed():
                print(f'[{label}] 완료' + (f' ({attempt}번째 시도)' if attempt > 1 else ''))
                return True
            # 이동 직후 로봇 상태가 정착하기 전이면 start state 불일치로 실패할 수 있음
            print(f'[{label}] 시도 {attempt}/{retries} 실패, 재시도...')
            time.sleep(1.0)
        print(f'[{label}] 실패!')
        print('  힌트: 현재 자세가 기둥과 접촉 상태면 플래닝이 거부됩니다.')
        print('  --start/--goal을 기둥에서 더 멀리 잡거나 --pillar-height를 낮춰보세요.')
        return False

    def run(self):
        self.wait_for_joint_states()
        self.remove_pillar()  # 이전 실행의 잔여 장애물 제거

        if not self.move(self.args.start, '1/3 시작 지점'):
            return
        self.add_pillar()
        self.move(self.args.goal, '2/3 장애물 회피 이동')
        self.move(self.args.start, '3/3 복귀 이동')

        if self.args.no_hold:
            print('데모 완료 (--no-hold: 바로 종료)')
            return
        print('데모 완료! Foxglove에서 /obstacle_marker 토픽을 켜면 주황 기둥이 보입니다.')
        print('Ctrl+C로 종료하면 마커도 사라집니다.')
        try:
            while rclpy.ok():
                time.sleep(1.0)
        except KeyboardInterrupt:
            pass


def main():
    args = parse_args()
    rclpy.init()
    demo = ObstacleDemo(args)
    try:
        demo.run()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
