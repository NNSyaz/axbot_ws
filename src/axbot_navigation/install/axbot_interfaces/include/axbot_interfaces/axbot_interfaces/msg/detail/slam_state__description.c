// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from axbot_interfaces:msg/SlamState.idl
// generated code does not contain a copyright notice

#include "axbot_interfaces/msg/detail/slam_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__msg__SlamState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x81, 0xa0, 0xa2, 0xcf, 0xc6, 0xf4, 0xcf,
      0x05, 0x5e, 0xec, 0x73, 0x7f, 0x4a, 0xab, 0x37,
      0xf9, 0x92, 0xb5, 0x44, 0xc1, 0x1c, 0x21, 0x1f,
      0x7f, 0x59, 0x80, 0x93, 0xfd, 0x07, 0x69, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char axbot_interfaces__msg__SlamState__TYPE_NAME[] = "axbot_interfaces/msg/SlamState";

// Define type names, field names, and default values
static char axbot_interfaces__msg__SlamState__FIELD_NAME__state[] = "state";
static char axbot_interfaces__msg__SlamState__FIELD_NAME__reliable[] = "reliable";

static rosidl_runtime_c__type_description__Field axbot_interfaces__msg__SlamState__FIELDS[] = {
  {
    {axbot_interfaces__msg__SlamState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__SlamState__FIELD_NAME__reliable, 8, 8},
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
axbot_interfaces__msg__SlamState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__msg__SlamState__TYPE_NAME, 30, 30},
      {axbot_interfaces__msg__SlamState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string state      # \"positioning\", \"mapping\", etc.\n"
  "bool reliable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__msg__SlamState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__msg__SlamState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__msg__SlamState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__msg__SlamState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
