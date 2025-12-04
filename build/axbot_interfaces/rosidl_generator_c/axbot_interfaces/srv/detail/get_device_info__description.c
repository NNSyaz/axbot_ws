// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from axbot_interfaces:srv/GetDeviceInfo.idl
// generated code does not contain a copyright notice

#include "axbot_interfaces/srv/detail/get_device_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__srv__GetDeviceInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x80, 0xd8, 0x04, 0x54, 0xc5, 0xdf, 0x95,
      0x7b, 0x8d, 0x00, 0xa6, 0x48, 0x83, 0x7e, 0x80,
      0x70, 0xb0, 0x5c, 0x07, 0x7c, 0xf4, 0xc7, 0xb0,
      0xef, 0xdb, 0x33, 0xd3, 0xef, 0xb6, 0x9f, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__srv__GetDeviceInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x74, 0x62, 0x09, 0xc5, 0x0d, 0xcf, 0x82,
      0x1a, 0xad, 0x7d, 0x52, 0xe1, 0xae, 0x70, 0xb1,
      0xef, 0x5d, 0x1b, 0x8a, 0xc0, 0xba, 0xfa, 0xc5,
      0xb4, 0x34, 0x84, 0x84, 0x31, 0x3b, 0x20, 0xfc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__srv__GetDeviceInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xe8, 0xaf, 0x04, 0x63, 0x74, 0x95, 0x87,
      0xe4, 0x76, 0x78, 0xf9, 0x78, 0xd9, 0xa8, 0xac,
      0xc2, 0xcb, 0x85, 0xf4, 0x68, 0x08, 0xb7, 0xaf,
      0x1b, 0xb4, 0x0e, 0xaf, 0x04, 0xf5, 0x8a, 0xf9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_axbot_interfaces
const rosidl_type_hash_t *
axbot_interfaces__srv__GetDeviceInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xc1, 0x90, 0x08, 0x8e, 0x1d, 0xf8, 0xdc,
      0xb4, 0xf2, 0x9a, 0x92, 0xc2, 0xa6, 0x5e, 0x5c,
      0xa4, 0x53, 0x5d, 0x26, 0x8c, 0xe9, 0xdd, 0xab,
      0x8a, 0x29, 0x9b, 0xcd, 0xfd, 0x7d, 0x91, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char axbot_interfaces__srv__GetDeviceInfo__TYPE_NAME[] = "axbot_interfaces/srv/GetDeviceInfo";
static char axbot_interfaces__srv__GetDeviceInfo_Event__TYPE_NAME[] = "axbot_interfaces/srv/GetDeviceInfo_Event";
static char axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME[] = "axbot_interfaces/srv/GetDeviceInfo_Request";
static char axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME[] = "axbot_interfaces/srv/GetDeviceInfo_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__request_message[] = "request_message";
static char axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__response_message[] = "response_message";
static char axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field axbot_interfaces__srv__GetDeviceInfo__FIELDS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {axbot_interfaces__srv__GetDeviceInfo_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription axbot_interfaces__srv__GetDeviceInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
axbot_interfaces__srv__GetDeviceInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__srv__GetDeviceInfo__TYPE_NAME, 34, 34},
      {axbot_interfaces__srv__GetDeviceInfo__FIELDS, 3, 3},
    },
    {axbot_interfaces__srv__GetDeviceInfo__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = axbot_interfaces__srv__GetDeviceInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char axbot_interfaces__srv__GetDeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field axbot_interfaces__srv__GetDeviceInfo_Request__FIELDS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
      {axbot_interfaces__srv__GetDeviceInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__success[] = "success";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__rosversion[] = "rosversion";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__rosdistro[] = "rosdistro";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__axbot_version[] = "axbot_version";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__model[] = "model";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__serial_number[] = "serial_number";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__device_name[] = "device_name";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__nickname[] = "nickname";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__inscribed_radius[] = "inscribed_radius";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__height[] = "height";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__thickness[] = "thickness";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__wheel_distance[] = "wheel_distance";
static char axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__width[] = "width";

static rosidl_runtime_c__type_description__Field axbot_interfaces__srv__GetDeviceInfo_Response__FIELDS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__rosversion, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__rosdistro, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__axbot_version, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__model, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__device_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__nickname, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__inscribed_radius, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__thickness, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__wheel_distance, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__FIELD_NAME__width, 5, 5},
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
axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
      {axbot_interfaces__srv__GetDeviceInfo_Response__FIELDS, 13, 13},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__info[] = "info";
static char axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__request[] = "request";
static char axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field axbot_interfaces__srv__GetDeviceInfo_Event__FIELDS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription axbot_interfaces__srv__GetDeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
axbot_interfaces__srv__GetDeviceInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {axbot_interfaces__srv__GetDeviceInfo_Event__TYPE_NAME, 40, 40},
      {axbot_interfaces__srv__GetDeviceInfo_Event__FIELDS, 3, 3},
    },
    {axbot_interfaces__srv__GetDeviceInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Empty request\n"
  "---\n"
  "bool success\n"
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

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__srv__GetDeviceInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__srv__GetDeviceInfo__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 253, 253},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__srv__GetDeviceInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__srv__GetDeviceInfo_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__srv__GetDeviceInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__srv__GetDeviceInfo_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
axbot_interfaces__srv__GetDeviceInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {axbot_interfaces__srv__GetDeviceInfo_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__srv__GetDeviceInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__srv__GetDeviceInfo__get_individual_type_description_source(NULL),
    sources[1] = *axbot_interfaces__srv__GetDeviceInfo_Event__get_individual_type_description_source(NULL);
    sources[2] = *axbot_interfaces__srv__GetDeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[3] = *axbot_interfaces__srv__GetDeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__srv__GetDeviceInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__srv__GetDeviceInfo_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
axbot_interfaces__srv__GetDeviceInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *axbot_interfaces__srv__GetDeviceInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *axbot_interfaces__srv__GetDeviceInfo_Request__get_individual_type_description_source(NULL);
    sources[2] = *axbot_interfaces__srv__GetDeviceInfo_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
