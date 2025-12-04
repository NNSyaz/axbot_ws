// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/planning_state.hpp"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__TRAITS_HPP_
#define AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/msg/detail/planning_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_poses'
// Member 'charger_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace axbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningState & msg,
  std::ostream & out)
{
  out << "{";
  // member: move_state
  {
    out << "move_state: ";
    rosidl_generator_traits::value_to_yaml(msg.move_state, out);
    out << ", ";
  }

  // member: target_poses
  {
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []";
    } else {
      out << "target_poses: [";
      size_t pending_items = msg.target_poses.size();
      for (auto item : msg.target_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: charger_pose
  {
    out << "charger_pose: ";
    to_flow_style_yaml(msg.charger_pose, out);
    out << ", ";
  }

  // member: going_back_to_charger
  {
    out << "going_back_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.going_back_to_charger, out);
    out << ", ";
  }

  // member: action_id
  {
    out << "action_id: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_state: ";
    rosidl_generator_traits::value_to_yaml(msg.move_state, out);
    out << "\n";
  }

  // member: target_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_poses.size() == 0) {
      out << "target_poses: []\n";
    } else {
      out << "target_poses:\n";
      for (auto item : msg.target_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: charger_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_pose:\n";
    to_block_style_yaml(msg.charger_pose, out, indentation + 2);
  }

  // member: going_back_to_charger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "going_back_to_charger: ";
    rosidl_generator_traits::value_to_yaml(msg.going_back_to_charger, out);
    out << "\n";
  }

  // member: action_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningState & msg, bool use_flow_style = false)
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
  const axbot_interfaces::msg::PlanningState & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::msg::PlanningState & msg)
{
  return axbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::msg::PlanningState>()
{
  return "axbot_interfaces::msg::PlanningState";
}

template<>
inline const char * name<axbot_interfaces::msg::PlanningState>()
{
  return "axbot_interfaces/msg/PlanningState";
}

template<>
struct has_fixed_size<axbot_interfaces::msg::PlanningState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::msg::PlanningState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::msg::PlanningState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__TRAITS_HPP_
