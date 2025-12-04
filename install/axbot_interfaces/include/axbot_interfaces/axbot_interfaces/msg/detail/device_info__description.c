// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from axbot_interfaces:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#include "axbot_interfaces/msg/detail/device_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__msg__DeviceInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x89, 0x80, 0xb1, 0x89, 0x27, 0x48, 0x92,
      0xde, 0xec, 0x09, 0x66, 0x34, 0xe8, 0x40, 0xd4,
      0xbb, 0xd6, 0x15, 0x5d, 0x13, 0x4c, 0xce, 0xea,
      0x99, 0x01, 0x17, 0xb8, 0x9d, 0x23, 0x1f, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char axbot_interfaces__msg__DeviceInfo__TYPE_NAME[] = "axbot_interfaces/msg/DeviceInfo";

// Define type names, field names, and default values
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__rosversion[] = "rosversion";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__rosdistro[] = "rosdistro";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__axbot_version[] = "axbot_version";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__model[] = "model";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__serial_number[] = "serial_number";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__device_name[] = "device_name";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__nickname[] = "nickname";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__inscribed_radius[] = "inscribed_radius";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__height[] = "height";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__thickness[] = "thickness";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__wheel_distance[] = "wheel_distance";
static char axbot_interfaces__msg__DeviceInfo__FIELD_NAME__width[] = "width";

static rosidl_runtime_c__type_description__Field axbot_interfaces__msg__DeviceInfo__FIELDS[] = {
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__rosversion, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__rosdistro, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__axbot_version, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__device_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__nickname, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__inscribed_radius, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__thickness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__wheel_distance, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__msg__DeviceInfo__FIELD_NAME__width, 5, 5},
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
axbot_interfaces__msg__DeviceInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__msg__DeviceInfo__TYPE_NAME, 31, 31},
      {axbot_interfaces__msg__DeviceInfo__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string rosversion\n"
  "string rosdistro\n"
  "string axbot_version\n"
  "string model\n"
  "string serial_number\n"
  "string device_name\n"
  "string nickname\n"
  "float32 inscribed_radius\n"
  "float32 height\n"
  "float32 thickness\n"
  "float32 wheel_distance\n"
  "float32 width";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__msg__DeviceInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__msg__DeviceInfo__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__msg__DeviceInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__msg__DeviceInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
