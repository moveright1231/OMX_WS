// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_interfaces:srv/RebootDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/reboot_dxl.hpp"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_HPP_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_HPP_

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
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Request __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RebootDxl_Request_
{
  using Type = RebootDxl_Request_<ContainerAllocator>;

  explicit RebootDxl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RebootDxl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Request
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Request
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RebootDxl_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    return true;
  }
  bool operator!=(const RebootDxl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RebootDxl_Request_

// alias to use template instance with default allocator
using RebootDxl_Request =
  dynamixel_interfaces::srv::RebootDxl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces


#ifndef _WIN32
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Response __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RebootDxl_Response_
{
  using Type = RebootDxl_Response_<ContainerAllocator>;

  explicit RebootDxl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit RebootDxl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Response
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Response
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RebootDxl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RebootDxl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RebootDxl_Response_

// alias to use template instance with default allocator
using RebootDxl_Response =
  dynamixel_interfaces::srv::RebootDxl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Event __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Event __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RebootDxl_Event_
{
  using Type = RebootDxl_Event_<ContainerAllocator>;

  explicit RebootDxl_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RebootDxl_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::RebootDxl_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::RebootDxl_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Event
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__RebootDxl_Event
    std::shared_ptr<dynamixel_interfaces::srv::RebootDxl_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RebootDxl_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RebootDxl_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RebootDxl_Event_

// alias to use template instance with default allocator
using RebootDxl_Event =
  dynamixel_interfaces::srv::RebootDxl_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace dynamixel_interfaces
{

namespace srv
{

struct RebootDxl
{
  using Request = dynamixel_interfaces::srv::RebootDxl_Request;
  using Response = dynamixel_interfaces::srv::RebootDxl_Response;
  using Event = dynamixel_interfaces::srv::RebootDxl_Event;
};

}  // namespace srv

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__REBOOT_DXL__STRUCT_HPP_
