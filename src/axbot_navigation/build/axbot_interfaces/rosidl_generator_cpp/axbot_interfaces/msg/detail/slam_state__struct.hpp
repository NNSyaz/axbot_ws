// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/slam_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__STRUCT_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__msg__SlamState __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__msg__SlamState __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlamState_
{
  using Type = SlamState_<ContainerAllocator>;

  explicit SlamState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->reliable = false;
    }
  }

  explicit SlamState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->reliable = false;
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _reliable_type =
    bool;
  _reliable_type reliable;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__reliable(
    const bool & _arg)
  {
    this->reliable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::msg::SlamState_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::msg::SlamState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::SlamState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::SlamState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__msg__SlamState
    std::shared_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__msg__SlamState
    std::shared_ptr<axbot_interfaces::msg::SlamState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlamState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->reliable != other.reliable) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlamState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlamState_

// alias to use template instance with default allocator
using SlamState =
  axbot_interfaces::msg::SlamState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__STRUCT_HPP_
