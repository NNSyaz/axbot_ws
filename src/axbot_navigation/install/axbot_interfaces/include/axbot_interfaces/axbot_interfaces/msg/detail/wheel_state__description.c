// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from axbot_interfaces:msg/WheelState.idl
// generated code does not contain a copyright notice

#include "axbot_interfaces/msg/detail/wheel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__msg__WheelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xa1, 0x05, 0x41, 0xe7, 0xcc, 0x93, 0x2c,
      0xf7, 0x75, 0x5a, 0x80, 0x41, 0x6d, 0xfa, 0xe1,
      0x72, 0x84, 0x7e, 0xb9, 0x37, 0x10, 0x78, 0x7e,
      0x30, 0xca, 0x76, 0xb5, 0x41, 0xf9, 0x0e, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char axbot_interfaces__msg__WheelState__TYPE_NAME[] = "axbot_interfaces/msg/WheelState";

// Define type names, field names, and default values
static char axbot_interfaces__msg__WheelState__FIELD_NAME__control_mode[] = "control_mode";
static char axbot_interfaces__msg__WheelState__FIELD_NAME__emergency_stop_pressed[] = "emergency_stop_pressed";

static rosidl_runtime_c__type_description__Field axbot_interfaces__msg__WheelState__FIELDS[] = {
  {
    {axbot_interfaces__msg__WheelState__FIELD_NAME__control_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__WheelState__FIELD_NAME__emergency_stop_pressed, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
axbot_interfaces__msg__WheelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__msg__WheelState__TYPE_NAME, 31, 31},
      {axbot_interfaces__msg__WheelState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string control_mode  # \"auto\", \"remote\", or \"manual\"\n"
  "bool emergency_stop_pressed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__msg__WheelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__msg__WheelState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__msg__WheelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__msg__WheelState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
