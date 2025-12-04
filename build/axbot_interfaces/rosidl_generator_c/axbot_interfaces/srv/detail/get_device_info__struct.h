// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/srv/get_device_info.h"


#ifndef AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_H_
#define AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDeviceInfo in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} axbot_interfaces__srv__GetDeviceInfo_Request;

// Struct for a sequence of axbot_interfaces__srv__GetDeviceInfo_Request.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Request__Sequence
{
  axbot_interfaces__srv__GetDeviceInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__GetDeviceInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'rosversion'
// Member 'rosdistro'
// Member 'axbot_version'
// Member 'model'
// Member 'serial_number'
// Member 'device_name'
// Member 'nickname'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDeviceInfo in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Response
{
  bool success;
  rosidl_runtime_c__String rosversion;
  rosidl_runtime_c__String rosdistro;
  rosidl_runtime_c__String axbot_version;
  rosidl_runtime_c__String model;
  rosidl_runtime_c__String serial_number;
  rosidl_runtime_c__String device_name;
  rosidl_runtime_c__String nickname;
  float inscribed_radius;
  float height;
  float thickness;
  float wheel_distance;
  float width;
} axbot_interfaces__srv__GetDeviceInfo_Response;

// Struct for a sequence of axbot_interfaces__srv__GetDeviceInfo_Response.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Response__Sequence
{
  axbot_interfaces__srv__GetDeviceInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__GetDeviceInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  axbot_interfaces__srv__GetDeviceInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  axbot_interfaces__srv__GetDeviceInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDeviceInfo in the package axbot_interfaces.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence request;
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence response;
} axbot_interfaces__srv__GetDeviceInfo_Event;

// Struct for a sequence of axbot_interfaces__srv__GetDeviceInfo_Event.
typedef struct axbot_interfaces__srv__GetDeviceInfo_Event__Sequence
{
  axbot_interfaces__srv__GetDeviceInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__srv__GetDeviceInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__SRV__DETAIL__GET_DEVICE_INFO__STRUCT_H_
