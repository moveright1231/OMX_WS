// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/msg/dynamixel_state.hpp"


#ifndef DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_
#define DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_interfaces/msg/detail/dynamixel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_interfaces
{

namespace msg
{

namespace builder
{

class Init_DynamixelState_dxl_hw_state
{
public:
  explicit Init_DynamixelState_dxl_hw_state(::dynamixel_interfaces::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  ::dynamixel_interfaces::msg::DynamixelState dxl_hw_state(::dynamixel_interfaces::msg::DynamixelState::_dxl_hw_state_type arg)
  {
    msg_.dxl_hw_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::msg::DynamixelState msg_;
};

class Init_DynamixelState_torque_state
{
public:
  explicit Init_DynamixelState_torque_state(::dynamixel_interfaces::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_dxl_hw_state torque_state(::dynamixel_interfaces::msg::DynamixelState::_torque_state_type arg)
  {
    msg_.torque_state = std::move(arg);
    return Init_DynamixelState_dxl_hw_state(msg_);
  }

private:
  ::dynamixel_interfaces::msg::DynamixelState msg_;
};

class Init_DynamixelState_id
{
public:
  explicit Init_DynamixelState_id(::dynamixel_interfaces::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_torque_state id(::dynamixel_interfaces::msg::DynamixelState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DynamixelState_torque_state(msg_);
  }

private:
  ::dynamixel_interfaces::msg::DynamixelState msg_;
};

class Init_DynamixelState_comm_state
{
public:
  explicit Init_DynamixelState_comm_state(::dynamixel_interfaces::msg::DynamixelState & msg)
  : msg_(msg)
  {}
  Init_DynamixelState_id comm_state(::dynamixel_interfaces::msg::DynamixelState::_comm_state_type arg)
  {
    msg_.comm_state = std::move(arg);
    return Init_DynamixelState_id(msg_);
  }

private:
  ::dynamixel_interfaces::msg::DynamixelState msg_;
};

class Init_DynamixelState_header
{
public:
  Init_DynamixelState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamixelState_comm_state header(::dynamixel_interfaces::msg::DynamixelState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynamixelState_comm_state(msg_);
  }

private:
  ::dynamixel_interfaces::msg::DynamixelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::msg::DynamixelState>()
{
  return dynamixel_interfaces::msg::builder::Init_DynamixelState_header();
}

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__BUILDER_HPP_
