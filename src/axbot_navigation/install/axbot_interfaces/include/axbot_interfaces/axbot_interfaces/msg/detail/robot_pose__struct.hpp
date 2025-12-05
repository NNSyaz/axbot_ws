// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/robot_pose.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__msg__RobotPose __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__msg__RobotPose __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPose_
{
  using Type = RobotPose_<ContainerAllocator>;

  explicit RobotPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->orientation = 0.0f;
    }
  }

  explicit RobotPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->orientation = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _orientation_type =
    float;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::msg::RobotPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::msg::RobotPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::RobotPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::RobotPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__msg__RobotPose
    std::shared_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__msg__RobotPose
    std::shared_ptr<axbot_interfaces::msg::RobotPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPose_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPose_

// alias to use template instance with default allocator
using RobotPose =
  axbot_interfaces::msg::RobotPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_HPP_
