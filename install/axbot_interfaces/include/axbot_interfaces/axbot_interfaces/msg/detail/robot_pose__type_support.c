// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "axbot_interfaces/msg/detail/robot_pose__rosidl_typesupport_introspection_c.h"
#include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "axbot_interfaces/msg/detail/robot_pose__functions.h"
#include "axbot_interfaces/msg/detail/robot_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  axbot_interfaces__msg__RobotPose__init(message_memory);
}

void axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_fini_function(void * message_memory)
{
  axbot_interfaces__msg__RobotPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__RobotPose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__RobotPose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__msg__RobotPose, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_members = {
  "axbot_interfaces__msg",  // message namespace
  "RobotPose",  // message name
  3,  // number of fields
  sizeof(axbot_interfaces__msg__RobotPose),
  false,  // has_any_key_member_
  axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_member_array,  // message members
  axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_init_function,  // function to initialize message memory (memory has to be allocated)
  axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_type_support_handle = {
  0,
  &axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__RobotPose__get_type_hash,
  &axbot_interfaces__msg__RobotPose__get_type_description,
  &axbot_interfaces__msg__RobotPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, msg, RobotPose)() {
  if (!axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_type_support_handle.typesupport_identifier) {
    axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &axbot_interfaces__msg__RobotPose__rosidl_typesupport_introspection_c__RobotPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
