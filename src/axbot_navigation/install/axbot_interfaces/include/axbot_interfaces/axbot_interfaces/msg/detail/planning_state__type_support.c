// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "axbot_interfaces/msg/detail/planning_state__rosidl_typesupport_introspection_c.h"
#include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "axbot_interfaces/msg/detail/planning_state__functions.h"
#include "axbot_interfaces/msg/detail/planning_state__struct.h"


// Include directives for member types
// Member `move_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `target_poses`
// Member `charger_pose`
#include "geometry_msgs/msg/pose.h"
// Member `target_poses`
// Member `charger_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  axbot_interfaces__msg__PlanningState__init(message_memory);
}

void axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_fini_function(void * message_memory)
{
  axbot_interfaces__msg__PlanningState__fini(message_memory);
}

size_t axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__size_function__PlanningState__target_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_const_function__PlanningState__target_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_function__PlanningState__target_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__fetch_function__PlanningState__target_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_const_function__PlanningState__target_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__assign_function__PlanningState__target_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_function__PlanningState__target_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__resize_function__PlanningState__target_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_member_array[5] = {
  {
    "move_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__PlanningState, move_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__PlanningState, target_poses),  // bytes offset in struct
    NULL,  // default value
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__size_function__PlanningState__target_poses,  // size() function pointer
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_const_function__PlanningState__target_poses,  // get_const(index) function pointer
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__get_function__PlanningState__target_poses,  // get(index) function pointer
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__fetch_function__PlanningState__target_poses,  // fetch(index, &value) function pointer
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__assign_function__PlanningState__target_poses,  // assign(index, value) function pointer
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__resize_function__PlanningState__target_poses  // resize(index) function pointer
  },
  {
    "charger_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__PlanningState, charger_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "going_back_to_charger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__PlanningState, going_back_to_charger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__PlanningState, action_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_members = {
  "axbot_interfaces__msg",  // message namespace
  "PlanningState",  // message name
  5,  // number of fields
  sizeof(axbot_interfaces__msg__PlanningState),
  false,  // has_any_key_member_
  axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_member_array,  // message members
  axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_init_function,  // function to initialize message memory (memory has to be allocated)
  axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_type_support_handle = {
  0,
  &axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__PlanningState__get_type_hash,
  &axbot_interfaces__msg__PlanningState__get_type_description,
  &axbot_interfaces__msg__PlanningState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, msg, PlanningState)() {
  axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_type_support_handle.typesupport_identifier) {
    axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &axbot_interfaces__msg__PlanningState__rosidl_typesupport_introspection_c__PlanningState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
