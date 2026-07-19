// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_interfaces:srv/RebootDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/reboot_dxl.h"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_H_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_H_

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

/// Struct defined in srv/RebootDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__RebootDxl_Request
{
  std_msgs__msg__Header header;
} dynamixel_interfaces__srv__RebootDxl_Request;

// Struct for a sequence of dynamixel_interfaces__srv__RebootDxl_Request.
typedef struct dynamixel_interfaces__srv__RebootDxl_Request__Sequence
{
  dynamixel_interfaces__srv__RebootDxl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__RebootDxl_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/RebootDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__RebootDxl_Response
{
  bool result;
} dynamixel_interfaces__srv__RebootDxl_Response;

// Struct for a sequence of dynamixel_interfaces__srv__RebootDxl_Response.
typedef struct dynamixel_interfaces__srv__RebootDxl_Response__Sequence
{
  dynamixel_interfaces__srv__RebootDxl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__RebootDxl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dynamixel_interfaces__srv__RebootDxl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dynamixel_interfaces__srv__RebootDxl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RebootDxl in the package dynamixel_interfaces.
typedef struct dynamixel_interfaces__srv__RebootDxl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dynamixel_interfaces__srv__RebootDxl_Request__Sequence request;
  dynamixel_interfaces__srv__RebootDxl_Response__Sequence response;
} dynamixel_interfaces__srv__RebootDxl_Event;

// Struct for a sequence of dynamixel_interfaces__srv__RebootDxl_Event.
typedef struct dynamixel_interfaces__srv__RebootDxl_Event__Sequence
{
  dynamixel_interfaces__srv__RebootDxl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_interfaces__srv__RebootDxl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_H_
