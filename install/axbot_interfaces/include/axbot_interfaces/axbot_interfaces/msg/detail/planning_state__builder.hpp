// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/planning_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/msg/detail/planning_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_PlanningState_action_id
{
public:
  explicit Init_PlanningState_action_id(::axbot_interfaces::msg::PlanningState & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::msg::PlanningState action_id(::axbot_interfaces::msg::PlanningState::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::msg::PlanningState msg_;
};

class Init_PlanningState_going_back_to_charger
{
public:
  explicit Init_PlanningState_going_back_to_charger(::axbot_interfaces::msg::PlanningState & msg)
  : msg_(msg)
  {}
  Init_PlanningState_action_id going_back_to_charger(::axbot_interfaces::msg::PlanningState::_going_back_to_charger_type arg)
  {
    msg_.going_back_to_charger = std::move(arg);
    return Init_PlanningState_action_id(msg_);
  }

private:
  ::axbot_interfaces::msg::PlanningState msg_;
};

class Init_PlanningState_charger_pose
{
public:
  explicit Init_PlanningState_charger_pose(::axbot_interfaces::msg::PlanningState & msg)
  : msg_(msg)
  {}
  Init_PlanningState_going_back_to_charger charger_pose(::axbot_interfaces::msg::PlanningState::_charger_pose_type arg)
  {
    msg_.charger_pose = std::move(arg);
    return Init_PlanningState_going_back_to_charger(msg_);
  }

private:
  ::axbot_interfaces::msg::PlanningState msg_;
};

class Init_PlanningState_target_poses
{
public:
  explicit Init_PlanningState_target_poses(::axbot_interfaces::msg::PlanningState & msg)
  : msg_(msg)
  {}
  Init_PlanningState_charger_pose target_poses(::axbot_interfaces::msg::PlanningState::_target_poses_type arg)
  {
    msg_.target_poses = std::move(arg);
    return Init_PlanningState_charger_pose(msg_);
  }

private:
  ::axbot_interfaces::msg::PlanningState msg_;
};

class Init_PlanningState_move_state
{
public:
  Init_PlanningState_move_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningState_target_poses move_state(::axbot_interfaces::msg::PlanningState::_move_state_type arg)
  {
    msg_.move_state = std::move(arg);
    return Init_PlanningState_target_poses(msg_);
  }

private:
  ::axbot_interfaces::msg::PlanningState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::msg::PlanningState>()
{
  return axbot_interfaces::msg::builder::Init_PlanningState_move_state();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_
