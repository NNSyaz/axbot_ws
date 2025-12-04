// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/wheel_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__TRAITS_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/msg/detail/wheel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: emergency_stop_pressed
  {
    out << "emergency_stop_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_pressed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: emergency_stop_pressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop_pressed: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop_pressed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelState & msg, bool use_flow_style = false)
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
  const axbot_interfaces::msg::WheelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::msg::WheelState & msg)
{
  return axbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::msg::WheelState>()
{
  return "axbot_interfaces::msg::WheelState";
}

template<>
inline const char * name<axbot_interfaces::msg::WheelState>()
{
  return "axbot_interfaces/msg/WheelState";
}

template<>
struct has_fixed_size<axbot_interfaces::msg::WheelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::msg::WheelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::msg::WheelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__TRAITS_HPP_
