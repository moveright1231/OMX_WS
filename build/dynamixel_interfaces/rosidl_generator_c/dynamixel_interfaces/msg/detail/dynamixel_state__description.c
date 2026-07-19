// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_interfaces:msg/DynamixelState.idl
// generated code does not contain a copyright notice

#include "dynamixel_interfaces/msg/detail/dynamixel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_interfaces
const rosidl_type_hash_t *
dynamixel_interfaces__msg__DynamixelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x5a, 0x4d, 0x22, 0x8e, 0x29, 0xd8, 0x36,
      0x6d, 0x6b, 0xb3, 0xa3, 0x5d, 0x0f, 0xdb, 0x65,
      0x8e, 0xa3, 0x57, 0x04, 0xac, 0x5f, 0xa6, 0xcb,
      0xec, 0x26, 0x11, 0x40, 0x69, 0x5c, 0x44, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char dynamixel_interfaces__msg__DynamixelState__TYPE_NAME[] = "dynamixel_interfaces/msg/DynamixelState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__header[] = "header";
static char dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__comm_state[] = "comm_state";
static char dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__id[] = "id";
static char dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__torque_state[] = "torque_state";
static char dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__dxl_hw_state[] = "dxl_hw_state";

static rosidl_runtime_c__type_description__Field dynamixel_interfaces__msg__DynamixelState__FIELDS[] = {
  {
    {dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__comm_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__torque_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_interfaces__msg__DynamixelState__FIELD_NAME__dxl_hw_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_interfaces__msg__DynamixelState__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
dynamixel_interfaces__msg__DynamixelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_interfaces__msg__DynamixelState__TYPE_NAME, 39, 39},
      {dynamixel_interfaces__msg__DynamixelState__FIELDS, 5, 5},
    },
    {dynamixel_interfaces__msg__DynamixelState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "int32 comm_state\n"
  "int32[] id\n"
  "bool[] torque_state\n"
  "int32[] dxl_hw_state\n"
  "\n"
  "int32 COMM_STATE_OK = 0\n"
  "int32 COMM_STATE_CANNOT_FIND_CONTROL_ITEM = -1\n"
  "int32 COMM_STATE_OPEN_PORT_FAIL = -2\n"
  "int32 COMM_STATE_INDIRECT_ADDR_FAIL = -3\n"
  "int32 COMM_STATE_ITEM_WRITE_FAIL = -4\n"
  "int32 COMM_STATE_ITEM_READ_FAIL = -5\n"
  "int32 COMM_STATE_SYNC_WRITE_FAIL = -6\n"
  "int32 COMM_STATE_SYNC_READ_FAIL = -7\n"
  "int32 COMM_STATE_SET_SYNC_WRITE_FAIL = -8\n"
  "int32 COMM_STATE_SET_SYNC_READ_FAIL = -9\n"
  "int32 COMM_STATE_BULK_WRITE_FAIL = -10\n"
  "int32 COMM_STATE_BULK_READ_FAIL = -11\n"
  "int32 COMM_STATE_SET_BULK_WRITE_FAIL = -12\n"
  "int32 COMM_STATE_SET_BULK_READ_FAIL = -13\n"
  "int32 COMM_STATE_SET_READ_ITEM_FAIL = -14\n"
  "int32 COMM_STATE_SET_WRITE_ITEM_FAIL = -15\n"
  "int32 COMM_STATE_DXL_HARDWARE_ERROR = -16\n"
  "int32 COMM_STATE_DXL_REBOOT_FAIL = -17\n"
  "\n"
  "# dxl_hw_state = 0: no error\n"
  "# dxl_hw_state = 1: input voltage error\n"
  "# dxl_hw_state = 4: overheating\n"
  "# dxl_hw_state = 8: motor encoder\n"
  "# dxl_hw_state = 16: electrical shork\n"
  "# dxl_hw_state = 32: Overload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_interfaces__msg__DynamixelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_interfaces__msg__DynamixelState__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1008, 1008},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_interfaces__msg__DynamixelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_interfaces__msg__DynamixelState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
