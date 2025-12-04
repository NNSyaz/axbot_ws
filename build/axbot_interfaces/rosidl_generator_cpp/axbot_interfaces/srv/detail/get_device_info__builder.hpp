// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/get_device_info.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/srv/detail/get_device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::GetDeviceInfo_Request>()
{
  return ::axbot_interfaces::srv::GetDeviceInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetDeviceInfo_Response_width
{
public:
  explicit Init_GetDeviceInfo_Response_width(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::GetDeviceInfo_Response width(::axbot_interfaces::srv::GetDeviceInfo_Response::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_wheel_distance
{
public:
  explicit Init_GetDeviceInfo_Response_wheel_distance(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_width wheel_distance(::axbot_interfaces::srv::GetDeviceInfo_Response::_wheel_distance_type arg)
  {
    msg_.wheel_distance = std::move(arg);
    return Init_GetDeviceInfo_Response_width(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_thickness
{
public:
  explicit Init_GetDeviceInfo_Response_thickness(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_wheel_distance thickness(::axbot_interfaces::srv::GetDeviceInfo_Response::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_GetDeviceInfo_Response_wheel_distance(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_height
{
public:
  explicit Init_GetDeviceInfo_Response_height(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_thickness height(::axbot_interfaces::srv::GetDeviceInfo_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_GetDeviceInfo_Response_thickness(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_inscribed_radius
{
public:
  explicit Init_GetDeviceInfo_Response_inscribed_radius(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_height inscribed_radius(::axbot_interfaces::srv::GetDeviceInfo_Response::_inscribed_radius_type arg)
  {
    msg_.inscribed_radius = std::move(arg);
    return Init_GetDeviceInfo_Response_height(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_nickname
{
public:
  explicit Init_GetDeviceInfo_Response_nickname(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_inscribed_radius nickname(::axbot_interfaces::srv::GetDeviceInfo_Response::_nickname_type arg)
  {
    msg_.nickname = std::move(arg);
    return Init_GetDeviceInfo_Response_inscribed_radius(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_device_name
{
public:
  explicit Init_GetDeviceInfo_Response_device_name(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_nickname device_name(::axbot_interfaces::srv::GetDeviceInfo_Response::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_GetDeviceInfo_Response_nickname(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_serial_number
{
public:
  explicit Init_GetDeviceInfo_Response_serial_number(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_device_name serial_number(::axbot_interfaces::srv::GetDeviceInfo_Response::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_GetDeviceInfo_Response_device_name(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_model
{
public:
  explicit Init_GetDeviceInfo_Response_model(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_serial_number model(::axbot_interfaces::srv::GetDeviceInfo_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_GetDeviceInfo_Response_serial_number(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_axbot_version
{
public:
  explicit Init_GetDeviceInfo_Response_axbot_version(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_model axbot_version(::axbot_interfaces::srv::GetDeviceInfo_Response::_axbot_version_type arg)
  {
    msg_.axbot_version = std::move(arg);
    return Init_GetDeviceInfo_Response_model(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_rosdistro
{
public:
  explicit Init_GetDeviceInfo_Response_rosdistro(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_axbot_version rosdistro(::axbot_interfaces::srv::GetDeviceInfo_Response::_rosdistro_type arg)
  {
    msg_.rosdistro = std::move(arg);
    return Init_GetDeviceInfo_Response_axbot_version(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_rosversion
{
public:
  explicit Init_GetDeviceInfo_Response_rosversion(::axbot_interfaces::srv::GetDeviceInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Response_rosdistro rosversion(::axbot_interfaces::srv::GetDeviceInfo_Response::_rosversion_type arg)
  {
    msg_.rosversion = std::move(arg);
    return Init_GetDeviceInfo_Response_rosdistro(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

class Init_GetDeviceInfo_Response_success
{
public:
  Init_GetDeviceInfo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDeviceInfo_Response_rosversion success(::axbot_interfaces::srv::GetDeviceInfo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDeviceInfo_Response_rosversion(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::GetDeviceInfo_Response>()
{
  return axbot_interfaces::srv::builder::Init_GetDeviceInfo_Response_success();
}

}  // namespace axbot_interfaces


namespace axbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetDeviceInfo_Event_response
{
public:
  explicit Init_GetDeviceInfo_Event_response(::axbot_interfaces::srv::GetDeviceInfo_Event & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::srv::GetDeviceInfo_Event response(::axbot_interfaces::srv::GetDeviceInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Event msg_;
};

class Init_GetDeviceInfo_Event_request
{
public:
  explicit Init_GetDeviceInfo_Event_request(::axbot_interfaces::srv::GetDeviceInfo_Event & msg)
  : msg_(msg)
  {}
  Init_GetDeviceInfo_Event_response request(::axbot_interfaces::srv::GetDeviceInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDeviceInfo_Event_response(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Event msg_;
};

class Init_GetDeviceInfo_Event_info
{
public:
  Init_GetDeviceInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDeviceInfo_Event_request info(::axbot_interfaces::srv::GetDeviceInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDeviceInfo_Event_request(msg_);
  }

private:
  ::axbot_interfaces::srv::GetDeviceInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::srv::GetDeviceInfo_Event>()
{
  return axbot_interfaces::srv::builder::Init_GetDeviceInfo_Event_info();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__BUILDER_HPP_
