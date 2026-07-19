// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_interfaces:srv/GetDataFromDxl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_interfaces/srv/get_data_from_dxl.hpp"


#ifndef DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_HPP_
#define DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_HPP_

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
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Request __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDataFromDxl_Request_
{
  using Type = GetDataFromDxl_Request_<ContainerAllocator>;

  explicit GetDataFromDxl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->item_name = "";
      this->timeout_sec = 0.0;
    }
  }

  explicit GetDataFromDxl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    item_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->item_name = "";
      this->timeout_sec = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint8_t;
  _id_type id;
  using _item_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_name_type item_name;
  using _timeout_sec_type =
    double;
  _timeout_sec_type timeout_sec;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__item_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_name = _arg;
    return *this;
  }
  Type & set__timeout_sec(
    const double & _arg)
  {
    this->timeout_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Request
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Request
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDataFromDxl_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->item_name != other.item_name) {
      return false;
    }
    if (this->timeout_sec != other.timeout_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDataFromDxl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDataFromDxl_Request_

// alias to use template instance with default allocator
using GetDataFromDxl_Request =
  dynamixel_interfaces::srv::GetDataFromDxl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces


#ifndef _WIN32
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Response __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDataFromDxl_Response_
{
  using Type = GetDataFromDxl_Response_<ContainerAllocator>;

  explicit GetDataFromDxl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_data = 0ul;
      this->result = false;
    }
  }

  explicit GetDataFromDxl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_data = 0ul;
      this->result = false;
    }
  }

  // field types and members
  using _item_data_type =
    uint32_t;
  _item_data_type item_data;
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__item_data(
    const uint32_t & _arg)
  {
    this->item_data = _arg;
    return *this;
  }
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Response
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Response
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDataFromDxl_Response_ & other) const
  {
    if (this->item_data != other.item_data) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDataFromDxl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDataFromDxl_Response_

// alias to use template instance with default allocator
using GetDataFromDxl_Response =
  dynamixel_interfaces::srv::GetDataFromDxl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Event __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Event __declspec(deprecated)
#endif

namespace dynamixel_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDataFromDxl_Event_
{
  using Type = GetDataFromDxl_Event_<ContainerAllocator>;

  explicit GetDataFromDxl_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetDataFromDxl_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::GetDataFromDxl_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<dynamixel_interfaces::srv::GetDataFromDxl_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Event
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_interfaces__srv__GetDataFromDxl_Event
    std::shared_ptr<dynamixel_interfaces::srv::GetDataFromDxl_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDataFromDxl_Event_ & other) const
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
  bool operator!=(const GetDataFromDxl_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDataFromDxl_Event_

// alias to use template instance with default allocator
using GetDataFromDxl_Event =
  dynamixel_interfaces::srv::GetDataFromDxl_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_interfaces

namespace dynamixel_interfaces
{

namespace srv
{

struct GetDataFromDxl
{
  using Request = dynamixel_interfaces::srv::GetDataFromDxl_Request;
  using Response = dynamixel_interfaces::srv::GetDataFromDxl_Response;
  using Event = dynamixel_interfaces::srv::GetDataFromDxl_Event;
};

}  // namespace srv

}  // namespace dynamixel_interfaces

#endif  // DYNAMIXEL_INTERFACES__SRV__DETAIL__GET_DATA_FROM_DXL__STRUCT_HPP_
