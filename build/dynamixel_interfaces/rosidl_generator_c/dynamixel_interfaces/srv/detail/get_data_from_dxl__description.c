// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_interfaces:srv/GetDataFromDxl.idl
// generated code does not contain a copyright notice

#include "dynamixel_interfaces/srv/detail/get_data_from_dxl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_interfaces
const rosidl_type_hash_t *
dynamixel_interfaces__srv__GetDataFromDxl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x57, 0x3a, 0x5a, 0xa2, 0x06, 0x0f, 0xe4,
      0xbd, 0xb8, 0x52, 0x11, 0x91, 0xb2, 0xf2, 0x5b,
      0xbe, 0x72, 0x84, 0xe4, 0xed, 0xf9, 0xa9, 0x29,
      0x2b, 0xa8, 0x4c, 0x32, 0xba, 0x78, 0x80, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_interfaces
const rosidl_type_hash_t *
dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x82, 0x27, 0x10, 0x6c, 0x71, 0x43, 0x1a,
      0xfc, 0x29, 0x9f, 0x53, 0x99, 0xff, 0x9d, 0x78,
      0x9c, 0xe9, 0xdb, 0x99, 0x0f, 0x8c, 0x03, 0xed,
      0xfe, 0x03, 0xf3, 0xa1, 0x5d, 0x34, 0x4d, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_interfaces
const rosidl_type_hash_t *
dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x50, 0x04, 0x33, 0xba, 0x3b, 0x15, 0x19,
      0xe5, 0xe9, 0x3f, 0xa6, 0xe9, 0x22, 0x1d, 0x8a,
      0x25, 0x8f, 0x6d, 0xa6, 0xfe, 0x05, 0x43, 0x5d,
      0x88, 0xed, 0xa5, 0xec, 0x7c, 0xf2, 0xec, 0x0a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_interfaces
const rosidl_type_hash_t *
dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x38, 0xdc, 0x89, 0x5f, 0x2a, 0xa1, 0xd6,
      0x78, 0xea, 0x6c, 0xff, 0xac, 0x5a, 0xae, 0xdb,
      0x38, 0xc3, 0xc2, 0xe6, 0x1a, 0xcc, 0xe5, 0x99,
      0x1e, 0x86, 0x93, 0x07, 0x3a, 0x29, 0x06, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dynamixel_interfaces__srv__GetDataFromDxl__TYPE_NAME[] = "dynamixel_interfaces/srv/GetDataFromDxl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamixel_interfaces__srv__GetDataFromDxl_Event__TYPE_NAME[] = "dynamixel_interfaces/srv/GetDataFromDxl_Event";
static char dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME[] = "dynamixel_interfaces/srv/GetDataFromDxl_Request";
static char dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME[] = "dynamixel_interfaces/srv/GetDataFromDxl_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__request_message[] = "request_message";
static char dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__response_message[] = "response_message";
static char dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dynamixel_interfaces__srv__GetDataFromDxl__FIELDS[] = {
  {
    {dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_interfaces__srv__GetDataFromDxl_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_interfaces__srv__GetDataFromDxl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_interfaces__srv__GetDataFromDxl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_interfaces__srv__GetDataFromDxl__TYPE_NAME, 39, 39},
      {dynamixel_interfaces__srv__GetDataFromDxl__FIELDS, 3, 3},
    },
    {dynamixel_interfaces__srv__GetDataFromDxl__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__header[] = "header";
static char dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__id[] = "id";
static char dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__item_name[] = "item_name";
static char dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__timeout_sec[] = "timeout_sec";

static rosidl_runtime_c__type_description__Field dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELDS[] = {
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__item_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELD_NAME__timeout_sec, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_interfaces__srv__GetDataFromDxl_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
      {dynamixel_interfaces__srv__GetDataFromDxl_Request__FIELDS, 4, 4},
    },
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELD_NAME__item_data[] = "item_data";
static char dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELDS[] = {
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELD_NAME__item_data, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELD_NAME__result, 6, 6},
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
dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
      {dynamixel_interfaces__srv__GetDataFromDxl_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__info[] = "info";
static char dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__request[] = "request";
static char dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELDS[] = {
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_interfaces__srv__GetDataFromDxl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_interfaces__srv__GetDataFromDxl_Event__TYPE_NAME, 45, 45},
      {dynamixel_interfaces__srv__GetDataFromDxl_Event__FIELDS, 3, 3},
    },
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "########################################\n"
  "# Goals request\n"
  "########################################\n"
  "std_msgs/Header header\n"
  "uint8 id\n"
  "string item_name\n"
  "float64 timeout_sec\n"
  "---\n"
  "########################################\n"
  "# Respones\n"
  "########################################\n"
  "uint32 item_data\n"
  "bool result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_interfaces__srv__GetDataFromDxl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_interfaces__srv__GetDataFromDxl__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 293, 293},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_interfaces__srv__GetDataFromDxl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_interfaces__srv__GetDataFromDxl_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_interfaces__srv__GetDataFromDxl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_interfaces__srv__GetDataFromDxl_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_interfaces__srv__GetDataFromDxl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_interfaces__srv__GetDataFromDxl_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_interfaces__srv__GetDataFromDxl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_interfaces__srv__GetDataFromDxl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_interfaces__srv__GetDataFromDxl_Event__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_interfaces__srv__GetDataFromDxl_Request__get_individual_type_description_source(NULL);
    sources[4] = *dynamixel_interfaces__srv__GetDataFromDxl_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_interfaces__srv__GetDataFromDxl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_interfaces__srv__GetDataFromDxl_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_interfaces__srv__GetDataFromDxl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_interfaces__srv__GetDataFromDxl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_interfaces__srv__GetDataFromDxl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_interfaces__srv__GetDataFromDxl_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_interfaces__srv__GetDataFromDxl_Request__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_interfaces__srv__GetDataFromDxl_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
