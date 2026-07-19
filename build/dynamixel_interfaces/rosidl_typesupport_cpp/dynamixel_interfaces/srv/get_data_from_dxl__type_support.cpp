// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_interfaces:srv/GetDataFromDxl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dynamixel_interfaces/srv/detail/get_data_from_dxl__functions.h"
#include "dynamixel_interfaces/srv/detail/get_data_from_dxl__struct.hpp"
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

typedef struct _GetDataFromDxl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDataFromDxl_Request_type_support_ids_t;

static const _GetDataFromDxl_Request_type_support_ids_t _GetDataFromDxl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetDataFromDxl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDataFromDxl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDataFromDxl_Request_type_support_symbol_names_t _GetDataFromDxl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Request)),
  }
};

typedef struct _GetDataFromDxl_Request_type_support_data_t
{
  void * data[2];
} _GetDataFromDxl_Request_type_support_data_t;

static _GetDataFromDxl_Request_type_support_data_t _GetDataFromDxl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDataFromDxl_Request_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_GetDataFromDxl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetDataFromDxl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetDataFromDxl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDataFromDxl_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDataFromDxl_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_hash,
  &dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description,
  &dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Request>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::GetDataFromDxl_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Request)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Request>();
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
// #include "dynamixel_interfaces/srv/detail/get_data_from_dxl__functions.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/get_data_from_dxl__struct.hpp"
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

typedef struct _GetDataFromDxl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDataFromDxl_Response_type_support_ids_t;

static const _GetDataFromDxl_Response_type_support_ids_t _GetDataFromDxl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetDataFromDxl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDataFromDxl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDataFromDxl_Response_type_support_symbol_names_t _GetDataFromDxl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Response)),
  }
};

typedef struct _GetDataFromDxl_Response_type_support_data_t
{
  void * data[2];
} _GetDataFromDxl_Response_type_support_data_t;

static _GetDataFromDxl_Response_type_support_data_t _GetDataFromDxl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDataFromDxl_Response_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_GetDataFromDxl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetDataFromDxl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetDataFromDxl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDataFromDxl_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDataFromDxl_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_hash,
  &dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description,
  &dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Response>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::GetDataFromDxl_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Response)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Response>();
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
// #include "dynamixel_interfaces/srv/detail/get_data_from_dxl__functions.h"
// already included above
// #include "dynamixel_interfaces/srv/detail/get_data_from_dxl__struct.hpp"
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

typedef struct _GetDataFromDxl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDataFromDxl_Event_type_support_ids_t;

static const _GetDataFromDxl_Event_type_support_ids_t _GetDataFromDxl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetDataFromDxl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDataFromDxl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDataFromDxl_Event_type_support_symbol_names_t _GetDataFromDxl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Event)),
  }
};

typedef struct _GetDataFromDxl_Event_type_support_data_t
{
  void * data[2];
} _GetDataFromDxl_Event_type_support_data_t;

static _GetDataFromDxl_Event_type_support_data_t _GetDataFromDxl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDataFromDxl_Event_message_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_GetDataFromDxl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetDataFromDxl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetDataFromDxl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDataFromDxl_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDataFromDxl_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_hash,
  &dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_description,
  &dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Event>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::GetDataFromDxl_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, GetDataFromDxl_Event)() {
  return get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Event>();
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
// #include "dynamixel_interfaces/srv/detail/get_data_from_dxl__struct.hpp"
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

typedef struct _GetDataFromDxl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDataFromDxl_type_support_ids_t;

static const _GetDataFromDxl_type_support_ids_t _GetDataFromDxl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetDataFromDxl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDataFromDxl_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDataFromDxl_type_support_symbol_names_t _GetDataFromDxl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_interfaces, srv, GetDataFromDxl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, srv, GetDataFromDxl)),
  }
};

typedef struct _GetDataFromDxl_type_support_data_t
{
  void * data[2];
} _GetDataFromDxl_type_support_data_t;

static _GetDataFromDxl_type_support_data_t _GetDataFromDxl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDataFromDxl_service_typesupport_map = {
  2,
  "dynamixel_interfaces",
  &_GetDataFromDxl_service_typesupport_ids.typesupport_identifier[0],
  &_GetDataFromDxl_service_typesupport_symbol_names.symbol_name[0],
  &_GetDataFromDxl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetDataFromDxl_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDataFromDxl_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dynamixel_interfaces::srv::GetDataFromDxl>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dynamixel_interfaces::srv::GetDataFromDxl>,
  &dynamixel_interfaces__srv__GetDataFromDxl__get_type_hash,
  &dynamixel_interfaces__srv__GetDataFromDxl__get_type_description,
  &dynamixel_interfaces__srv__GetDataFromDxl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl>()
{
  return &::dynamixel_interfaces::srv::rosidl_typesupport_cpp::GetDataFromDxl_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dynamixel_interfaces, srv, GetDataFromDxl)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dynamixel_interfaces::srv::GetDataFromDxl>();
}

#ifdef __cplusplus
}
#endif
