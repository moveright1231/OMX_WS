// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_interfaces:srv/RebootDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/reboot_dxl.hpp"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__BUILDER_HPP_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_interfaces/srv/detail/reboot_dxl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_RebootDxl_Request_header
{
public:
  Init_RebootDxl_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_interfaces::srv::RebootDxl_Request header(::dynamixel_interfaces::srv::RebootDxl_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::RebootDxl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::RebootDxl_Request>()
{
  return dynamixel_interfaces::srv::builder::Init_RebootDxl_Request_header();
}

}  // namespace dynamixel_interfaces


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_RebootDxl_Response_result
{
public:
  Init_RebootDxl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_interfaces::srv::RebootDxl_Response result(::dynamixel_interfaces::srv::RebootDxl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::RebootDxl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::RebootDxl_Response>()
{
  return dynamixel_interfaces::srv::builder::Init_RebootDxl_Response_result();
}

}  // namespace dynamixel_interfaces


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_RebootDxl_Event_response
{
public:
  explicit Init_RebootDxl_Event_response(::dynamixel_interfaces::srv::RebootDxl_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_interfaces::srv::RebootDxl_Event response(::dynamixel_interfaces::srv::RebootDxl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::RebootDxl_Event msg_;
};

class Init_RebootDxl_Event_request
{
public:
  explicit Init_RebootDxl_Event_request(::dynamixel_interfaces::srv::RebootDxl_Event & msg)
  : msg_(msg)
  {}
  Init_RebootDxl_Event_response request(::dynamixel_interfaces::srv::RebootDxl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RebootDxl_Event_response(msg_);
  }

private:
  ::dynamixel_interfaces::srv::RebootDxl_Event msg_;
};

class Init_RebootDxl_Event_info
{
public:
  Init_RebootDxl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RebootDxl_Event_request info(::dynamixel_interfaces::srv::RebootDxl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RebootDxl_Event_request(msg_);
  }

private:
  ::dynamixel_interfaces::srv::RebootDxl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::RebootDxl_Event>()
{
  return dynamixel_interfaces::srv::builder::Init_RebootDxl_Event_info();
}

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__BUILDER_HPP_
