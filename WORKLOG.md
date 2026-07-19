# OM-X 원격 시뮬레이션 프로젝트 작업 정리

> 2026-07-17 ~ 07-19. 목표: 원격으로 접속해 로봇팔 시뮬레이션을 실시간으로 보고 제어하는
> 전체 파이프라인 검증. 결과: **원격 시각화 → 텔레옵 → MoveIt2 → 장애물 회피 → 물체 집어 옮기기까지 완료.**

## 1. 원격 시각화 (Foxglove)

### 시도와 결론
- **gz 웹뷰어(app.gazebosim.org)는 실패** — 두 가지 이유:
  1. 로봇 메시가 `package://` URI라 브라우저가 가져올 수 없음 (바닥만 보임)
  2. websocket 서버(gz-launch)가 접속 즉시 segfault — 알려진 미해결 버그
     ([gz-launch#60](https://github.com/gazebosim/gz-launch/issues/60)),
     멀티 NIC 환경(Tailscale/WSL2)에서 잘 터짐
- **Foxglove로 전환하여 성공** — foxglove_bridge가 `package://` 메시를 웹소켓으로
  직접 서빙해주므로 로봇이 제대로 렌더링됨

### 최종 구성
```
[원격 PC] Foxglove 데스크톱 앱
    │  ws://100.66.203.69:8765  (Tailscale)
[Windows] netsh portproxy 8765 → WSL2 IP
[WSL2] foxglove_bridge (gazebo launch에 포함, 0.0.0.0:8765)
       gz sim (headless) + ros2_control + MoveIt2
```

- WSL2 재부팅 시: `hostname -I`로 IP 확인 → 바뀌었으면 Windows PowerShell(관리자)에서
  portproxy 규칙 갱신 필요
- launch 파일 수정: [open_manipulator_x_gazebo.launch.py](src/open_manipulator/open_manipulator_bringup/launch/open_manipulator_x_gazebo.launch.py)에
  foxglove_bridge 노드 추가

### Foxglove 설정 요령
- 3D 패널 → Custom Layers → URDF 추가, Source=Topic, `/robot_description` (드롭다운에서 선택)
- Display frame은 `world` (이 URDF에 base_link 없음)
- 새 토픽(`/obstacle_marker`, `/cube_marker` 등)은 기본 꺼짐 — Topics에서 눈 아이콘 켜기
- 로봇 색이 진회색이라 배경색에 따라 안 보일 수 있음 (배경 중간 회색 추천)

## 2. 제어 스크립트

| 파일 | 내용 |
|---|---|
| `teleop_wasd.py` | 키보드 텔레옵. wasd/방향키(joint1·2), q/e/r/f(joint3·4), `/` 그리퍼 토글, `p` 원위치 |
| `moveit_target_omx.py x y z` | MoveIt2로 손끝 좌표 이동. **4-DOF라 `tolerance_orientation=6.28` 필수** |
| `goto_xyz.py x y z` | MoveIt /compute_ik → 관절 명령 직접 발행 |
| `moveit_obstacle_demo.py` | planning scene 기둥 회피. `--pillar-height/--start/--goal` 등 인자화 |
| `pick_place_demo.py` | 물리 큐브 pick & place + 기둥 회피 (아래 상세) |

실행 공통: `source /opt/ros/jazzy/setup.bash && source install/setup.bash` 후
**`/usr/bin/python3`** 로 실행 (conda python 회피).

## 3. MoveIt2 적용에서 배운 것

- **pymoveit2**는 PyPI에 없음 → GitHub 클론 후 워크스페이스 빌드
  (conda가 빌드를 깨므로 `PATH="/usr/bin:$PATH"` + `-DPython3_EXECUTABLE=/usr/bin/python3`)
- **4-DOF의 본질적 제약**: 위치+자세 동시 만족 불가 → `position_only_ik: True` +
  자세 허용오차 크게. 피치를 제어해야 하면 해석적 IK 직접 계산 (`pick_place_demo.py`의 `ik()`)
- **"start point deviates" ABORTED**: 이동 직후 재플래닝하면 발생 → 0.8초 정착 대기 + 재시도
- **launch 중복 금지**: move_group 2개면 액션이 서로 가로채여 전부 ABORTED
  (`Ignoring unexpected result response` 경고가 단서)

## 4. Pick & Place (+장애물) 디버깅 여정

최종 성공 파이프라인: 큐브·기둥 스폰 → 접근 → 집기(성공 검증+재시도) → planning scene
attach → 팔 접어서 기둥 안쪽으로 회피 운반(낙하 감지) → 내려놓기 → 반열기 후퇴 → 검증

| 실패 증상 | 원인 | 해결 |
|---|---|---|
| 놓은 뒤 후퇴 플래닝 거부 | 벌린 손가락-기둥 충돌 판정 | 반만 열기, 놓기 각도 기둥에서 멀리(-1.2rad) |
| 재실행 시 전부 거부 | 잔여 기둥 옆 시작 상태 충돌 | 시작 시 전체 정리 후 원위치 복귀 |
| 운반 중 낙하 | 관절속도 100% 휘두름 | `max_velocity=0.3` |
| 운반 중 낙하 | MoveIt 경로의 elbow flip | 피치 유지 waypoint 시퀀스(팔 접어 회전) |
| 집기 자체 실패 | 과도한 조임(2mm)이 큐브를 튕김 | 조임 1mm로 복원 |
| 운반 중 낙하 | 손끝으로만 얕게 잡음 | `--grasp-depth 0.015`로 깊게 물기 |

최종 결과: 큐브를 기둥 반대편 목표에 **오차 2.6cm**로 배치.

시뮬 물리 집기 요령 요약: **천천히(30%), 깊게(+1.5cm), 살짝만 조이기(1mm), 피치 유지**.

## 5. 다음 단계 (계획)

실물 전환 시:
- 그리퍼 힘 조절: OM-X는 이미 Dynamixel Current-based Position Control(Mode 5,
  Goal Current 200) — "위치는 과도하게, 힘은 전류 상한으로" + 위치 피드백으로 집기 성공 판정
- 비전: 상단 RGB 단안 카메라 + 바닥 체커보드
  1. `cv2.calibrateCamera`로 intrinsics
  2. 바닥 체커보드 homography로 픽셀→바닥 (x,y)
  3. hand-eye 캘리브레이션(`cv2.calibrateHandEye`)으로 카메라↔로봇 정합
  4. 물체 검출 → 평면 투영 → `ik(x, y, z, pitch)` 연결
  - 제약: 바닥 평면 가정이므로 초기엔 바닥 위 단일 물체로 한정
- Gazebo에 카메라 센서 + 체커보드 모델을 넣어 실물 없이 비전 파이프라인 사전 검증 가능
