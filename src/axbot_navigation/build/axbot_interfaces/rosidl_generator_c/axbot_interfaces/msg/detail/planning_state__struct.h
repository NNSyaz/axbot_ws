// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "axbot_interfaces/msg/planning_state.h"


#ifndef AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_H_
#define AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'move_state'
#include "rosidl_runtime_c/string.h"
// Member 'target_poses'
// Member 'charger_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PlanningState in the package axbot_interfaces.
typedef struct axbot_interfaces__msg__PlanningState
{
  /// "idle", "moving", "succeeded", "failed"
  rosidl_runtime_c__String move_state;
  geometry_msgs__msg__Pose__Sequence target_poses;
  geometry_msgs__msg__Pose charger_pose;
  bool going_back_to_charger;
  int32_t action_id;
} axbot_interfaces__msg__PlanningState;

// Struct for a sequence of axbot_interfaces__msg__PlanningState.
typedef struct axbot_interfaces__msg__PlanningState__Sequence
{
  axbot_interfaces__msg__PlanningState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} axbot_interfaces__msg__PlanningState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AXBOT_INTERFACES__MSG__DETAIL__PLANNING_STATE__STRUCT_H_
