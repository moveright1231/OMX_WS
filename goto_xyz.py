#!/usr/bin/env python3
"""좌표 → IK → 관절 명령 (pymoveit2 우회, 확실한 방법)"""
import sys, time
import rclpy
from rclpy.node import Node
from moveit_msgs.srv import GetPositionIK
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

def main():
    x = float(sys.argv[1]); y = float(sys.argv[2]); z = float(sys.argv[3])
    rclpy.init()
    node = Node('goto_xyz')
    cli = node.create_client(GetPositionIK, '/compute_ik')
    cli.wait_for_service()

    req = GetPositionIK.Request()
    req.ik_request.group_name = 'arm'
    req.ik_request.pose_stamped.header.frame_id = 'link1'
    req.ik_request.pose_stamped.pose.position.x = x
    req.ik_request.pose_stamped.pose.position.y = y
    req.ik_request.pose_stamped.pose.position.z = z
    req.ik_request.pose_stamped.pose.orientation.w = 1.0

    fut = cli.call_async(req)
    rclpy.spin_until_future_complete(node, fut)
    res = fut.result()

    if res.error_code.val != 1:
        print(f"IK 실패: {res.error_code.val}")
        rclpy.shutdown(); return

    names = list(res.solution.joint_state.name)
    pos = list(res.solution.joint_state.position)
    arm = [pos[names.index(j)] for j in ['joint1','joint2','joint3','joint4']]
    print(f"IK 성공 → 관절: {[round(v,3) for v in arm]}")

    pub = node.create_publisher(JointTrajectory, '/arm_controller/joint_trajectory', 10)
    time.sleep(0.5)
    msg = JointTrajectory()
    msg.joint_names = ['joint1','joint2','joint3','joint4']
    p = JointTrajectoryPoint()
    p.positions = arm
    p.time_from_start.sec = 3
    msg.points = [p]
    pub.publish(msg)
    print("이동 명령 전송")
    time.sleep(1)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
