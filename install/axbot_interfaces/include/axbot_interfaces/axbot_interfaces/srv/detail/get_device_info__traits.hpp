// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/get_device_info.hpp"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__TRAITS_HPP_
#define AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "axbot_interfaces/srv/detail/get_device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace axbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDeviceInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDeviceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDeviceInfo_Request & msg, bool use_flow_style = false)
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
  const axbot_interfaces::srv::GetDeviceInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::GetDeviceInfo_Request & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::GetDeviceInfo_Request>()
{
  return "axbot_interfaces::srv::GetDeviceInfo_Request";
}

template<>
inline const char * name<axbot_interfaces::srv::GetDeviceInfo_Request>()
{
  return "axbot_interfaces/srv/GetDeviceInfo_Request";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::GetDeviceInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<axbot_interfaces::srv::GetDeviceInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace axbot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDeviceInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

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
  const GetDeviceInfo_Response & msg,
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

inline std::string to_yaml(const GetDeviceInfo_Response & msg, bool use_flow_style = false)
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
  const axbot_interfaces::srv::GetDeviceInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::GetDeviceInfo_Response & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::GetDeviceInfo_Response>()
{
  return "axbot_interfaces::srv::GetDeviceInfo_Response";
}

template<>
inline const char * name<axbot_interfaces::srv::GetDeviceInfo_Response>()
{
  return "axbot_interfaces/srv/GetDeviceInfo_Response";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::GetDeviceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<axbot_interfaces::srv::GetDeviceInfo_Response>
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
  const GetDeviceInfo_Event & msg,
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
  const GetDeviceInfo_Event & msg,
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

inline std::string to_yaml(const GetDeviceInfo_Event & msg, bool use_flow_style = false)
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
  const axbot_interfaces::srv::GetDeviceInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  axbot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use axbot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const axbot_interfaces::srv::GetDeviceInfo_Event & msg)
{
  return axbot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<axbot_interfaces::srv::GetDeviceInfo_Event>()
{
  return "axbot_interfaces::srv::GetDeviceInfo_Event";
}

template<>
inline const char * name<axbot_interfaces::srv::GetDeviceInfo_Event>()
{
  return "axbot_interfaces/srv/GetDeviceInfo_Event";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::GetDeviceInfo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Event>
  : std::integral_constant<bool, has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Request>::value && has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<axbot_interfaces::srv::GetDeviceInfo_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<axbot_interfaces::srv::GetDeviceInfo>()
{
  return "axbot_interfaces::srv::GetDeviceInfo";
}

template<>
inline const char * name<axbot_interfaces::srv::GetDeviceInfo>()
{
  return "axbot_interfaces/srv/GetDeviceInfo";
}

template<>
struct has_fixed_size<axbot_interfaces::srv::GetDeviceInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<axbot_interfaces::srv::GetDeviceInfo_Request>::value &&
    has_fixed_size<axbot_interfaces::srv::GetDeviceInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<axbot_interfaces::srv::GetDeviceInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Request>::value &&
    has_bounded_size<axbot_interfaces::srv::GetDeviceInfo_Response>::value
  >
{
};

template<>
struct is_service<axbot_interfaces::srv::GetDeviceInfo>
  : std::true_type
{
};

template<>
struct is_service_request<axbot_interfaces::srv::GetDeviceInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<axbot_interfaces::srv::GetDeviceInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__TRAITS_HPP_
