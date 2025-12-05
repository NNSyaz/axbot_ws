// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "axbot_interfaces/msg/detail/slam_state__struct.h"
#include "axbot_interfaces/msg/detail/slam_state__type_support.h"
#include "axbot_interfaces/msg/detail/slam_state__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace axbot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _SlamState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SlamState_type_support_ids_t;

static const _SlamState_type_support_ids_t _SlamState_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SlamState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SlamState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SlamState_type_support_symbol_names_t _SlamState_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, axbot_interfaces, msg, SlamState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, msg, SlamState)),
  }
};

typedef struct _SlamState_type_support_data_t
{
  void * data[2];
} _SlamState_type_support_data_t;

static _SlamState_type_support_data_t _SlamState_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SlamState_message_typesupport_map = {
  2,
  "axbot_interfaces",
  &_SlamState_message_typesupport_ids.typesupport_identifier[0],
  &_SlamState_message_typesupport_symbol_names.symbol_name[0],
  &_SlamState_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SlamState_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SlamState_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &axbot_interfaces__msg__SlamState__get_type_hash,
  &axbot_interfaces__msg__SlamState__get_type_description,
  &axbot_interfaces__msg__SlamState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace axbot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, axbot_interfaces, msg, SlamState)() {
  return &::axbot_interfaces::msg::rosidl_typesupport_c::SlamState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
