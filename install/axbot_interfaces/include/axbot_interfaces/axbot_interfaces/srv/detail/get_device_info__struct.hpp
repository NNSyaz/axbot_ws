// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/get_device_info.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Request __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDeviceInfo_Request_
{
  using Type = GetDeviceInfo_Request_<ContainerAllocator>;

  explicit GetDeviceInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetDeviceInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Request
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Request
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDeviceInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDeviceInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDeviceInfo_Request_

// alias to use template instance with default allocator
using GetDeviceInfo_Request =
  axbot_interfaces::srv::GetDeviceInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace axbot_interfaces


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Response __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDeviceInfo_Response_
{
  using Type = GetDeviceInfo_Response_<ContainerAllocator>;

  explicit GetDeviceInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->rosversion = "";
      this->rosdistro = "";
      this->axbot_version = "";
      this->model = "";
      this->serial_number = "";
      this->device_name = "";
      this->nickname = "";
      this->inscribed_radius = 0.0f;
      this->height = 0.0f;
      this->thickness = 0.0f;
      this->wheel_distance = 0.0f;
      this->width = 0.0f;
    }
  }

  explicit GetDeviceInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rosversion(_alloc),
    rosdistro(_alloc),
    axbot_version(_alloc),
    model(_alloc),
    serial_number(_alloc),
    device_name(_alloc),
    nickname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->rosversion = "";
      this->rosdistro = "";
      this->axbot_version = "";
      this->model = "";
      this->serial_number = "";
      this->device_name = "";
      this->nickname = "";
      this->inscribed_radius = 0.0f;
      this->height = 0.0f;
      this->thickness = 0.0f;
      this->wheel_distance = 0.0f;
      this->width = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _rosversion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rosversion_type rosversion;
  using _rosdistro_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rosdistro_type rosdistro;
  using _axbot_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _axbot_version_type axbot_version;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_number_type serial_number;
  using _device_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_name_type device_name;
  using _nickname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nickname_type nickname;
  using _inscribed_radius_type =
    float;
  _inscribed_radius_type inscribed_radius;
  using _height_type =
    float;
  _height_type height;
  using _thickness_type =
    float;
  _thickness_type thickness;
  using _wheel_distance_type =
    float;
  _wheel_distance_type wheel_distance;
  using _width_type =
    float;
  _width_type width;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__rosversion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rosversion = _arg;
    return *this;
  }
  Type & set__rosdistro(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rosdistro = _arg;
    return *this;
  }
  Type & set__axbot_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->axbot_version = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__device_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_name = _arg;
    return *this;
  }
  Type & set__nickname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nickname = _arg;
    return *this;
  }
  Type & set__inscribed_radius(
    const float & _arg)
  {
    this->inscribed_radius = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__thickness(
    const float & _arg)
  {
    this->thickness = _arg;
    return *this;
  }
  Type & set__wheel_distance(
    const float & _arg)
  {
    this->wheel_distance = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Response
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Response
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDeviceInfo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->rosversion != other.rosversion) {
      return false;
    }
    if (this->rosdistro != other.rosdistro) {
      return false;
    }
    if (this->axbot_version != other.axbot_version) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->device_name != other.device_name) {
      return false;
    }
    if (this->nickname != other.nickname) {
      return false;
    }
    if (this->inscribed_radius != other.inscribed_radius) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    if (this->wheel_distance != other.wheel_distance) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDeviceInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDeviceInfo_Response_

// alias to use template instance with default allocator
using GetDeviceInfo_Response =
  axbot_interfaces::srv::GetDeviceInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace axbot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Event __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Event __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDeviceInfo_Event_
{
  using Type = GetDeviceInfo_Event_<ContainerAllocator>;

  explicit GetDeviceInfo_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetDeviceInfo_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<axbot_interfaces::srv::GetDeviceInfo_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<axbot_interfaces::srv::GetDeviceInfo_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Event
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__srv__GetDeviceInfo_Event
    std::shared_ptr<axbot_interfaces::srv::GetDeviceInfo_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDeviceInfo_Event_ & other) const
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
  bool operator!=(const GetDeviceInfo_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDeviceInfo_Event_

// alias to use template instance with default allocator
using GetDeviceInfo_Event =
  axbot_interfaces::srv::GetDeviceInfo_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace axbot_interfaces

namespace axbot_interfaces
{

namespace srv
{

struct GetDeviceInfo
{
  using Request = axbot_interfaces::srv::GetDeviceInfo_Request;
  using Response = axbot_interfaces::srv::GetDeviceInfo_Response;
  using Event = axbot_interfaces::srv::GetDeviceInfo_Event;
};

}  // namespace srv

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_HPP_
