// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from axbot_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#include "axbot_interfaces/msg/detail/robot_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__msg__RobotPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0xa2, 0x00, 0x20, 0xeb, 0x3b, 0xab, 0x07,
      0xf7, 0x45, 0x83, 0x2e, 0x0c, 0x62, 0x87, 0x81,
      0xc8, 0x6e, 0x5a, 0xc4, 0x85, 0xe6, 0xbe, 0x15,
      0xd4, 0xdf, 0xdb, 0x55, 0xcb, 0x4c, 0xcd, 0xd4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char axbot_interfaces__msg__RobotPose__TYPE_NAME[] = "axbot_interfaces/msg/RobotPose";

// Define type names, field names, and default values
static char axbot_interfaces__msg__RobotPose__FIELD_NAME__x[] = "x";
static char axbot_interfaces__msg__RobotPose__FIELD_NAME__y[] = "y";
static char axbot_interfaces__msg__RobotPose__FIELD_NAME__orientation[] = "orientation";

static rosidl_runtime_c__type_description__Field axbot_interfaces__msg__RobotPose__FIELDS[] = {
  {
    {axbot_interfaces__msg__RobotPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__RobotPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__RobotPose__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
axbot_interfaces__msg__RobotPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__msg__RobotPose__TYPE_NAME, 30, 30},
      {axbot_interfaces__msg__RobotPose__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x         \n"
  "float32 y          \n"
  "float32 orientation  ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__msg__RobotPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__msg__RobotPose__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 61, 61},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__msg__RobotPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__msg__RobotPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
