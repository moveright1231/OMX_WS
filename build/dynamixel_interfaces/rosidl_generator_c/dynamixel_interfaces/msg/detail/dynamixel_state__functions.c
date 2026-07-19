// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice
#include "dynamixel_interfaces/msg/detail/dynamixel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `torque_state`
// Member `dxl_hw_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
dynamixel_interfaces__msg__DynamixelState__init(dynamixel_interfaces__msg__DynamixelState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynamixel_interfaces__msg__DynamixelState__fini(msg);
    return false;
  }
  // comm_state
  // id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->id, 0)) {
    dynamixel_interfaces__msg__DynamixelState__fini(msg);
    return false;
  }
  // torque_state
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->torque_state, 0)) {
    dynamixel_interfaces__msg__DynamixelState__fini(msg);
    return false;
  }
  // dxl_hw_state
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->dxl_hw_state, 0)) {
    dynamixel_interfaces__msg__DynamixelState__fini(msg);
    return false;
  }
  return true;
}

void
dynamixel_interfaces__msg__DynamixelState__fini(dynamixel_interfaces__msg__DynamixelState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // comm_state
  // id
  rosidl_runtime_c__int32__Sequence__fini(&msg->id);
  // torque_state
  rosidl_runtime_c__boolean__Sequence__fini(&msg->torque_state);
  // dxl_hw_state
  rosidl_runtime_c__int32__Sequence__fini(&msg->dxl_hw_state);
}

bool
dynamixel_interfaces__msg__DynamixelState__are_equal(const dynamixel_interfaces__msg__DynamixelState * lhs, const dynamixel_interfaces__msg__DynamixelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // comm_state
  if (lhs->comm_state != rhs->comm_state) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // torque_state
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->torque_state), &(rhs->torque_state)))
  {
    return false;
  }
  // dxl_hw_state
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->dxl_hw_state), &(rhs->dxl_hw_state)))
  {
    return false;
  }
  return true;
}

bool
dynamixel_interfaces__msg__DynamixelState__copy(
  const dynamixel_interfaces__msg__DynamixelState * input,
  dynamixel_interfaces__msg__DynamixelState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // comm_state
  output->comm_state = input->comm_state;
  // id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // torque_state
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->torque_state), &(output->torque_state)))
  {
    return false;
  }
  // dxl_hw_state
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->dxl_hw_state), &(output->dxl_hw_state)))
  {
    return false;
  }
  return true;
}

dynamixel_interfaces__msg__DynamixelState *
dynamixel_interfaces__msg__DynamixelState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__msg__DynamixelState * msg = (dynamixel_interfaces__msg__DynamixelState *)allocator.allocate(sizeof(dynamixel_interfaces__msg__DynamixelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_interfaces__msg__DynamixelState));
  bool success = dynamixel_interfaces__msg__DynamixelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_interfaces__msg__DynamixelState__destroy(dynamixel_interfaces__msg__DynamixelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_interfaces__msg__DynamixelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_interfaces__msg__DynamixelState__Sequence__init(dynamixel_interfaces__msg__DynamixelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__msg__DynamixelState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dynamixel_interfaces__msg__DynamixelState)) {
      return false;
    }
    data = (dynamixel_interfaces__msg__DynamixelState *)allocator.zero_allocate(size, sizeof(dynamixel_interfaces__msg__DynamixelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_interfaces__msg__DynamixelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_interfaces__msg__DynamixelState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamixel_interfaces__msg__DynamixelState__Sequence__fini(dynamixel_interfaces__msg__DynamixelState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamixel_interfaces__msg__DynamixelState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamixel_interfaces__msg__DynamixelState__Sequence *
dynamixel_interfaces__msg__DynamixelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__msg__DynamixelState__Sequence * array = (dynamixel_interfaces__msg__DynamixelState__Sequence *)allocator.allocate(sizeof(dynamixel_interfaces__msg__DynamixelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_interfaces__msg__DynamixelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_interfaces__msg__DynamixelState__Sequence__destroy(dynamixel_interfaces__msg__DynamixelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_interfaces__msg__DynamixelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_interfaces__msg__DynamixelState__Sequence__are_equal(const dynamixel_interfaces__msg__DynamixelState__Sequence * lhs, const dynamixel_interfaces__msg__DynamixelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_interfaces__msg__DynamixelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_interfaces__msg__DynamixelState__Sequence__copy(
  const dynamixel_interfaces__msg__DynamixelState__Sequence * input,
  dynamixel_interfaces__msg__DynamixelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dynamixel_interfaces__msg__DynamixelState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dynamixel_interfaces__msg__DynamixelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_interfaces__msg__DynamixelState * data =
      (dynamixel_interfaces__msg__DynamixelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_interfaces__msg__DynamixelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_interfaces__msg__DynamixelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_interfaces__msg__DynamixelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
