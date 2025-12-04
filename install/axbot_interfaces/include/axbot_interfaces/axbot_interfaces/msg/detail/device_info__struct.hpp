// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/device_info.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__msg__DeviceInfo __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__msg__DeviceInfo __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeviceInfo_
{
  using Type = DeviceInfo_<ContainerAllocator>;

  explicit DeviceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
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

  explicit DeviceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__msg__DeviceInfo
    std::shared_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__msg__DeviceInfo
    std::shared_ptr<axbot_interfaces::msg::DeviceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeviceInfo_ & other) const
  {
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
  bool operator!=(const DeviceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeviceInfo_

// alias to use template instance with default allocator
using DeviceInfo =
  axbot_interfaces::msg::DeviceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_HPP_
