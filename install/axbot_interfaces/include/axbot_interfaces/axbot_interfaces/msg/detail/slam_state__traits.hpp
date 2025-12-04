// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/slam_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__TRAITS_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/msg/detail/slam_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SlamState & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: reliable
  {
    out << "reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.reliable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlamState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: reliable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reliable: ";
    rosidl_generator_traits::value_to_yaml(msg.reliable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlamState & msg, bool use_flow_style = false)
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
  const axbot_interfaces::msg::SlamState & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::msg::SlamState & msg)
{
  return axbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::msg::SlamState>()
{
  return "axbot_interfaces::msg::SlamState";
}

template<>
inline const char * name<axbot_interfaces::msg::SlamState>()
{
  return "axbot_interfaces/msg/SlamState";
}

template<>
struct has_fixed_size<axbot_interfaces::msg::SlamState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::msg::SlamState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::msg::SlamState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__MSG__DETAIL__SLAM_STATE__TRAITS_HPP_
