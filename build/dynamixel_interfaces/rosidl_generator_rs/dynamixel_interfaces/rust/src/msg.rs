#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to dynamixel_interfaces__msg__DynamixelState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DynamixelState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub comm_state: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub torque_state: Vec<bool>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dxl_hw_state: Vec<i32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DynamixelState::default())
  }
}

impl rosidl_runtime_rs::Message for DynamixelState {
  type RmwMsg = super::msg::rmw::DynamixelState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        comm_state: msg.comm_state,
        id: msg.id.into(),
        torque_state: msg.torque_state.into(),
        dxl_hw_state: msg.dxl_hw_state.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      comm_state: msg.comm_state,
        id: msg.id.as_slice().into(),
        torque_state: msg.torque_state.as_slice().into(),
        dxl_hw_state: msg.dxl_hw_state.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      comm_state: msg.comm_state,
      id: msg.id
          .into_iter()
          .collect(),
      torque_state: msg.torque_state
          .into_iter()
          .collect(),
      dxl_hw_state: msg.dxl_hw_state
          .into_iter()
          .collect(),
    }
  }
}


