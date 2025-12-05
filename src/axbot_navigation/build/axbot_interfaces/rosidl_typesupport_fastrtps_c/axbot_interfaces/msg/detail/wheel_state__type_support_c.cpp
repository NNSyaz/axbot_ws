// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/wheel_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "axbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "axbot_interfaces/msg/detail/wheel_state__struct.h"
#include "axbot_interfaces/msg/detail/wheel_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // control_mode
#include "rosidl_runtime_c/string_functions.h"  // control_mode

// forward declare type support functions


using _WheelState__ros_msg_type = axbot_interfaces__msg__WheelState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_axbot_interfaces__msg__WheelState(
  const axbot_interfaces__msg__WheelState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: control_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->control_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: emergency_stop_pressed
  {
    cdr << (ros_message->emergency_stop_pressed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_deserialize_axbot_interfaces__msg__WheelState(
  eprosima::fastcdr::Cdr & cdr,
  axbot_interfaces__msg__WheelState * ros_message)
{
  // Field name: control_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->control_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->control_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->control_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'control_mode'\n");
      return false;
    }
  }

  // Field name: emergency_stop_pressed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop_pressed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_axbot_interfaces__msg__WheelState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelState__ros_msg_type * ros_message = static_cast<const _WheelState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: control_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->control_mode.size + 1);

  // Field name: emergency_stop_pressed
  {
    size_t item_size = sizeof(ros_message->emergency_stop_pressed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_axbot_interfaces__msg__WheelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: control_mode
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: emergency_stop_pressed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__WheelState;
    is_plain =
      (
      offsetof(DataType, emergency_stop_pressed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_key_axbot_interfaces__msg__WheelState(
  const axbot_interfaces__msg__WheelState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: control_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->control_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: emergency_stop_pressed
  {
    cdr << (ros_message->emergency_stop_pressed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_key_axbot_interfaces__msg__WheelState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelState__ros_msg_type * ros_message = static_cast<const _WheelState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: control_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->control_mode.size + 1);

  // Field name: emergency_stop_pressed
  {
    size_t item_size = sizeof(ros_message->emergency_stop_pressed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_key_axbot_interfaces__msg__WheelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: control_mode
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: emergency_stop_pressed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__WheelState;
    is_plain =
      (
      offsetof(DataType, emergency_stop_pressed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WheelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const axbot_interfaces__msg__WheelState * ros_message = static_cast<const axbot_interfaces__msg__WheelState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_axbot_interfaces__msg__WheelState(ros_message, cdr);
}

static bool _WheelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  axbot_interfaces__msg__WheelState * ros_message = static_cast<axbot_interfaces__msg__WheelState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_axbot_interfaces__msg__WheelState(cdr, ros_message);
}

static uint32_t _WheelState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_axbot_interfaces__msg__WheelState(
      untyped_ros_message, 0));
}

static size_t _WheelState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_axbot_interfaces__msg__WheelState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WheelState = {
  "axbot_interfaces::msg",
  "WheelState",
  _WheelState__cdr_serialize,
  _WheelState__cdr_deserialize,
  _WheelState__get_serialized_size,
  _WheelState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WheelState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelState,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__WheelState__get_type_hash,
  &axbot_interfaces__msg__WheelState__get_type_description,
  &axbot_interfaces__msg__WheelState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, axbot_interfaces, msg, WheelState)() {
  return &_WheelState__type_support;
}

#if defined(__cplusplus)
}
#endif
