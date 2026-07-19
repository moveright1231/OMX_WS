// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/msg/dynamixel_state.hpp"


#ifndef DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_
#define DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_interfaces__msg__DynamixelState __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__msg__DynamixelState __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamixelState_
{
  using Type = DynamixelState_<ContainerAllocator>;

  explicit DynamixelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_state = 0l;
    }
  }

  explicit DynamixelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->comm_state = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _comm_state_type =
    int32_t;
  _comm_state_type comm_state;
  using _id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _id_type id;
  using _torque_state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _torque_state_type torque_state;
  using _dxl_hw_state_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _dxl_hw_state_type dxl_hw_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__comm_state(
    const int32_t & _arg)
  {
    this->comm_state = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__torque_state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->torque_state = _arg;
    return *this;
  }
  Type & set__dxl_hw_state(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->dxl_hw_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t COMM_STATE_OK =
    0;
  static constexpr int32_t COMM_STATE_CANNOT_FIND_CONTROL_ITEM =
    -1;
  static constexpr int32_t COMM_STATE_OPEN_PORT_FAIL =
    -2;
  static constexpr int32_t COMM_STATE_INDIRECT_ADDR_FAIL =
    -3;
  static constexpr int32_t COMM_STATE_ITEM_WRITE_FAIL =
    -4;
  static constexpr int32_t COMM_STATE_ITEM_READ_FAIL =
    -5;
  static constexpr int32_t COMM_STATE_SYNC_WRITE_FAIL =
    -6;
  static constexpr int32_t COMM_STATE_SYNC_READ_FAIL =
    -7;
  static constexpr int32_t COMM_STATE_SET_SYNC_WRITE_FAIL =
    -8;
  static constexpr int32_t COMM_STATE_SET_SYNC_READ_FAIL =
    -9;
  static constexpr int32_t COMM_STATE_BULK_WRITE_FAIL =
    -10;
  static constexpr int32_t COMM_STATE_BULK_READ_FAIL =
    -11;
  static constexpr int32_t COMM_STATE_SET_BULK_WRITE_FAIL =
    -12;
  static constexpr int32_t COMM_STATE_SET_BULK_READ_FAIL =
    -13;
  static constexpr int32_t COMM_STATE_SET_READ_ITEM_FAIL =
    -14;
  static constexpr int32_t COMM_STATE_SET_WRITE_ITEM_FAIL =
    -15;
  static constexpr int32_t COMM_STATE_DXL_HARDWARE_ERROR =
    -16;
  static constexpr int32_t COMM_STATE_DXL_REBOOT_FAIL =
    -17;

  // pointer types
  using RawPtr =
    dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__msg__DynamixelState
    std::shared_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__msg__DynamixelState
    std::shared_ptr<dynamixel_interfaces::msg::DynamixelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamixelState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->comm_state != other.comm_state) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->torque_state != other.torque_state) {
      return false;
    }
    if (this->dxl_hw_state != other.dxl_hw_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamixelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamixelState_

// alias to use template instance with default allocator
using DynamixelState =
  dynamixel_interfaces::msg::DynamixelState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_CANNOT_FIND_CONTROL_ITEM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_OPEN_PORT_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_INDIRECT_ADDR_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_ITEM_WRITE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_ITEM_READ_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SYNC_WRITE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SYNC_READ_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_SYNC_WRITE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_SYNC_READ_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_BULK_WRITE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_BULK_READ_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_BULK_WRITE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_BULK_READ_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_READ_ITEM_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_SET_WRITE_ITEM_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_DXL_HARDWARE_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DynamixelState_<ContainerAllocator>::COMM_STATE_DXL_REBOOT_FAIL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__MSG__DETAIL__DYNAMIXEL_STATE__STRUCT_HPP_
