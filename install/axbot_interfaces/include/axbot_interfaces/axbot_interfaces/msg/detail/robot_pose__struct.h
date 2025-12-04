// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/robot_pose.h"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
#define AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotPose in the package axbot_interfaces.
typedef struct axbot_interfaces__msg__RobotPose
{
  float x;
  float y;
  float orientation;
} axbot_interfaces__msg__RobotPose;

// Struct for a sequence of axbot_interfaces__msg__RobotPose.
typedef struct axbot_interfaces__msg__RobotPose__Sequence
{
  axbot_interfaces__msg__RobotPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__msg__RobotPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__MSG__DETAIL__ROBOT_POSE__STRUCT_H_
