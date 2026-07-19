// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/msg/dynamixel_state.h"


#ifndef DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_
#define DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'COMM_STATE_OK'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_OK = 0l
};

/// Constant 'COMM_STATE_CANNOT_FIND_CONTROL_ITEM'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_CANNOT_FIND_CONTROL_ITEM = -1l
};

/// Constant 'COMM_STATE_OPEN_PORT_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_OPEN_PORT_FAIL = -2l
};

/// Constant 'COMM_STATE_INDIRECT_ADDR_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_INDIRECT_ADDR_FAIL = -3l
};

/// Constant 'COMM_STATE_ITEM_WRITE_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_ITEM_WRITE_FAIL = -4l
};

/// Constant 'COMM_STATE_ITEM_READ_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_ITEM_READ_FAIL = -5l
};

/// Constant 'COMM_STATE_SYNC_WRITE_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SYNC_WRITE_FAIL = -6l
};

/// Constant 'COMM_STATE_SYNC_READ_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SYNC_READ_FAIL = -7l
};

/// Constant 'COMM_STATE_SET_SYNC_WRITE_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_SYNC_WRITE_FAIL = -8l
};

/// Constant 'COMM_STATE_SET_SYNC_READ_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_SYNC_READ_FAIL = -9l
};

/// Constant 'COMM_STATE_BULK_WRITE_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_BULK_WRITE_FAIL = -10l
};

/// Constant 'COMM_STATE_BULK_READ_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_BULK_READ_FAIL = -11l
};

/// Constant 'COMM_STATE_SET_BULK_WRITE_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_BULK_WRITE_FAIL = -12l
};

/// Constant 'COMM_STATE_SET_BULK_READ_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_BULK_READ_FAIL = -13l
};

/// Constant 'COMM_STATE_SET_READ_ITEM_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_READ_ITEM_FAIL = -14l
};

/// Constant 'COMM_STATE_SET_WRITE_ITEM_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_SET_WRITE_ITEM_FAIL = -15l
};

/// Constant 'COMM_STATE_DXL_HARDWARE_ERROR'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_DXL_HARDWARE_ERROR = -16l
};

/// Constant 'COMM_STATE_DXL_REBOOT_FAIL'.
enum
{
  dynamixel_interfaces__msg__DynamixelState__COMM_STATE_DXL_REBOOT_FAIL = -17l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'id'
// Member 'torque_state'
// Member 'dxl_hw_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DynamixelState in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__msg__DynamixelState
{
  std_msgs__msg__Header header;
  int32_t comm_state;
  rosidl_runtime_c__int32__Sequence id;
  rosidl_runtime_c__boolean__Sequence torque_state;
  rosidl_runtime_c__int32__Sequence dxl_hw_state;
} dynamixel_interfaces__msg__DynamixelState;

// Struct for a sequence of dynamixel_interfaces__msg__DynamixelState.
typedef struct dynamixel_interfaces__msg__DynamixelState__Sequence
{
  dynamixel_interfaces__msg__DynamixelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__msg__DynamixelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_H_
