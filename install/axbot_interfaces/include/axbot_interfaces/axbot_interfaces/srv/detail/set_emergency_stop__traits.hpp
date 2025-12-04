// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:srv/SetEmergencyStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/set_emergency_stop.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__TRAITS_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/srv/detail/set_emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEmergencyStop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEmergencyStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace axbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use axbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const axbot_interfaces::srv::SetEmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::SetEmergencyStop_Request & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::SetEmergencyStop_Request>()
{
  return "axbot_interfaces::srv::SetEmergencyStop_Request";
}

template<>
inline const char * name<axbot_interfaces::srv::SetEmergencyStop_Request>()
{
  return "axbot_interfaces/srv/SetEmergencyStop_Request";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::SetEmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<axbot_interfaces::srv::SetEmergencyStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace axbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEmergencyStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEmergencyStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace axbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use axbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const axbot_interfaces::srv::SetEmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::SetEmergencyStop_Response & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::SetEmergencyStop_Response>()
{
  return "axbot_interfaces::srv::SetEmergencyStop_Response";
}

template<>
inline const char * name<axbot_interfaces::srv::SetEmergencyStop_Response>()
{
  return "axbot_interfaces/srv/SetEmergencyStop_Response";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::SetEmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::srv::SetEmergencyStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace axbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetEmergencyStop_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetEmergencyStop_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetEmergencyStop_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace axbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use axbot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const axbot_interfaces::srv::SetEmergencyStop_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::SetEmergencyStop_Event & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::SetEmergencyStop_Event>()
{
  return "axbot_interfaces::srv::SetEmergencyStop_Event";
}

template<>
inline const char * name<axbot_interfaces::srv::SetEmergencyStop_Event>()
{
  return "axbot_interfaces/srv/SetEmergencyStop_Event";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::SetEmergencyStop_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Event>
  : std::integral_constant<bool, has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Request>::value && has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<axbot_interfaces::srv::SetEmergencyStop_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<axbot_interfaces::srv::SetEmergencyStop>()
{
  return "axbot_interfaces::srv::SetEmergencyStop";
}

template<>
inline const char * name<axbot_interfaces::srv::SetEmergencyStop>()
{
  return "axbot_interfaces/srv/SetEmergencyStop";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::SetEmergencyStop>
  : std::integral_constant<
    bool,
    has_fixed_size<axbot_interfaces::srv::SetEmergencyStop_Request>::value &&
    has_fixed_size<axbot_interfaces::srv::SetEmergencyStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<axbot_interfaces::srv::SetEmergencyStop>
  : std::integral_constant<
    bool,
    has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Request>::value &&
    has_bounded_size<axbot_interfaces::srv::SetEmergencyStop_Response>::value
  >
{
};

template<>
struct is_service<axbot_interfaces::srv::SetEmergencyStop>
  : std::true_type
{
};

template<>
struct is_service_request<axbot_interfaces::srv::SetEmergencyStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<axbot_interfaces::srv::SetEmergencyStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__SRV__DETAIL__SET_EMERGENCY_STOP__TRAITS_HPP_
