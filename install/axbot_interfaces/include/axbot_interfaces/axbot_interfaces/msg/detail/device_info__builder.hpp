// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/device_info.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "axbot_interfaces/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace axbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeviceInfo_width
{
public:
  explicit Init_DeviceInfo_width(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  ::axbot_interfaces::msg::DeviceInfo width(::axbot_interfaces::msg::DeviceInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_wheel_distance
{
public:
  explicit Init_DeviceInfo_wheel_distance(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_width wheel_distance(::axbot_interfaces::msg::DeviceInfo::_wheel_distance_type arg)
  {
    msg_.wheel_distance = std::move(arg);
    return Init_DeviceInfo_width(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_thickness
{
public:
  explicit Init_DeviceInfo_thickness(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_wheel_distance thickness(::axbot_interfaces::msg::DeviceInfo::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return Init_DeviceInfo_wheel_distance(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_height
{
public:
  explicit Init_DeviceInfo_height(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_thickness height(::axbot_interfaces::msg::DeviceInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_DeviceInfo_thickness(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_inscribed_radius
{
public:
  explicit Init_DeviceInfo_inscribed_radius(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_height inscribed_radius(::axbot_interfaces::msg::DeviceInfo::_inscribed_radius_type arg)
  {
    msg_.inscribed_radius = std::move(arg);
    return Init_DeviceInfo_height(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_nickname
{
public:
  explicit Init_DeviceInfo_nickname(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_inscribed_radius nickname(::axbot_interfaces::msg::DeviceInfo::_nickname_type arg)
  {
    msg_.nickname = std::move(arg);
    return Init_DeviceInfo_inscribed_radius(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_device_name
{
public:
  explicit Init_DeviceInfo_device_name(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_nickname device_name(::axbot_interfaces::msg::DeviceInfo::_device_name_type arg)
  {
    msg_.device_name = std::move(arg);
    return Init_DeviceInfo_nickname(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_serial_number
{
public:
  explicit Init_DeviceInfo_serial_number(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_device_name serial_number(::axbot_interfaces::msg::DeviceInfo::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_DeviceInfo_device_name(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_model
{
public:
  explicit Init_DeviceInfo_model(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_serial_number model(::axbot_interfaces::msg::DeviceInfo::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_DeviceInfo_serial_number(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_axbot_version
{
public:
  explicit Init_DeviceInfo_axbot_version(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_model axbot_version(::axbot_interfaces::msg::DeviceInfo::_axbot_version_type arg)
  {
    msg_.axbot_version = std::move(arg);
    return Init_DeviceInfo_model(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_rosdistro
{
public:
  explicit Init_DeviceInfo_rosdistro(::axbot_interfaces::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_axbot_version rosdistro(::axbot_interfaces::msg::DeviceInfo::_rosdistro_type arg)
  {
    msg_.rosdistro = std::move(arg);
    return Init_DeviceInfo_axbot_version(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_rosversion
{
public:
  Init_DeviceInfo_rosversion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_rosdistro rosversion(::axbot_interfaces::msg::DeviceInfo::_rosversion_type arg)
  {
    msg_.rosversion = std::move(arg);
    return Init_DeviceInfo_rosdistro(msg_);
  }

private:
  ::axbot_interfaces::msg::DeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::axbot_interfaces::msg::DeviceInfo>()
{
  return axbot_interfaces::msg::builder::Init_DeviceInfo_rosversion();
}

}  // namespace axbot_interfaces

#endif  // AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
