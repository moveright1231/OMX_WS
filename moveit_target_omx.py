#!/usr/bin/env python3
"""OM-X: MoveIt2로 손끝을 목표 좌표로 이동"""
import sys, time, threading
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.parameter import Parameter
from pymoveit2 import MoveIt2

JOINTS = ['joint1','joint2','joint3','joint4']

def main():
    x = float(sys.argv[1]) if len(sys.argv) > 1 else 0.15
    y = float(sys.argv[2]) if len(sys.argv) > 2 else 0.0
    z = float(sys.argv[3]) if len(sys.argv) > 3 else 0.15

    rclpy.init()
    node = Node('moveit_target_omx')
    node.set_parameters([Parameter('use_sim_time', Parameter.Type.BOOL, True)])

    cb = ReentrantCallbackGroup()
    moveit2 = MoveIt2(
        node=node, joint_names=JOINTS,
        base_link_name='world',            # ← 확인 필요
        end_effector_name='end_effector_link',
        group_name='arm', callback_group=cb,
    )

    executor = MultiThreadedExecutor(4)
    executor.add_node(node)
    threading.Thread(target=executor.spin, daemon=True).start()

    for _ in range(100):
        if moveit2.joint_state is not None: break
        time.sleep(0.1)
    print("joint_states 수신 OK")

    print(f"목표: x={x}, y={y}, z={z}")
    # 4-DOF 팔이라 자세(orientation)는 맞출 수 없음 → 위치만 목표로,
    # orientation 허용오차를 크게 줘서 사실상 무시
    moveit2.move_to_pose(
        position=[x, y, z], quat_xyzw=[0.0, 0.0, 0.0, 1.0],
        tolerance_position=0.005, tolerance_orientation=6.28,
    )
    moveit2.wait_until_executed()
    print("이동 완료")
    rclpy.shutdown()

if __name__ == '__main__':
    main()
