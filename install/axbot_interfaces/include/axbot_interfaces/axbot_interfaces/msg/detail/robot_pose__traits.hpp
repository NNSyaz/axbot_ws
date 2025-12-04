// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/robot_pose.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__TRAITS_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/msg/detail/robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPose & msg, bool use_flow_style = false)
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
  const axbot_interfaces::msg::RobotPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::msg::RobotPose & msg)
{
  return axbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::msg::RobotPose>()
{
  return "axbot_interfaces::msg::RobotPose";
}

template<>
inline const char * name<axbot_interfaces::msg::RobotPose>()
{
  return "axbot_interfaces/msg/RobotPose";
}

template<>
struct has_fixed_size<axbot_interfaces::msg::RobotPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<axbot_interfaces::msg::RobotPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<axbot_interfaces::msg::RobotPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__TRAITS_HPP_
