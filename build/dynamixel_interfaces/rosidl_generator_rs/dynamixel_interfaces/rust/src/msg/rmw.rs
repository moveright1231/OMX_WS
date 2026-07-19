#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__msg__DynamixelState() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__msg__DynamixelState__init(msg: *mut DynamixelState) -> bool;
    fn dynamixel_interfaces__msg__DynamixelState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DynamixelState>, size: usize) -> bool;
    fn dynamixel_interfaces__msg__DynamixelState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DynamixelState>);
    fn dynamixel_interfaces__msg__DynamixelState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DynamixelState>, out_seq: *mut rosidl_runtime_rs::Sequence<DynamixelState>) -> bool;
}

// Corresponds to dynamixel_interfaces__msg__DynamixelState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamixelState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub comm_state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_state: rosidl_runtime_rs::Sequence<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dxl_hw_state: rosidl_runtime_rs::Sequence<i32>,

}

impl DynamixelState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_OK: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_CANNOT_FIND_CONTROL_ITEM: i32 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_OPEN_PORT_FAIL: i32 = -2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_INDIRECT_ADDR_FAIL: i32 = -3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_ITEM_WRITE_FAIL: i32 = -4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_ITEM_READ_FAIL: i32 = -5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SYNC_WRITE_FAIL: i32 = -6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SYNC_READ_FAIL: i32 = -7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_SYNC_WRITE_FAIL: i32 = -8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_SYNC_READ_FAIL: i32 = -9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_BULK_WRITE_FAIL: i32 = -10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_BULK_READ_FAIL: i32 = -11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_BULK_WRITE_FAIL: i32 = -12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_BULK_READ_FAIL: i32 = -13;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_READ_ITEM_FAIL: i32 = -14;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_SET_WRITE_ITEM_FAIL: i32 = -15;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_DXL_HARDWARE_ERROR: i32 = -16;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMM_STATE_DXL_REBOOT_FAIL: i32 = -17;

}


impl Default for DynamixelState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__msg__DynamixelState__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__msg__DynamixelState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DynamixelState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__msg__DynamixelState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__msg__DynamixelState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__msg__DynamixelState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DynamixelState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DynamixelState where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/msg/DynamixelState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__msg__DynamixelState() }
  }
}


