// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamixel_interfaces/msg/detail/dynamixel_state__rosidl_typesupport_introspection_c.h"
#include "dynamixel_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamixel_interfaces/msg/detail/dynamixel_state__functions.h"
#include "dynamixel_interfaces/msg/detail/dynamixel_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id`
// Member `torque_state`
// Member `dxl_hw_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamixel_interfaces__msg__DynamixelState__init(message_memory);
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_fini_function(void * message_memory)
{
  dynamixel_interfaces__msg__DynamixelState__fini(message_memory);
}

size_t dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__torque_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__torque_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__torque_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__torque_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__torque_state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__torque_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__torque_state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__torque_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__dxl_hw_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__dxl_hw_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__dxl_hw_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__dxl_hw_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__dxl_hw_state(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__dxl_hw_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__dxl_hw_state(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__dxl_hw_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces__msg__DynamixelState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "comm_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces__msg__DynamixelState, comm_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces__msg__DynamixelState, id),  // bytes offset in struct
    NULL,  // default value
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__id,  // size() function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__id,  // get_const(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__id,  // get(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__id,  // fetch(index, &value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__id,  // assign(index, value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__id  // resize(index) function pointer
  },
  {
    "torque_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces__msg__DynamixelState, torque_state),  // bytes offset in struct
    NULL,  // default value
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__torque_state,  // size() function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__torque_state,  // get_const(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__torque_state,  // get(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__torque_state,  // fetch(index, &value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__torque_state,  // assign(index, value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__torque_state  // resize(index) function pointer
  },
  {
    "dxl_hw_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_interfaces__msg__DynamixelState, dxl_hw_state),  // bytes offset in struct
    NULL,  // default value
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__size_function__DynamixelState__dxl_hw_state,  // size() function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_const_function__DynamixelState__dxl_hw_state,  // get_const(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__get_function__DynamixelState__dxl_hw_state,  // get(index) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__fetch_function__DynamixelState__dxl_hw_state,  // fetch(index, &value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__assign_function__DynamixelState__dxl_hw_state,  // assign(index, value) function pointer
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__resize_function__DynamixelState__dxl_hw_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_members = {
  "dynamixel_interfaces__msg",  // message namespace
  "DynamixelState",  // message name
  5,  // number of fields
  sizeof(dynamixel_interfaces__msg__DynamixelState),
  false,  // has_any_key_member_
  dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_member_array,  // message members
  dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_type_support_handle = {
  0,
  &dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_members,
  get_message_typesupport_handle_function,
  &dynamixel_interfaces__msg__DynamixelState__get_type_hash,
  &dynamixel_interfaces__msg__DynamixelState__get_type_description,
  &dynamixel_interfaces__msg__DynamixelState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_interfaces, msg, DynamixelState)() {
  dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_type_support_handle.typesupport_identifier) {
    dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamixel_interfaces__msg__DynamixelState__rosidl_typesupport_introspection_c__DynamixelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
