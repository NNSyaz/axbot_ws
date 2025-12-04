// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/device_info.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/msg/detail/device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: rosversion
  {
    out << "rosversion: ";
    rosidl_generator_traits::value_to_yaml(msg.rosversion, out);
    out << ", ";
  }

  // member: rosdistro
  {
    out << "rosdistro: ";
    rosidl_generator_traits::value_to_yaml(msg.rosdistro, out);
    out << ", ";
  }

  // member: axbot_version
  {
    out << "axbot_version: ";
    rosidl_generator_traits::value_to_yaml(msg.axbot_version, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: device_name
  {
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << ", ";
  }

  // member: nickname
  {
    out << "nickname: ";
    rosidl_generator_traits::value_to_yaml(msg.nickname, out);
    out << ", ";
  }

  // member: inscribed_radius
  {
    out << "inscribed_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.inscribed_radius, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: thickness
  {
    out << "thickness: ";
    rosidl_generator_traits::value_to_yaml(msg.thickness, out);
    out << ", ";
  }

  // member: wheel_distance
  {
    out << "wheel_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_distance, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rosversion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rosversion: ";
    rosidl_generator_traits::value_to_yaml(msg.rosversion, out);
    out << "\n";
  }

  // member: rosdistro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rosdistro: ";
    rosidl_generator_traits::value_to_yaml(msg.rosdistro, out);
    out << "\n";
  }

  // member: axbot_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axbot_version: ";
    rosidl_generator_traits::value_to_yaml(msg.axbot_version, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: device_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_name: ";
    rosidl_generator_traits::value_to_yaml(msg.device_name, out);
    out << "\n";
  }

  // member: nickname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nickname: ";
    rosidl_generator_traits::value_to_yaml(msg.nickname, out);
    out << "\n";
  }

  // member: inscribed_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inscribed_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.inscribed_radius, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: thickness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thickness: ";
    rosidl_generator_traits::value_to_yaml(msg.thickness, out);
    out << "\n";
  }

  // member: wheel_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_distance, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace axbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use axbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const axbot_interfaces::msg::DeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::msg::DeviceInfo & msg)
{
  return axbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::msg::DeviceInfo>()
{
  return "axbot_interfaces::msg::DeviceInfo";
}

template<>
inline const char * name<axbot_interfaces::msg::DeviceInfo>()
{
  return "axbot_interfaces/msg/DeviceInfo";
}

template<>
struct has_fixed_size<axbot_interfaces::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::msg::DeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::msg::DeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__TRAITS_HPP_
