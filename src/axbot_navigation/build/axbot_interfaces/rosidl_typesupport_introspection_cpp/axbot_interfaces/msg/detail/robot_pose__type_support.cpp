// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "axbot_interfaces/msg/detail/robot_pose__functions.h"
#include "axbot_interfaces/msg/detail/robot_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace axbot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) axbot_interfaces::msg::RobotPose(_init);
}

void RobotPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<axbot_interfaces::msg::RobotPose *>(message_memory);
  typed_message->~RobotPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotPose_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::RobotPose, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::RobotPose, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::RobotPose, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotPose_message_members = {
  "axbot_interfaces::msg",  // message namespace
  "RobotPose",  // message name
  3,  // number of fields
  sizeof(axbot_interfaces::msg::RobotPose),
  false,  // has_any_key_member_
  RobotPose_message_member_array,  // message members
  RobotPose_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotPose_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__RobotPose__get_type_hash,
  &axbot_interfaces__msg__RobotPose__get_type_description,
  &axbot_interfaces__msg__RobotPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace axbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<axbot_interfaces::msg::RobotPose>()
{
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, axbot_interfaces, msg, RobotPose)() {
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
