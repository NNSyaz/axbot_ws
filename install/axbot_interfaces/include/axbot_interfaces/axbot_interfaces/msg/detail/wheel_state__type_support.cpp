// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "axbot_interfaces/msg/detail/wheel_state__functions.h"
#include "axbot_interfaces/msg/detail/wheel_state__struct.hpp"
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

void WheelState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) axbot_interfaces::msg::WheelState(_init);
}

void WheelState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<axbot_interfaces::msg::WheelState *>(message_memory);
  typed_message->~WheelState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelState_message_member_array[2] = {
  {
    "control_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::WheelState, control_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "emergency_stop_pressed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::WheelState, emergency_stop_pressed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelState_message_members = {
  "axbot_interfaces::msg",  // message namespace
  "WheelState",  // message name
  2,  // number of fields
  sizeof(axbot_interfaces::msg::WheelState),
  false,  // has_any_key_member_
  WheelState_message_member_array,  // message members
  WheelState_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelState_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__WheelState__get_type_hash,
  &axbot_interfaces__msg__WheelState__get_type_description,
  &axbot_interfaces__msg__WheelState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace axbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<axbot_interfaces::msg::WheelState>()
{
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, axbot_interfaces, msg, WheelState)() {
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
