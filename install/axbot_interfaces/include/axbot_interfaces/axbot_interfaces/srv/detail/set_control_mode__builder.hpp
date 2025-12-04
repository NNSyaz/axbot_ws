// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/set_control_mode.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__BUILDER_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/srv/detail/set_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetControlMode_Request_mode
{
public:
  Init_SetControlMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::axbot_interfaces::srv::SetControlMode_Request mode(::axbot_interfaces::srv::SetControlMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetControlMode_Request>()
{
  return axbot_interfaces::srv::builder::Init_SetControlMode_Request_mode();
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetControlMode_Response_message
{
public:
  explicit Init_SetControlMode_Response_message(::axbot_interfaces::srv::SetControlMode_Response & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::SetControlMode_Response message(::axbot_interfaces::srv::SetControlMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Response msg_;
};

class Init_SetControlMode_Response_success
{
public:
  Init_SetControlMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControlMode_Response_message success(::axbot_interfaces::srv::SetControlMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetControlMode_Response_message(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetControlMode_Response>()
{
  return axbot_interfaces::srv::builder::Init_SetControlMode_Response_success();
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetControlMode_Event_response
{
public:
  explicit Init_SetControlMode_Event_response(::axbot_interfaces::srv::SetControlMode_Event & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::SetControlMode_Event response(::axbot_interfaces::srv::SetControlMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Event msg_;
};

class Init_SetControlMode_Event_request
{
public:
  explicit Init_SetControlMode_Event_request(::axbot_interfaces::srv::SetControlMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetControlMode_Event_response request(::axbot_interfaces::srv::SetControlMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetControlMode_Event_response(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Event msg_;
};

class Init_SetControlMode_Event_info
{
public:
  Init_SetControlMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControlMode_Event_request info(::axbot_interfaces::srv::SetControlMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetControlMode_Event_request(msg_);
  }

private:
  ::axbot_interfaces::srv::SetControlMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetControlMode_Event>()
{
  return axbot_interfaces::srv::builder::Init_SetControlMode_Event_info();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__BUILDER_HPP_
