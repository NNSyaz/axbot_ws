// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/device_info.h"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
#define AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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

/// Struct defined in msg/DeviceInfo in the package axbot_interfaces.
typedef struct axbot_interfaces__msg__DeviceInfo
{
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
} axbot_interfaces__msg__DeviceInfo;

// Struct for a sequence of axbot_interfaces__msg__DeviceInfo.
typedef struct axbot_interfaces__msg__DeviceInfo__Sequence
{
  axbot_interfaces__msg__DeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__msg__DeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
