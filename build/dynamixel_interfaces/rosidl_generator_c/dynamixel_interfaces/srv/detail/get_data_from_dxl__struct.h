// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_interfaces:srv/GetDataFromDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/get_data_from_dxl.h"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_H_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'item_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDataFromDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Request
{
  std_msgs__msg__Header header;
  uint8_t id;
  rosidl_runtime_c__String item_name;
  double timeout_sec;
} dynamixel_interfaces__srv__GetDataFromDxl_Request;

// Struct for a sequence of dynamixel_interfaces__srv__GetDataFromDxl_Request.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence
{
  dynamixel_interfaces__srv__GetDataFromDxl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetDataFromDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Response
{
  uint32_t item_data;
  bool result;
} dynamixel_interfaces__srv__GetDataFromDxl_Response;

// Struct for a sequence of dynamixel_interfaces__srv__GetDataFromDxl_Response.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence
{
  dynamixel_interfaces__srv__GetDataFromDxl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamixel_interfaces__srv__GetDataFromDxl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamixel_interfaces__srv__GetDataFromDxl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDataFromDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence request;
  dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence response;
} dynamixel_interfaces__srv__GetDataFromDxl_Event;

// Struct for a sequence of dynamixel_interfaces__srv__GetDataFromDxl_Event.
typedef struct dynamixel_interfaces__srv__GetDataFromDxl_Event__Sequence
{
  dynamixel_interfaces__srv__GetDataFromDxl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__GetDataFromDxl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_H_
