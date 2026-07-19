// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamixel_interfaces/msg/detail/dynamixel_state__functions.h"
#include "dynamixel_interfaces/msg/detail/dynamixel_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamixel_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DynamixelState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamixel_interfaces::msg::DynamixelState(_init);
}

void DynamixelState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamixel_interfaces::msg::DynamixelState *>(message_memory);
  typed_message->~DynamixelState();
}

size_t size_function__DynamixelState__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DynamixelState__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DynamixelState__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DynamixelState__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__DynamixelState__id(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__DynamixelState__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__DynamixelState__id(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__DynamixelState__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DynamixelState__torque_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__DynamixelState__torque_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__DynamixelState__torque_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__DynamixelState__torque_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DynamixelState__dxl_hw_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DynamixelState__dxl_hw_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DynamixelState__dxl_hw_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DynamixelState__dxl_hw_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__DynamixelState__dxl_hw_state(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__DynamixelState__dxl_hw_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__DynamixelState__dxl_hw_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__DynamixelState__dxl_hw_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DynamixelState_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces::msg::DynamixelState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "comm_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces::msg::DynamixelState, comm_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces::msg::DynamixelState, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamixelState__id,  // size() function pointer
    get_const_function__DynamixelState__id,  // get_const(index) function pointer
    get_function__DynamixelState__id,  // get(index) function pointer
    fetch_function__DynamixelState__id,  // fetch(index, &value) function pointer
    assign_function__DynamixelState__id,  // assign(index, value) function pointer
    resize_function__DynamixelState__id  // resize(index) function pointer
  },
  {
    "torque_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces::msg::DynamixelState, torque_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamixelState__torque_state,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__DynamixelState__torque_state,  // fetch(index, &value) function pointer
    assign_function__DynamixelState__torque_state,  // assign(index, value) function pointer
    resize_function__DynamixelState__torque_state  // resize(index) function pointer
  },
  {
    "dxl_hw_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces::msg::DynamixelState, dxl_hw_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__DynamixelState__dxl_hw_state,  // size() function pointer
    get_const_function__DynamixelState__dxl_hw_state,  // get_const(index) function pointer
    get_function__DynamixelState__dxl_hw_state,  // get(index) function pointer
    fetch_function__DynamixelState__dxl_hw_state,  // fetch(index, &value) function pointer
    assign_function__DynamixelState__dxl_hw_state,  // assign(index, value) function pointer
    resize_function__DynamixelState__dxl_hw_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DynamixelState_message_members = {
  "dynamixel_interfaces::msg",  // message namespace
  "DynamixelState",  // message name
  5,  // number of fields
  sizeof(dynamixel_interfaces::msg::DynamixelState),
  false,  // has_any_key_member_
  DynamixelState_message_member_array,  // message members
  DynamixelState_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamixelState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DynamixelState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DynamixelState_message_members,
  get_message_typesupport_handle_function,
  &dynamixel_interfaces__msg__DynamixelState__get_type_hash,
  &dynamixel_interfaces__msg__DynamixelState__get_type_description,
  &dynamixel_interfaces__msg__DynamixelState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamixel_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_interfaces::msg::DynamixelState>()
{
  return &::dynamixel_interfaces::msg::rosidl_typesupport_introspection_cpp::DynamixelState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_interfaces, msg, DynamixelState)() {
  return &::dynamixel_interfaces::msg::rosidl_typesupport_introspection_cpp::DynamixelState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
