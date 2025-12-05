// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "axbot_interfaces/msg/detail/slam_state__functions.h"
#include "axbot_interfaces/msg/detail/slam_state__struct.hpp"
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

void SlamState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) axbot_interfaces::msg::SlamState(_init);
}

void SlamState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<axbot_interfaces::msg::SlamState *>(message_memory);
  typed_message->~SlamState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SlamState_message_member_array[2] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::SlamState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reliable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces::msg::SlamState, reliable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SlamState_message_members = {
  "axbot_interfaces::msg",  // message namespace
  "SlamState",  // message name
  2,  // number of fields
  sizeof(axbot_interfaces::msg::SlamState),
  false,  // has_any_key_member_
  SlamState_message_member_array,  // message members
  SlamState_init_function,  // function to initialize message memory (memory has to be allocated)
  SlamState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SlamState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SlamState_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__SlamState__get_type_hash,
  &axbot_interfaces__msg__SlamState__get_type_description,
  &axbot_interfaces__msg__SlamState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace axbot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<axbot_interfaces::msg::SlamState>()
{
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::SlamState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, axbot_interfaces, msg, SlamState)() {
  return &::axbot_interfaces::msg::rosidl_typesupport_introspection_cpp::SlamState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
