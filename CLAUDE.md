# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## 개요

OpenMANIPULATOR-X (OM-X, 4-DOF + 그리퍼) 로봇팔의 ROS 2 Jazzy 워크스페이스.
Gazebo(gz sim) 시뮬레이션을 headless로 돌리고, 원격 PC에서 Foxglove로 시각화하며,
MoveIt2 / 직접 관절 명령으로 제어하는 데모 스크립트들이 워크스페이스 루트에 있다.
환경: WSL2 (디스플레이 없음 — rviz2/Gazebo GUI는 뜨지 않으므로 Foxglove가 유일한 시각화 수단).

## 필수 환경 설정

```bash
source /opt/ros/jazzy/setup.bash && source ~/omx_ws/install/setup.bash
```

- **python은 반드시 `/usr/bin/python3`로 실행** — 쉘 기본 python은 miniforge(conda)라
  rclpy/catkin_pkg와 호환되지 않는다. colcon 빌드도 같은 이유로:
  ```bash
  PATH="/usr/bin:$PATH" colcon build --packages-select <pkg> --symlink-install --cmake-args -DPython3_EXECUTABLE=/usr/bin/python3
  ```
- symlink install이므로 launch 파일·python 파일 수정은 리빌드 없이 반영됨.

## 실행 (2개 launch를 각각 별도 터미널에서)

```bash
# 1) 시뮬레이션 + 컨트롤러 + foxglove_bridge (headless gz sim)
ros2 launch open_manipulator_bringup open_manipulator_x_gazebo.launch.py

# 2) MoveIt2 (move_group)
ros2 launch open_manipulator_moveit_config open_manipulator_x_moveit.launch.py start_rviz:=false use_sim:=true
```

- **각 launch는 반드시 1개씩만.** 중복 실행하면 execute_trajectory 액션 서버가 2개가 되어
  모든 이동 명령이 즉시 ABORTED 된다 (`Ignoring unexpected result response` 경고가 단서).
- foxglove_bridge는 `0.0.0.0:8765`. 원격 Foxglove 접속: `ws://<Tailscale IP>:8765`
  (Windows 호스트의 Tailscale IP, 예: 100.66.203.69).
- WSL2라서 Windows 쪽 portproxy 필요: WSL IP가 바뀌면 (재부팅 후 `hostname -I`로 확인)
  Windows PowerShell(관리자)에서 `netsh interface portproxy` 규칙을 새 IP로 갱신해야 한다.
  8765(foxglove) 외 8000/8501/9002/2222도 동일 패턴으로 포워딩되어 있음.

## 루트 데모 스크립트

| 파일 | 용도 |
|---|---|
| `moveit_target_omx.py x y z` | MoveIt으로 손끝을 좌표로 이동 (pymoveit2) |
| `goto_xyz.py x y z` | /compute_ik 서비스 → 관절 명령 직접 발행 (MoveIt 실행 필요) |
| `teleop_wasd.py` | 키보드 텔레옵: wasd/방향키=관절, `/`=그리퍼 토글, p=원위치 |
| `moveit_obstacle_demo.py` | planning scene 기둥 장애물 회피 데모 (인자로 기둥/좌표 조정) |
| `pick_place_demo.py` | Gazebo 물리 큐브 스폰→집기→기둥 회피 운반→놓기 전체 데모 |

## 아키텍처 핵심

- **4-DOF 제약**: OM-X는 위치(3) + 자세(3)를 동시에 만족 못 함. MoveIt IK는
  `position_only_ik: True` (kinematics.yaml). pymoveit2로 pose 목표를 줄 때는 반드시
  `tolerance_orientation=6.28`처럼 자세 제약을 풀어야 플래닝이 성공한다.
  그리퍼 피치까지 제어해야 하는 작업(집기 등)은 `pick_place_demo.py`의 해석적 IK
  `ik(x, y, z, pitch)`를 사용 (URDF 링크 치수 기반, 관절 한계 검증 포함).
- **제어 토픽/액션**: 팔 = `/arm_controller/joint_trajectory` (JointTrajectory),
  그리퍼 = `/gripper_controller/gripper_cmd` (GripperCommand 액션,
  열림 0.019 / 닫힘 -0.011 한계).
- **URDF 메시는 `package://`** 경로라 웹 기반 뷰어(gz web viewer)는 렌더링 불가.
  Foxglove는 foxglove_bridge의 asset fetch로 해결됨 — 이것이 Foxglove를 쓰는 이유.
- **Foxglove에 Gazebo 오브젝트는 자동으로 안 보임**: planning scene 객체나 gz 모델은
  visualization_msgs/Marker를 별도 발행해서 표시한다 (`/obstacle_marker`, `/cube_marker`).
  큐브 실제 pose는 SDF에 pose-publisher 플러그인 + `ros_gz_bridge parameter_bridge`로 수신.

## 반복적으로 겪는 함정

- **"start point deviates from current robot state"로 실행 ABORTED**: 이동 직후 정착 전에
  다음 플래닝을 하면 발생. 대응: 이동 후 0.8초 대기 + 재시도 루프 (데모 스크립트들에 구현됨).
- **시작 상태가 장애물과 충돌이면 모든 플래닝 거부**: 이전 실행이 장애물 옆에서 죽었을 때.
  대응: 시작 시 planning scene과 Gazebo 양쪽 잔여물 제거 → 원위치 복귀 → 스폰
  (`pick_place_demo.py`의 run() 앞부분 패턴).
- **시뮬레이션 물리 집기**: 세게 조이면 큐브가 튕겨나간다(조임은 ~1mm까지만).
  얕게 잡으면 운반 중 빠진다(grasp_depth로 깊게). 관절 속도는 max_velocity 0.3 이하.
  MoveIt 자유 플래닝은 운반 중 elbow flip으로 물체를 놓치므로, 운반은 피치를 유지하는
  waypoint 시퀀스로 수행한다.
- move_group 로그는 `~/.ros/log/<최신>/` 또는 launch 터미널에서 확인.
  플래닝 실패 원인(`Found a contact between ...`)이 여기에만 찍힌다.
