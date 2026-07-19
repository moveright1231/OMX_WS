#!/usr/bin/env python3
"""카메라 캘리브레이션: 체커보드로 픽셀 → 바닥평면(world x,y) homography를 구해 저장.

사전 조건: vision_env.py가 실행 중 (/overhead_camera 이미지 수신 가능)

  /usr/bin/python3 vision_calibrate.py

원리:
  - 체커보드 내부 코너(8x6)의 world 좌표는 보드 포즈로부터 이미 알고 있음
  - 검출된 코너 픽셀 ↔ world 좌표 대응으로 cv2.findHomography
  - 체커보드는 180° 대칭이라 대응 순서가 모호함 → 4가지 가설의 homography 중
    빨간 기준 마커의 픽셀 위치를 알려진 world 위치로 가장 잘 보내는 가설 선택
결과: vision_calib.json (homography + 카메라 상수), vision/calib_debug.png (검출 확인용)
"""
import json
import time

import cv2
import numpy as np
import rclpy
from cv_bridge import CvBridge
from rclpy.node import Node
from sensor_msgs.msg import Image

from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

from vision_env import (BOARD_CENTER, CAM_POS, CORNERS_X, CORNERS_Y,
                        IMAGE_TOPIC, LOOK_POSE, RED_MARKER, SQUARE)

CALIB_FILE = '/home/moveright/omx_ws/vision_calib.json'


def grab_frame(timeout=10.0):
    """팔을 시야 밖(LOOK_POSE)으로 치운 뒤 프레임 캡처"""
    node = Node('vision_calibrate')
    bridge = CvBridge()
    frames = []
    node.create_subscription(
        Image, IMAGE_TOPIC, lambda m: frames.append(bridge.imgmsg_to_cv2(m, 'bgr8')), 5)

    pub = node.create_publisher(JointTrajectory, '/arm_controller/joint_trajectory', 10)
    time.sleep(0.5)
    msg = JointTrajectory()
    msg.joint_names = ['joint1', 'joint2', 'joint3', 'joint4']
    pt = JointTrajectoryPoint()
    pt.positions = LOOK_POSE
    pt.time_from_start.sec = 3
    msg.points.append(pt)
    pub.publish(msg)
    print('팔을 관측 자세로 이동 중 (4초 대기)...')
    deadline = time.time() + 4.0
    while time.time() < deadline:
        rclpy.spin_once(node, timeout_sec=0.2)

    frames.clear()  # 이동 중 프레임 버리고 새 프레임 대기
    deadline = time.time() + timeout
    while not frames and time.time() < deadline:
        rclpy.spin_once(node, timeout_sec=0.5)
    node.destroy_node()
    if not frames:
        raise RuntimeError(f'{IMAGE_TOPIC} 이미지 수신 실패 — vision_env.py 실행 중인지 확인')
    return frames[-1]


def find_red_marker(img):
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, (0, 120, 80), (10, 255, 255)) | \
        cv2.inRange(hsv, (170, 120, 80), (180, 255, 255))
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    if not contours:
        raise RuntimeError('빨간 기준 마커 미검출')
    c = max(contours, key=cv2.contourArea)
    m = cv2.moments(c)
    return np.array([m['m10'] / m['m00'], m['m01'] / m['m00']])


def world_grid(sign_x, sign_y):
    """8x6 내부 코너의 world 좌표 (행=y방향 6, 열=x방향 8, OpenCV 순서에 대응)"""
    pts = []
    for j in range(CORNERS_Y):
        for i in range(CORNERS_X):
            x = BOARD_CENTER[0] + sign_x * (i - (CORNERS_X - 1) / 2) * SQUARE
            y = BOARD_CENTER[1] + sign_y * (j - (CORNERS_Y - 1) / 2) * SQUARE
            pts.append([x, y])
    return np.array(pts, np.float64)


def main():
    rclpy.init()
    img = grab_frame()
    rclpy.shutdown()

    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    found, corners = cv2.findChessboardCorners(
        gray, (CORNERS_X, CORNERS_Y),
        flags=cv2.CALIB_CB_ADAPTIVE_THRESH + cv2.CALIB_CB_NORMALIZE_IMAGE)
    if not found:
        cv2.imwrite('/home/moveright/omx_ws/vision/calib_debug.png', img)
        raise RuntimeError('체커보드 미검출 — vision/calib_debug.png 확인')
    corners = cv2.cornerSubPix(
        gray, corners, (11, 11), (-1, -1),
        (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.01))
    px = corners.reshape(-1, 2).astype(np.float64)

    red_px = find_red_marker(img)
    red_world = np.array(RED_MARKER)

    # 4가지 방향 가설 중 빨간 마커를 가장 잘 맞추는 homography 선택
    best = None
    for sx in (1, -1):
        for sy in (1, -1):
            H, _ = cv2.findHomography(px, world_grid(sx, sy))
            mapped = cv2.perspectiveTransform(red_px.reshape(1, 1, 2), H)[0, 0]
            err = float(np.linalg.norm(mapped - red_world))
            if best is None or err < best[1]:
                best = (H, err, (sx, sy))
    H, err, signs = best
    print(f'방향 가설 {signs} 선택 — 기준 마커 오차 {err*100:.2f}cm')
    if err > 0.03:
        print('경고: 기준 마커 오차가 큼 — 마커/보드 배치를 확인하세요')

    # 재투영 오차
    reproj = cv2.perspectiveTransform(px.reshape(-1, 1, 2), H).reshape(-1, 2)
    rms = float(np.sqrt(np.mean(np.sum((reproj - world_grid(*signs))**2, axis=1))))
    print(f'코너 재투영 RMS 오차: {rms*1000:.2f}mm')

    with open(CALIB_FILE, 'w') as f:
        json.dump({'homography': H.tolist(),
                   'cam_pos': list(CAM_POS),
                   'image_topic': IMAGE_TOPIC}, f, indent=2)
    print(f'저장: {CALIB_FILE}')

    debug = cv2.drawChessboardCorners(img.copy(), (CORNERS_X, CORNERS_Y), corners, found)
    cv2.circle(debug, tuple(red_px.astype(int)), 12, (0, 255, 255), 2)
    cv2.imwrite('/home/moveright/omx_ws/vision/calib_debug.png', debug)
    print('검출 확인 이미지: vision/calib_debug.png')


if __name__ == '__main__':
    main()
