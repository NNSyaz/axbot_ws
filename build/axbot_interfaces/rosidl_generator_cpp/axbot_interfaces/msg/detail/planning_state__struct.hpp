// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/planning_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_poses'
// Member 'charger_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__axbot_interfaces__msg__PlanningState __attribute__((deprecated))
#else
# define DEPRECATED__axbot_interfaces__msg__PlanningState __declspec(deprecated)
#endif

namespace axbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningState_
{
  using Type = PlanningState_<ContainerAllocator>;

  explicit PlanningState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : charger_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_state = "";
      this->going_back_to_charger = false;
      this->action_id = 0l;
    }
  }

  explicit PlanningState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : move_state(_alloc),
    charger_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_state = "";
      this->going_back_to_charger = false;
      this->action_id = 0l;
    }
  }

  // field types and members
  using _move_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_state_type move_state;
  using _target_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _target_poses_type target_poses;
  using _charger_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _charger_pose_type charger_pose;
  using _going_back_to_charger_type =
    bool;
  _going_back_to_charger_type going_back_to_charger;
  using _action_id_type =
    int32_t;
  _action_id_type action_id;

  // setters for named parameter idiom
  Type & set__move_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move_state = _arg;
    return *this;
  }
  Type & set__target_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->target_poses = _arg;
    return *this;
  }
  Type & set__charger_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->charger_pose = _arg;
    return *this;
  }
  Type & set__going_back_to_charger(
    const bool & _arg)
  {
    this->going_back_to_charger = _arg;
    return *this;
  }
  Type & set__action_id(
    const int32_t & _arg)
  {
    this->action_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    axbot_interfaces::msg::PlanningState_<ContainerAllocator> *;
  using ConstRawPtr =
    const axbot_interfaces::msg::PlanningState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::PlanningState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      axbot_interfaces::msg::PlanningState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__axbot_interfaces__msg__PlanningState
    std::shared_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__axbot_interfaces__msg__PlanningState
    std::shared_ptr<axbot_interfaces::msg::PlanningState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningState_ & other) const
  {
    if (this->move_state != other.move_state) {
      return false;
    }
    if (this->target_poses != other.target_poses) {
      return false;
    }
    if (this->charger_pose != other.charger_pose) {
      return false;
    }
    if (this->going_back_to_charger != other.going_back_to_charger) {
      return false;
    }
    if (this->action_id != other.action_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningState_

// alias to use template instance with default allocator
using PlanningState =
  axbot_interfaces::msg::PlanningState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_
