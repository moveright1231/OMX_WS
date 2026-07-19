#!/usr/bin/env python3
"""OM-X WASD 텔레옵
  w/s (또는 ↑/↓) : joint2 — 팔 앞으로 숙이기 / 뒤로 세우기
  a/d (또는 ←/→) : joint1 — 베이스 왼쪽 / 오른쪽 회전
  q/e            : joint3 — 팔꿈치 굽히기 / 펴기 (보너스)
  r/f            : joint4 — 손목 굽히기 / 펴기 (보너스)
  /              : 그리퍼 열기/닫기 토글
  p              : 원위치 (모든 관절 0)
  ESC            : 종료
"""
import select
import sys
import termios
import threading
import time
import tty

from control_msgs.action import GripperCommand
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint

# joint별 (하한, 상한) — URDF limit 기준
JOINT_LIMITS = [(-3.14, 3.14), (-1.5, 1.5), (-1.5, 1.4), (-1.7, 1.97)]
GRIPPER_OPEN = 0.019
GRIPPER_CLOSE = -0.010


class WasdTeleop(Node):

    def __init__(self):
        super().__init__('wasd_teleop')

        self.arm_publisher = self.create_publisher(
            JointTrajectory, '/arm_controller/joint_trajectory', 10
        )
        self.gripper_client = ActionClient(
            self, GripperCommand, '/gripper_controller/gripper_cmd'
        )
        self.subscription = self.create_subscription(
            JointState, '/joint_states', self.joint_state_callback, 10
        )

        self.arm_joint_names = ['joint1', 'joint2', 'joint3', 'joint4']
        self.arm_joint_positions = [0.0] * 4
        self.joint_received = False

        self.gripper_open = True  # '/' 토글 상태

        self.step = 0.05  # 키 1회당 관절 이동량 [rad]
        self.last_command_time = time.time()
        self.command_interval = 0.02

        self.running = True

    def joint_state_callback(self, msg):
        if not self.joint_received and set(self.arm_joint_names).issubset(set(msg.name)):
            for i, joint in enumerate(self.arm_joint_names):
                index = msg.name.index(joint)
                self.arm_joint_positions[i] = msg.position[index]
            self.joint_received = True

    def get_key(self, timeout=0.05):
        """키 1개 읽기. 방향키(ESC 시퀀스)는 w/a/s/d로 변환해 반환."""
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)
        try:
            tty.setcbreak(fd)
            rlist, _, _ = select.select([sys.stdin], [], [], timeout)
            if not rlist:
                return None
            ch = sys.stdin.read(1)
            if ch != '\x1b':
                return ch
            # ESC 뒤에 추가 입력이 있으면 방향키 시퀀스(\x1b[A 등)
            rlist, _, _ = select.select([sys.stdin], [], [], 0.02)
            if not rlist:
                return '\x1b'  # 단독 ESC
            seq = sys.stdin.read(2)
            arrow_map = {'[A': 'w', '[B': 's', '[D': 'a', '[C': 'd'}
            return arrow_map.get(seq)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def move_joint(self, index, delta):
        lo, hi = JOINT_LIMITS[index]
        self.arm_joint_positions[index] = max(lo, min(hi, self.arm_joint_positions[index] + delta))
        self.send_arm_command()

    def send_arm_command(self, duration_sec=0):
        arm_msg = JointTrajectory()
        arm_msg.joint_names = self.arm_joint_names
        arm_point = JointTrajectoryPoint()
        arm_point.positions = list(self.arm_joint_positions)
        arm_point.time_from_start.sec = duration_sec
        arm_msg.points.append(arm_point)
        self.arm_publisher.publish(arm_msg)

    def go_home(self):
        """모든 관절을 0으로 — 2초에 걸쳐 부드럽게 복귀"""
        self.get_logger().info('원위치로 복귀')
        self.arm_joint_positions = [0.0] * 4
        self.send_arm_command(duration_sec=2)

    def toggle_gripper(self):
        self.gripper_open = not self.gripper_open
        position = GRIPPER_OPEN if self.gripper_open else GRIPPER_CLOSE
        goal_msg = GripperCommand.Goal()
        goal_msg.command.position = position
        goal_msg.command.max_effort = 10.0
        self.get_logger().info(f"그리퍼 {'열기' if self.gripper_open else '닫기'}")
        if not self.gripper_client.wait_for_server(timeout_sec=2.0):
            self.get_logger().warn('gripper_controller 액션 서버 응답 없음')
            return
        send_goal_future = self.gripper_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future, timeout_sec=2.0)

    def run(self):
        while not self.joint_received and rclpy.ok() and self.running:
            self.get_logger().info('/joint_states 수신 대기 중...')
            rclpy.spin_once(self, timeout_sec=1.0)

        print(__doc__)
        self.get_logger().info('키 입력 대기 중!')

        key_actions = {
            'w': (1, +1), 's': (1, -1),
            'a': (0, +1), 'd': (0, -1),
            'q': (2, +1), 'e': (2, -1),
            'r': (3, +1), 'f': (3, -1),
        }

        while rclpy.ok() and self.running:
            key = self.get_key()
            if key is None:
                continue

            now = time.time()
            if now - self.last_command_time < self.command_interval:
                continue
            self.last_command_time = now

            if key == '\x1b':  # ESC
                self.running = False
            elif key == '/':
                self.toggle_gripper()
            elif key == 'p':
                self.go_home()
            elif key in key_actions:
                index, sign = key_actions[key]
                self.move_joint(index, sign * self.step)


def main():
    rclpy.init()
    node = WasdTeleop()

    thread = threading.Thread(target=node.run)
    thread.start()

    try:
        while thread.is_alive():
            time.sleep(0.1)
    except KeyboardInterrupt:
        print('\n종료합니다...')
        node.running = False

    thread.join()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
