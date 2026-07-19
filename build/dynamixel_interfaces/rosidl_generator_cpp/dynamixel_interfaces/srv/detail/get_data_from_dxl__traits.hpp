// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_interfaces:srv/GetDataFromDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/get_data_from_dxl.hpp"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__TRAITS_HPP_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_interfaces/srv/detail/get_data_from_dxl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dynamixel_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDataFromDxl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: item_name
  {
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << ", ";
  }

  // member: timeout_sec
  {
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDataFromDxl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: item_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_name: ";
    rosidl_generator_traits::value_to_yaml(msg.item_name, out);
    out << "\n";
  }

  // member: timeout_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDataFromDxl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_interfaces::srv::GetDataFromDxl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_interfaces::srv::GetDataFromDxl_Request & msg)
{
  return dynamixel_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_interfaces::srv::GetDataFromDxl_Request>()
{
  return "dynamixel_interfaces::srv::GetDataFromDxl_Request";
}

template<>
inline const char * name<dynamixel_interfaces::srv::GetDataFromDxl_Request>()
{
  return "dynamixel_interfaces/srv/GetDataFromDxl_Request";
}

template<>
struct has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_interfaces::srv::GetDataFromDxl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamixel_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDataFromDxl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: item_data
  {
    out << "item_data: ";
    rosidl_generator_traits::value_to_yaml(msg.item_data, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDataFromDxl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: item_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_data: ";
    rosidl_generator_traits::value_to_yaml(msg.item_data, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDataFromDxl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_interfaces::srv::GetDataFromDxl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_interfaces::srv::GetDataFromDxl_Response & msg)
{
  return dynamixel_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_interfaces::srv::GetDataFromDxl_Response>()
{
  return "dynamixel_interfaces::srv::GetDataFromDxl_Response";
}

template<>
inline const char * name<dynamixel_interfaces::srv::GetDataFromDxl_Response>()
{
  return "dynamixel_interfaces/srv/GetDataFromDxl_Response";
}

template<>
struct has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_interfaces::srv::GetDataFromDxl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dynamixel_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDataFromDxl_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDataFromDxl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDataFromDxl_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_interfaces::srv::GetDataFromDxl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_interfaces::srv::GetDataFromDxl_Event & msg)
{
  return dynamixel_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_interfaces::srv::GetDataFromDxl_Event>()
{
  return "dynamixel_interfaces::srv::GetDataFromDxl_Event";
}

template<>
inline const char * name<dynamixel_interfaces::srv::GetDataFromDxl_Event>()
{
  return "dynamixel_interfaces/srv/GetDataFromDxl_Event";
}

template<>
struct has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Event>
  : std::integral_constant<bool, has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Request>::value && has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dynamixel_interfaces::srv::GetDataFromDxl_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_interfaces::srv::GetDataFromDxl>()
{
  return "dynamixel_interfaces::srv::GetDataFromDxl";
}

template<>
inline const char * name<dynamixel_interfaces::srv::GetDataFromDxl>()
{
  return "dynamixel_interfaces/srv/GetDataFromDxl";
}

template<>
struct has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl_Request>::value &&
    has_fixed_size<dynamixel_interfaces::srv::GetDataFromDxl_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Request>::value &&
    has_bounded_size<dynamixel_interfaces::srv::GetDataFromDxl_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_interfaces::srv::GetDataFromDxl>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_interfaces::srv::GetDataFromDxl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_interfaces::srv::GetDataFromDxl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__TRAITS_HPP_
