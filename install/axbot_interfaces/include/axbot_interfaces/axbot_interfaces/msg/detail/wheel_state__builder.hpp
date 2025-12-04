// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/wheel_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__BUILDER_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/msg/detail/wheel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelState_emergency_stop_pressed
{
public:
  explicit Init_WheelState_emergency_stop_pressed(::axbot_interfaces::msg::WheelState & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::msg::WheelState emergency_stop_pressed(::axbot_interfaces::msg::WheelState::_emergency_stop_pressed_type arg)
  {
    msg_.emergency_stop_pressed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::msg::WheelState msg_;
};

class Init_WheelState_control_mode
{
public:
  Init_WheelState_control_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelState_emergency_stop_pressed control_mode(::axbot_interfaces::msg::WheelState::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_WheelState_emergency_stop_pressed(msg_);
  }

private:
  ::axbot_interfaces::msg::WheelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::msg::WheelState>()
{
  return axbot_interfaces::msg::builder::Init_WheelState_control_mode();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__BUILDER_HPP_
