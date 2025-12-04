// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from axbot_interfaces:msg/PlanningState.idl
// generated code does not contain a copyright notice
#include "axbot_interfaces/msg/detail/planning_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "axbot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "axbot_interfaces/msg/detail/planning_state__struct.h"
#include "axbot_interfaces/msg/detail/planning_state__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // charger_pose, target_poses
#include "rosidl_runtime_c/string.h"  // move_state
#include "rosidl_runtime_c/string_functions.h"  // move_state

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_axbot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _PlanningState__ros_msg_type = axbot_interfaces__msg__PlanningState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_axbot_interfaces__msg__PlanningState(
  const axbot_interfaces__msg__PlanningState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: move_state
  {
    const rosidl_runtime_c__String * str = &ros_message->move_state;
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

  // Field name: target_poses
  {
    size_t size = ros_message->target_poses.size;
    auto array_ptr = ros_message->target_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: charger_pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->charger_pose, cdr);
  }

  // Field name: going_back_to_charger
  {
    cdr << (ros_message->going_back_to_charger ? true : false);
  }

  // Field name: action_id
  {
    cdr << ros_message->action_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_deserialize_axbot_interfaces__msg__PlanningState(
  eprosima::fastcdr::Cdr & cdr,
  axbot_interfaces__msg__PlanningState * ros_message)
{
  // Field name: move_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->move_state.data) {
      rosidl_runtime_c__String__init(&ros_message->move_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->move_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'move_state'\n");
      return false;
    }
  }

  // Field name: target_poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->target_poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->target_poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->target_poses, size)) {
      fprintf(stderr, "failed to create array for field 'target_poses'");
      return false;
    }
    auto array_ptr = ros_message->target_poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose(cdr, &array_ptr[i]);
    }
  }

  // Field name: charger_pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->charger_pose);
  }

  // Field name: going_back_to_charger
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->going_back_to_charger = tmp ? true : false;
  }

  // Field name: action_id
  {
    cdr >> ros_message->action_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_axbot_interfaces__msg__PlanningState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningState__ros_msg_type * ros_message = static_cast<const _PlanningState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: move_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move_state.size + 1);

  // Field name: target_poses
  {
    size_t array_size = ros_message->target_poses.size;
    auto array_ptr = ros_message->target_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: charger_pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->charger_pose), current_alignment);

  // Field name: going_back_to_charger
  {
    size_t item_size = sizeof(ros_message->going_back_to_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: action_id
  {
    size_t item_size = sizeof(ros_message->action_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_axbot_interfaces__msg__PlanningState(
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

  // Field name: move_state
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

  // Field name: target_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: charger_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: going_back_to_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: action_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__PlanningState;
    is_plain =
      (
      offsetof(DataType, action_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
bool cdr_serialize_key_axbot_interfaces__msg__PlanningState(
  const axbot_interfaces__msg__PlanningState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: move_state
  {
    const rosidl_runtime_c__String * str = &ros_message->move_state;
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

  // Field name: target_poses
  {
    size_t size = ros_message->target_poses.size;
    auto array_ptr = ros_message->target_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: charger_pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->charger_pose, cdr);
  }

  // Field name: going_back_to_charger
  {
    cdr << (ros_message->going_back_to_charger ? true : false);
  }

  // Field name: action_id
  {
    cdr << ros_message->action_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t get_serialized_size_key_axbot_interfaces__msg__PlanningState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningState__ros_msg_type * ros_message = static_cast<const _PlanningState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: move_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move_state.size + 1);

  // Field name: target_poses
  {
    size_t array_size = ros_message->target_poses.size;
    auto array_ptr = ros_message->target_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: charger_pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->charger_pose), current_alignment);

  // Field name: going_back_to_charger
  {
    size_t item_size = sizeof(ros_message->going_back_to_charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: action_id
  {
    size_t item_size = sizeof(ros_message->action_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_axbot_interfaces
size_t max_serialized_size_key_axbot_interfaces__msg__PlanningState(
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
  // Field name: move_state
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

  // Field name: target_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: charger_pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: going_back_to_charger
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: action_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = axbot_interfaces__msg__PlanningState;
    is_plain =
      (
      offsetof(DataType, action_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PlanningState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const axbot_interfaces__msg__PlanningState * ros_message = static_cast<const axbot_interfaces__msg__PlanningState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_axbot_interfaces__msg__PlanningState(ros_message, cdr);
}

static bool _PlanningState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  axbot_interfaces__msg__PlanningState * ros_message = static_cast<axbot_interfaces__msg__PlanningState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_axbot_interfaces__msg__PlanningState(cdr, ros_message);
}

static uint32_t _PlanningState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_axbot_interfaces__msg__PlanningState(
      untyped_ros_message, 0));
}

static size_t _PlanningState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_axbot_interfaces__msg__PlanningState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningState = {
  "axbot_interfaces::msg",
  "PlanningState",
  _PlanningState__cdr_serialize,
  _PlanningState__cdr_deserialize,
  _PlanningState__get_serialized_size,
  _PlanningState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PlanningState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningState,
  get_message_typesupport_handle_function,
  &axbot_interfaces__msg__PlanningState__get_type_hash,
  &axbot_interfaces__msg__PlanningState__get_type_description,
  &axbot_interfaces__msg__PlanningState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, axbot_interfaces, msg, PlanningState)() {
  return &_PlanningState__type_support;
}

#if defined(__cplusplus)
}
#endif
