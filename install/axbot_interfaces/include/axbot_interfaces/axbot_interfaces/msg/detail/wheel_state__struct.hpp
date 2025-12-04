// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/wheel_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__msg__WheelState __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__msg__WheelState __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelState_
{
  using Type = WheelState_<ContainerAllocator>;

  explicit WheelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = "";
      this->emergency_stop_pressed = false;
    }
  }

  explicit WheelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_mode = "";
      this->emergency_stop_pressed = false;
    }
  }

  // field types and members
  using _control_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_mode_type control_mode;
  using _emergency_stop_pressed_type =
    bool;
  _emergency_stop_pressed_type emergency_stop_pressed;

  // setters for named parameter idiom
  Type & set__control_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__emergency_stop_pressed(
    const bool & _arg)
  {
    this->emergency_stop_pressed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::msg::WheelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::msg::WheelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::WheelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::WheelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__msg__WheelState
    std::shared_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__msg__WheelState
    std::shared_ptr<axbot_interfaces::msg::WheelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelState_ & other) const
  {
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->emergency_stop_pressed != other.emergency_stop_pressed) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelState_

// alias to use template instance with default allocator
using WheelState =
  axbot_interfaces::msg::WheelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_HPP_
