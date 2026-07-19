// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_interfaces:srv/SetDataToDxl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_interfaces/srv/detail/set_data_to_dxl__functions.h"
#include "dynamixel_interfaces/srv/detail/set_data_to_dxl__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetDataToDxl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetDataToDxl_Request_type_support_ids_t;

static const _SetDataToDxl_Request_type_support_ids_t _SetDataToDxl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetDataToDxl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetDataToDxl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetDataToDxl_Request_type_support_symbol_names_t _SetDataToDxl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, SetDataToDxl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, SetDataToDxl_Request)),
  }
};

typedef struct _SetDataToDxl_Request_type_support_data_t
{
  void * data[2];
} _SetDataToDxl_Request_type_support_data_t;

static _SetDataToDxl_Request_type_support_data_t _SetDataToDxl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetDataToDxl_Request_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_SetDataToDxl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetDataToDxl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetDataToDxl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetDataToDxl_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetDataToDxl_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__SetDataToDxl_Request__get_type_hash,
  &dynamixel_interfaces__srv__SetDataToDxl_Request__get_type_description,
  &dynamixel_interfaces__srv__SetDataToDxl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Request>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::SetDataToDxl_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, SetDataToDxl_Request)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/set_data_to_dxl__functions.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/set_data_to_dxl__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetDataToDxl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetDataToDxl_Response_type_support_ids_t;

static const _SetDataToDxl_Response_type_support_ids_t _SetDataToDxl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetDataToDxl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetDataToDxl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetDataToDxl_Response_type_support_symbol_names_t _SetDataToDxl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, SetDataToDxl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, SetDataToDxl_Response)),
  }
};

typedef struct _SetDataToDxl_Response_type_support_data_t
{
  void * data[2];
} _SetDataToDxl_Response_type_support_data_t;

static _SetDataToDxl_Response_type_support_data_t _SetDataToDxl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetDataToDxl_Response_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_SetDataToDxl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetDataToDxl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetDataToDxl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetDataToDxl_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetDataToDxl_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__SetDataToDxl_Response__get_type_hash,
  &dynamixel_interfaces__srv__SetDataToDxl_Response__get_type_description,
  &dynamixel_interfaces__srv__SetDataToDxl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Response>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::SetDataToDxl_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, SetDataToDxl_Response)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/set_data_to_dxl__functions.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/set_data_to_dxl__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetDataToDxl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetDataToDxl_Event_type_support_ids_t;

static const _SetDataToDxl_Event_type_support_ids_t _SetDataToDxl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetDataToDxl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetDataToDxl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetDataToDxl_Event_type_support_symbol_names_t _SetDataToDxl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, SetDataToDxl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, SetDataToDxl_Event)),
  }
};

typedef struct _SetDataToDxl_Event_type_support_data_t
{
  void * data[2];
} _SetDataToDxl_Event_type_support_data_t;

static _SetDataToDxl_Event_type_support_data_t _SetDataToDxl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetDataToDxl_Event_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_SetDataToDxl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetDataToDxl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetDataToDxl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetDataToDxl_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetDataToDxl_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__SetDataToDxl_Event__get_type_hash,
  &dynamixel_interfaces__srv__SetDataToDxl_Event__get_type_description,
  &dynamixel_interfaces__srv__SetDataToDxl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Event>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::SetDataToDxl_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, SetDataToDxl_Event)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dynamixel_interfaces/srv/detail/set_data_to_dxl__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dynamixel_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetDataToDxl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetDataToDxl_type_support_ids_t;

static const _SetDataToDxl_type_support_ids_t _SetDataToDxl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetDataToDxl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetDataToDxl_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetDataToDxl_type_support_symbol_names_t _SetDataToDxl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, SetDataToDxl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, SetDataToDxl)),
  }
};

typedef struct _SetDataToDxl_type_support_data_t
{
  void * data[2];
} _SetDataToDxl_type_support_data_t;

static _SetDataToDxl_type_support_data_t _SetDataToDxl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetDataToDxl_service_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_SetDataToDxl_service_typesupport_ids.typesupport_identifier[0],
  &_SetDataToDxl_service_typesupport_symbol_names.symbol_name[0],
  &_SetDataToDxl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetDataToDxl_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetDataToDxl_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dynamixel_interfaces::srv::SetDataToDxl>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dynamixel_interfaces::srv::SetDataToDxl>,
  &dynamixel_interfaces__srv__SetDataToDxl__get_type_hash,
  &dynamixel_interfaces__srv__SetDataToDxl__get_type_description,
  &dynamixel_interfaces__srv__SetDataToDxl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::SetDataToDxl_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, SetDataToDxl)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dynamixel_interfaces::srv::SetDataToDxl>();
}

#ifdef __cplusplus
}
#endif
