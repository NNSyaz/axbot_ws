// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "axbot_interfaces/srv/detail/get_device_info__rosidl_typesupport_introspection_c.h"
#include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "axbot_interfaces/srv/detail/get_device_info__functions.h"
#include "axbot_interfaces/srv/detail/get_device_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  axbot_interfaces__srv__GetDeviceInfo_Request__init(message_memory);
}

void axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_fini_function(void * message_memory)
{
  axbot_interfaces__srv__GetDeviceInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_members = {
  "axbot_interfaces__srv",  // message namespace
  "GetDeviceInfo_Request",  // message name
  1,  // number of fields
  sizeof(axbot_interfaces__srv__GetDeviceInfo_Request),
  false,  // has_any_key_member_
  axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_member_array,  // message members
  axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle = {
  0,
  &axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__srv__GetDeviceInfo_Request__get_type_hash,
  &axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description,
  &axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Request)() {
  if (!axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle.typesupport_identifier) {
    axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__functions.h"
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__struct.h"


// Include directives for member types
// Member `rosversion`
// Member `rosdistro`
// Member `axbot_version`
// Member `model`
// Member `serial_number`
// Member `device_name`
// Member `nickname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  axbot_interfaces__srv__GetDeviceInfo_Response__init(message_memory);
}

void axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_fini_function(void * message_memory)
{
  axbot_interfaces__srv__GetDeviceInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_member_array[13] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rosversion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, rosversion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rosdistro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, rosdistro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "axbot_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, axbot_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, serial_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, device_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nickname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, nickname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inscribed_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, inscribed_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thickness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, thickness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, wheel_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Response, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_members = {
  "axbot_interfaces__srv",  // message namespace
  "GetDeviceInfo_Response",  // message name
  13,  // number of fields
  sizeof(axbot_interfaces__srv__GetDeviceInfo_Response),
  false,  // has_any_key_member_
  axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_member_array,  // message members
  axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle = {
  0,
  &axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__srv__GetDeviceInfo_Response__get_type_hash,
  &axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description,
  &axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Response)() {
  if (!axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle.typesupport_identifier) {
    axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__functions.h"
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "axbot_interfaces/srv/get_device_info.h"
// Member `request`
// Member `response`
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  axbot_interfaces__srv__GetDeviceInfo_Event__init(message_memory);
}

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_fini_function(void * message_memory)
{
  axbot_interfaces__srv__GetDeviceInfo_Event__fini(message_memory);
}

size_t axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDeviceInfo_Event__request(
  const void * untyped_member)
{
  const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * member =
    (const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * member =
    (const axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__request(
  void * untyped_member, size_t index)
{
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * member =
    (axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDeviceInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const axbot_interfaces__srv__GetDeviceInfo_Request * item =
    ((const axbot_interfaces__srv__GetDeviceInfo_Request *)
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__request(untyped_member, index));
  axbot_interfaces__srv__GetDeviceInfo_Request * value =
    (axbot_interfaces__srv__GetDeviceInfo_Request *)(untyped_value);
  *value = *item;
}

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDeviceInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  axbot_interfaces__srv__GetDeviceInfo_Request * item =
    ((axbot_interfaces__srv__GetDeviceInfo_Request *)
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__request(untyped_member, index));
  const axbot_interfaces__srv__GetDeviceInfo_Request * value =
    (const axbot_interfaces__srv__GetDeviceInfo_Request *)(untyped_value);
  *item = *value;
}

bool axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDeviceInfo_Event__request(
  void * untyped_member, size_t size)
{
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence * member =
    (axbot_interfaces__srv__GetDeviceInfo_Request__Sequence *)(untyped_member);
  axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__fini(member);
  return axbot_interfaces__srv__GetDeviceInfo_Request__Sequence__init(member, size);
}

size_t axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDeviceInfo_Event__response(
  const void * untyped_member)
{
  const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * member =
    (const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * member =
    (const axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__response(
  void * untyped_member, size_t index)
{
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * member =
    (axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDeviceInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const axbot_interfaces__srv__GetDeviceInfo_Response * item =
    ((const axbot_interfaces__srv__GetDeviceInfo_Response *)
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__response(untyped_member, index));
  axbot_interfaces__srv__GetDeviceInfo_Response * value =
    (axbot_interfaces__srv__GetDeviceInfo_Response *)(untyped_value);
  *value = *item;
}

void axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDeviceInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  axbot_interfaces__srv__GetDeviceInfo_Response * item =
    ((axbot_interfaces__srv__GetDeviceInfo_Response *)
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__response(untyped_member, index));
  const axbot_interfaces__srv__GetDeviceInfo_Response * value =
    (const axbot_interfaces__srv__GetDeviceInfo_Response *)(untyped_value);
  *item = *value;
}

bool axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDeviceInfo_Event__response(
  void * untyped_member, size_t size)
{
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence * member =
    (axbot_interfaces__srv__GetDeviceInfo_Response__Sequence *)(untyped_member);
  axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__fini(member);
  return axbot_interfaces__srv__GetDeviceInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDeviceInfo_Event__request,  // size() function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__request,  // get_const(index) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__request,  // get(index) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDeviceInfo_Event__request,  // fetch(index, &value) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDeviceInfo_Event__request,  // assign(index, value) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDeviceInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(axbot_interfaces__srv__GetDeviceInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__size_function__GetDeviceInfo_Event__response,  // size() function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetDeviceInfo_Event__response,  // get_const(index) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__get_function__GetDeviceInfo_Event__response,  // get(index) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetDeviceInfo_Event__response,  // fetch(index, &value) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetDeviceInfo_Event__response,  // assign(index, value) function pointer
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetDeviceInfo_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_members = {
  "axbot_interfaces__srv",  // message namespace
  "GetDeviceInfo_Event",  // message name
  3,  // number of fields
  sizeof(axbot_interfaces__srv__GetDeviceInfo_Event),
  false,  // has_any_key_member_
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_member_array,  // message members
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_type_support_handle = {
  0,
  &axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &axbot_interfaces__srv__GetDeviceInfo_Event__get_type_hash,
  &axbot_interfaces__srv__GetDeviceInfo_Event__get_type_description,
  &axbot_interfaces__srv__GetDeviceInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Event)() {
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Request)();
  axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Response)();
  if (!axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_type_support_handle.typesupport_identifier) {
    axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "axbot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "axbot_interfaces/srv/detail/get_device_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_members = {
  "axbot_interfaces__srv",  // service namespace
  "GetDeviceInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle,
  NULL,  // response message
  // axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle
  NULL  // event_message
  // axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_type_support_handle = {
  0,
  &axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_members,
  get_service_typesupport_handle_function,
  &axbot_interfaces__srv__GetDeviceInfo_Request__rosidl_typesupport_introspection_c__GetDeviceInfo_Request_message_type_support_handle,
  &axbot_interfaces__srv__GetDeviceInfo_Response__rosidl_typesupport_introspection_c__GetDeviceInfo_Response_message_type_support_handle,
  &axbot_interfaces__srv__GetDeviceInfo_Event__rosidl_typesupport_introspection_c__GetDeviceInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    axbot_interfaces,
    srv,
    GetDeviceInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    axbot_interfaces,
    srv,
    GetDeviceInfo
  ),
  &axbot_interfaces__srv__GetDeviceInfo__get_type_hash,
  &axbot_interfaces__srv__GetDeviceInfo__get_type_description,
  &axbot_interfaces__srv__GetDeviceInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_axbot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo)(void) {
  if (!axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_type_support_handle.typesupport_identifier) {
    axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, axbot_interfaces, srv, GetDeviceInfo_Event)()->data;
  }

  return &axbot_interfaces__srv__detail__get_device_info__rosidl_typesupport_introspection_c__GetDeviceInfo_service_type_support_handle;
}
