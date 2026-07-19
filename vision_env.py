#!/usr/bin/env python3
"""비전 환경 구성: 상단 카메라 + 바닥 체커보드 + 기준 마커를 Gazebo에 스폰하고
카메라 이미지를 ROS로 브릿지한다 (포그라운드 실행 — Ctrl+C로 종료).

사전 조건: empty_world.sdf에 Sensors 플러그인이 있어야 함 (수정 후 gazebo launch 재시작).

  /usr/bin/python3 vision_env.py

구성 (모두 world 좌표):
  - 카메라: (0.20, 0, 0.90)에서 수직 하방, 960x720 → ROS /overhead_camera
  - 체커보드: 중심 (0.20, 0), 0.30x0.24m, 8x6 내부 코너, 0.03m/칸
  - 빨간 기준 마커: (0.03, -0.14) — 캘리브레이션의 방향 모호성(180° 대칭) 해소용
"""
import os
import subprocess
import time

WS = os.path.dirname(os.path.abspath(__file__))

# vision_calibrate.py / vision_pick.py와 공유하는 상수
CAM_POS = (0.20, 0.0, 0.90)
BOARD_CENTER = (0.20, 0.0)
SQUARE = 0.03
CORNERS_X, CORNERS_Y = 8, 6      # 내부 코너 수 (장축=x)
RED_MARKER = (0.03, -0.14)
IMAGE_TOPIC = '/overhead_camera'
# 관측 자세: 팔을 카메라 시야(작업영역) 밖으로 치움 — 캘리브레이션/검출 시 사용
LOOK_POSE = [3.0, 0.0, 0.0, 0.0]

CAMERA_SDF = f"""<?xml version="1.0"?>
<sdf version="1.8">
  <model name="overhead_cam">
    <static>true</static>
    <link name="link">
      <sensor name="camera" type="camera">
        <topic>overhead_camera</topic>
        <update_rate>10</update_rate>
        <camera>
          <horizontal_fov>1.047</horizontal_fov>
          <image><width>960</width><height>720</height></image>
          <clip><near>0.05</near><far>3.0</far></clip>
        </camera>
        <always_on>1</always_on>
      </sensor>
    </link>
  </model>
</sdf>"""

def board_sdf():
    """텍스처 대신 지오메트리로 만든 체커보드 (텍스처 로딩 실패 문제 회피).
    흰 바탕판 + 검은 칸(얇은 박스)들. 9x7칸 → 8x6 내부 코너."""
    visuals = ['''      <visual name="base">
        <geometry><box><size>0.32 0.26 0.002</size></box></geometry>
        <material><ambient>1 1 1 1</ambient><diffuse>1 1 1 1</diffuse></material>
      </visual>''']
    for r in range(7):
        for c in range(9):
            if (r + c) % 2 == 0:
                x = (c - 4) * SQUARE
                y = (r - 3) * SQUARE
                visuals.append(f'''      <visual name="sq_{r}_{c}">
        <pose>{x} {y} 0.0015 0 0 0</pose>
        <geometry><box><size>{SQUARE} {SQUARE} 0.001</size></box></geometry>
        <material><ambient>0 0 0 1</ambient><diffuse>0 0 0 1</diffuse></material>
      </visual>''')
    body = '\n'.join(visuals)
    return f"""<?xml version="1.0"?>
<sdf version="1.8">
  <model name="checkerboard">
    <static>true</static>
    <link name="link">
{body}
    </link>
  </model>
</sdf>"""

MARKER_SDF = """<?xml version="1.0"?>
<sdf version="1.8">
  <model name="red_marker">
    <static>true</static>
    <link name="link">
      <visual name="visual">
        <geometry><box><size>0.02 0.02 0.002</size></box></geometry>
        <material><ambient>1 0 0 1</ambient><diffuse>1 0 0 1</diffuse></material>
      </visual>
    </link>
  </model>
</sdf>"""


def gz_remove(name):
    subprocess.run(
        ['gz', 'service', '-s', '/world/empty/remove',
         '--reqtype', 'gz.msgs.Entity', '--reptype', 'gz.msgs.Boolean',
         '--timeout', '2000', '--req', f'name: "{name}" type: MODEL'],
        capture_output=True,
    )


def spawn(sdf, name, x, y, z, pitch=0.0):
    gz_remove(name)
    time.sleep(0.3)
    result = subprocess.run(
        ['ros2', 'run', 'ros_gz_sim', 'create', '-string', sdf, '-name', name,
         '-x', str(x), '-y', str(y), '-z', str(z), '-P', str(pitch)],
        capture_output=True, text=True, timeout=15,
    )
    print(f'{name} 스폰: ({x}, {y}, {z})')
    return result


def main():
    spawn(CAMERA_SDF, 'overhead_cam', *CAM_POS, pitch=1.5708)  # +x축이 아래를 향함
    spawn(board_sdf(), 'checkerboard', BOARD_CENTER[0], BOARD_CENTER[1], 0.001)
    spawn(MARKER_SDF, 'red_marker', RED_MARKER[0], RED_MARKER[1], 0.001)

    time.sleep(1.0)
    topics = subprocess.run(['gz', 'topic', '-l'], capture_output=True, text=True).stdout
    if 'overhead_camera' not in topics:
        print('경고: gz 토픽에 overhead_camera가 없음 — Sensors 플러그인이 로드된 월드로'
              ' gazebo를 재시작했는지 확인하세요')

    print(f'이미지 브릿지 시작: gz {IMAGE_TOPIC} → ROS {IMAGE_TOPIC} (Ctrl+C로 종료)')
    os.execvp('ros2', ['ros2', 'run', 'ros_gz_bridge', 'parameter_bridge',
                       f'{IMAGE_TOPIC}@sensor_msgs/msg/Image[gz.msgs.Image'])


if __name__ == '__main__':
    main()
