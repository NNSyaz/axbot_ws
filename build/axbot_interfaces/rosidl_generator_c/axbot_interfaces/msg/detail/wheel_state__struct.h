// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/wheel_state.h"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_H_
#define AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'control_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WheelState in the package axbot_interfaces.
typedef struct axbot_interfaces__msg__WheelState
{
  /// "auto", "remote", or "manual"
  rosidl_runtime_c__String control_mode;
  bool emergency_stop_pressed;
} axbot_interfaces__msg__WheelState;

// Struct for a sequence of axbot_interfaces__msg__WheelState.
typedef struct axbot_interfaces__msg__WheelState__Sequence
{
  axbot_interfaces__msg__WheelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__msg__WheelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__MSG__DETAIL__WHEEL_STATE__STRUCT_H_
