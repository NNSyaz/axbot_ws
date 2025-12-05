// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/robot_pose.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/msg/detail/robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotPose_orientation
{
public:
  explicit Init_RobotPose_orientation(::axbot_interfaces::msg::RobotPose & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::msg::RobotPose orientation(::axbot_interfaces::msg::RobotPose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::msg::RobotPose msg_;
};

class Init_RobotPose_y
{
public:
  explicit Init_RobotPose_y(::axbot_interfaces::msg::RobotPose & msg)
  : msg_(msg)
  {}
  Init_RobotPose_orientation y(::axbot_interfaces::msg::RobotPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPose_orientation(msg_);
  }

private:
  ::axbot_interfaces::msg::RobotPose msg_;
};

class Init_RobotPose_x
{
public:
  Init_RobotPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPose_y x(::axbot_interfaces::msg::RobotPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPose_y(msg_);
  }

private:
  ::axbot_interfaces::msg::RobotPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::msg::RobotPose>()
{
  return axbot_interfaces::msg::builder::Init_RobotPose_x();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
