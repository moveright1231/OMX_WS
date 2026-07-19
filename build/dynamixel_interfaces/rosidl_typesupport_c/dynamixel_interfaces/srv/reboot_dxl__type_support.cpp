// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dynamixel_interfaces:srv/RebootDxl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_interfaces/srv/detail/reboot_dxl__struct.h"
#include "dynamixel_interfaces/srv/detail/reboot_dxl__type_support.h"
#include "dynamixel_interfaces/srv/detail/reboot_dxl__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RebootDxl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RebootDxl_Request_type_support_ids_t;

static const _RebootDxl_Request_type_support_ids_t _RebootDxl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RebootDxl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RebootDxl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RebootDxl_Request_type_support_symbol_names_t _RebootDxl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_interfaces, srv, RebootDxl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_interfaces, srv, RebootDxl_Request)),
  }
};

typedef struct _RebootDxl_Request_type_support_data_t
{
  void * data[2];
} _RebootDxl_Request_type_support_data_t;

static _RebootDxl_Request_type_support_data_t _RebootDxl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RebootDxl_Request_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_RebootDxl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RebootDxl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RebootDxl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RebootDxl_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RebootDxl_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__RebootDxl_Request__get_type_hash,
  &dynamixel_interfaces__srv__RebootDxl_Request__get_type_description,
  &dynamixel_interfaces__srv__RebootDxl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_interfaces, srv, RebootDxl_Request)() {
  return &::dynamixel_interfaces::srv::rosidl_typesupport_c::RebootDxl_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__type_support.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RebootDxl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RebootDxl_Response_type_support_ids_t;

static const _RebootDxl_Response_type_support_ids_t _RebootDxl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RebootDxl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RebootDxl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RebootDxl_Response_type_support_symbol_names_t _RebootDxl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_interfaces, srv, RebootDxl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_interfaces, srv, RebootDxl_Response)),
  }
};

typedef struct _RebootDxl_Response_type_support_data_t
{
  void * data[2];
} _RebootDxl_Response_type_support_data_t;

static _RebootDxl_Response_type_support_data_t _RebootDxl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RebootDxl_Response_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_RebootDxl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RebootDxl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RebootDxl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RebootDxl_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RebootDxl_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__RebootDxl_Response__get_type_hash,
  &dynamixel_interfaces__srv__RebootDxl_Response__get_type_description,
  &dynamixel_interfaces__srv__RebootDxl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_interfaces, srv, RebootDxl_Response)() {
  return &::dynamixel_interfaces::srv::rosidl_typesupport_c::RebootDxl_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__type_support.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RebootDxl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RebootDxl_Event_type_support_ids_t;

static const _RebootDxl_Event_type_support_ids_t _RebootDxl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RebootDxl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RebootDxl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RebootDxl_Event_type_support_symbol_names_t _RebootDxl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_interfaces, srv, RebootDxl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_interfaces, srv, RebootDxl_Event)),
  }
};

typedef struct _RebootDxl_Event_type_support_data_t
{
  void * data[2];
} _RebootDxl_Event_type_support_data_t;

static _RebootDxl_Event_type_support_data_t _RebootDxl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RebootDxl_Event_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_RebootDxl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RebootDxl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RebootDxl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RebootDxl_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RebootDxl_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__RebootDxl_Event__get_type_hash,
  &dynamixel_interfaces__srv__RebootDxl_Event__get_type_description,
  &dynamixel_interfaces__srv__RebootDxl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_interfaces, srv, RebootDxl_Event)() {
  return &::dynamixel_interfaces::srv::rosidl_typesupport_c::RebootDxl_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/reboot_dxl__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _RebootDxl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RebootDxl_type_support_ids_t;

static const _RebootDxl_type_support_ids_t _RebootDxl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RebootDxl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RebootDxl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RebootDxl_type_support_symbol_names_t _RebootDxl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_interfaces, srv, RebootDxl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_interfaces, srv, RebootDxl)),
  }
};

typedef struct _RebootDxl_type_support_data_t
{
  void * data[2];
} _RebootDxl_type_support_data_t;

static _RebootDxl_type_support_data_t _RebootDxl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RebootDxl_service_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_RebootDxl_service_typesupport_ids.typesupport_identifier[0],
  &_RebootDxl_service_typesupport_symbol_names.symbol_name[0],
  &_RebootDxl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RebootDxl_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RebootDxl_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RebootDxl_Request_message_type_support_handle,
  &RebootDxl_Response_message_type_support_handle,
  &RebootDxl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_interfaces,
    srv,
    RebootDxl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dynamixel_interfaces,
    srv,
    RebootDxl
  ),
  &dynamixel_interfaces__srv__RebootDxl__get_type_hash,
  &dynamixel_interfaces__srv__RebootDxl__get_type_description,
  &dynamixel_interfaces__srv__RebootDxl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace dynamixel_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dynamixel_interfaces, srv, RebootDxl)() {
  return &::dynamixel_interfaces::srv::rosidl_typesupport_c::RebootDxl_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
