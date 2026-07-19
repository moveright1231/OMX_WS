// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_interfaces:srv/SetDataToDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/set_data_to_dxl.hpp"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__SET_DATA_TO_DXL__BUILDER_HPP_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__SET_DATA_TO_DXL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_interfaces/srv/detail/set_data_to_dxl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDataToDxl_Request_item_data
{
public:
  explicit Init_SetDataToDxl_Request_item_data(::dynamixel_interfaces::srv::SetDataToDxl_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_interfaces::srv::SetDataToDxl_Request item_data(::dynamixel_interfaces::srv::SetDataToDxl_Request::_item_data_type arg)
  {
    msg_.item_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Request msg_;
};

class Init_SetDataToDxl_Request_item_name
{
public:
  explicit Init_SetDataToDxl_Request_item_name(::dynamixel_interfaces::srv::SetDataToDxl_Request & msg)
  : msg_(msg)
  {}
  Init_SetDataToDxl_Request_item_data item_name(::dynamixel_interfaces::srv::SetDataToDxl_Request::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return Init_SetDataToDxl_Request_item_data(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Request msg_;
};

class Init_SetDataToDxl_Request_id
{
public:
  explicit Init_SetDataToDxl_Request_id(::dynamixel_interfaces::srv::SetDataToDxl_Request & msg)
  : msg_(msg)
  {}
  Init_SetDataToDxl_Request_item_name id(::dynamixel_interfaces::srv::SetDataToDxl_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SetDataToDxl_Request_item_name(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Request msg_;
};

class Init_SetDataToDxl_Request_header
{
public:
  Init_SetDataToDxl_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDataToDxl_Request_id header(::dynamixel_interfaces::srv::SetDataToDxl_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetDataToDxl_Request_id(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::SetDataToDxl_Request>()
{
  return dynamixel_interfaces::srv::builder::Init_SetDataToDxl_Request_header();
}

}  // namespace dynamixel_interfaces


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDataToDxl_Response_result
{
public:
  Init_SetDataToDxl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_interfaces::srv::SetDataToDxl_Response result(::dynamixel_interfaces::srv::SetDataToDxl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::SetDataToDxl_Response>()
{
  return dynamixel_interfaces::srv::builder::Init_SetDataToDxl_Response_result();
}

}  // namespace dynamixel_interfaces


namespace dynamixel_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDataToDxl_Event_response
{
public:
  explicit Init_SetDataToDxl_Event_response(::dynamixel_interfaces::srv::SetDataToDxl_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_interfaces::srv::SetDataToDxl_Event response(::dynamixel_interfaces::srv::SetDataToDxl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Event msg_;
};

class Init_SetDataToDxl_Event_request
{
public:
  explicit Init_SetDataToDxl_Event_request(::dynamixel_interfaces::srv::SetDataToDxl_Event & msg)
  : msg_(msg)
  {}
  Init_SetDataToDxl_Event_response request(::dynamixel_interfaces::srv::SetDataToDxl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetDataToDxl_Event_response(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Event msg_;
};

class Init_SetDataToDxl_Event_info
{
public:
  Init_SetDataToDxl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDataToDxl_Event_request info(::dynamixel_interfaces::srv::SetDataToDxl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetDataToDxl_Event_request(msg_);
  }

private:
  ::dynamixel_interfaces::srv::SetDataToDxl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_interfaces::srv::SetDataToDxl_Event>()
{
  return dynamixel_interfaces::srv::builder::Init_SetDataToDxl_Event_info();
}

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__SET_DATA_TO_DXL__BUILDER_HPP_
