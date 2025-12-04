// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/slam_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__BUILDER_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/msg/detail/slam_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_SlamState_reliable
{
public:
  explicit Init_SlamState_reliable(::axbot_interfaces::msg::SlamState & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::msg::SlamState reliable(::axbot_interfaces::msg::SlamState::_reliable_type arg)
  {
    msg_.reliable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::msg::SlamState msg_;
};

class Init_SlamState_state
{
public:
  Init_SlamState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamState_reliable state(::axbot_interfaces::msg::SlamState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SlamState_reliable(msg_);
  }

private:
  ::axbot_interfaces::msg::SlamState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::msg::SlamState>()
{
  return axbot_interfaces::msg::builder::Init_SlamState_state();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__BUILDER_HPP_
