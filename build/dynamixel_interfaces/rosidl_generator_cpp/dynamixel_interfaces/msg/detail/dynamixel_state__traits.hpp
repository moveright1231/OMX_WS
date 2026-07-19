// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/msg/dynamixel_state.hpp"


#ifndef DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
#define DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_interfaces/msg/detail/dynamixel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace dynamixel_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamixelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: comm_state
  {
    out << "comm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_state, out);
    out << ", ";
  }

  // member: id
  {
    if (msg.id.size() == 0) {
      out << "id: []";
    } else {
      out << "id: [";
      size_t pending_items = msg.id.size();
      for (auto item : msg.id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: torque_state
  {
    if (msg.torque_state.size() == 0) {
      out << "torque_state: []";
    } else {
      out << "torque_state: [";
      size_t pending_items = msg.torque_state.size();
      for (auto item : msg.torque_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dxl_hw_state
  {
    if (msg.dxl_hw_state.size() == 0) {
      out << "dxl_hw_state: []";
    } else {
      out << "dxl_hw_state: [";
      size_t pending_items = msg.dxl_hw_state.size();
      for (auto item : msg.dxl_hw_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const DynamixelState & msg,
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

  // member: comm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.comm_state, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque_state.size() == 0) {
      out << "torque_state: []\n";
    } else {
      out << "torque_state:\n";
      for (auto item : msg.torque_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dxl_hw_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dxl_hw_state.size() == 0) {
      out << "dxl_hw_state: []\n";
    } else {
      out << "dxl_hw_state:\n";
      for (auto item : msg.dxl_hw_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamixelState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamixel_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_interfaces::msg::DynamixelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_interfaces::msg::DynamixelState & msg)
{
  return dynamixel_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_interfaces::msg::DynamixelState>()
{
  return "dynamixel_interfaces::msg::DynamixelState";
}

template<>
inline const char * name<dynamixel_interfaces::msg::DynamixelState>()
{
  return "dynamixel_interfaces/msg/DynamixelState";
}

template<>
struct has_fixed_size<dynamixel_interfaces::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_interfaces::msg::DynamixelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_interfaces::msg::DynamixelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__TRAITS_HPP_
