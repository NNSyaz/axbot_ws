// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:srv/SetEmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/set_emergency_stop.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__BUILDER_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/srv/detail/set_emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEmergencyStop_Request_enable
{
public:
  Init_SetEmergencyStop_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::axbot_interfaces::srv::SetEmergencyStop_Request enable(::axbot_interfaces::srv::SetEmergencyStop_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetEmergencyStop_Request>()
{
  return axbot_interfaces::srv::builder::Init_SetEmergencyStop_Request_enable();
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEmergencyStop_Response_message
{
public:
  explicit Init_SetEmergencyStop_Response_message(::axbot_interfaces::srv::SetEmergencyStop_Response & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::SetEmergencyStop_Response message(::axbot_interfaces::srv::SetEmergencyStop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Response msg_;
};

class Init_SetEmergencyStop_Response_success
{
public:
  Init_SetEmergencyStop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEmergencyStop_Response_message success(::axbot_interfaces::srv::SetEmergencyStop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetEmergencyStop_Response_message(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetEmergencyStop_Response>()
{
  return axbot_interfaces::srv::builder::Init_SetEmergencyStop_Response_success();
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetEmergencyStop_Event_response
{
public:
  explicit Init_SetEmergencyStop_Event_response(::axbot_interfaces::srv::SetEmergencyStop_Event & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::SetEmergencyStop_Event response(::axbot_interfaces::srv::SetEmergencyStop_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Event msg_;
};

class Init_SetEmergencyStop_Event_request
{
public:
  explicit Init_SetEmergencyStop_Event_request(::axbot_interfaces::srv::SetEmergencyStop_Event & msg)
  : msg_(msg)
  {}
  Init_SetEmergencyStop_Event_response request(::axbot_interfaces::srv::SetEmergencyStop_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetEmergencyStop_Event_response(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Event msg_;
};

class Init_SetEmergencyStop_Event_info
{
public:
  Init_SetEmergencyStop_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEmergencyStop_Event_request info(::axbot_interfaces::srv::SetEmergencyStop_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetEmergencyStop_Event_request(msg_);
  }

private:
  ::axbot_interfaces::srv::SetEmergencyStop_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::SetEmergencyStop_Event>()
{
  return axbot_interfaces::srv::builder::Init_SetEmergencyStop_Event_info();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__BUILDER_HPP_
