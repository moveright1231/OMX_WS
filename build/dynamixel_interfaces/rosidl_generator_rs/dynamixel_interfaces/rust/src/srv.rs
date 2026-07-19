#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to dynamixel_interfaces__srv__GetDataFromDxl_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDataFromDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_sec: f64,

}



impl Default for GetDataFromDxl_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDataFromDxl_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetDataFromDxl_Request {
  type RmwMsg = super::srv::rmw::GetDataFromDxl_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        id: msg.id,
        item_name: msg.item_name.as_str().into(),
        timeout_sec: msg.timeout_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      id: msg.id,
        item_name: msg.item_name.as_str().into(),
      timeout_sec: msg.timeout_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      id: msg.id,
      item_name: msg.item_name.to_string(),
      timeout_sec: msg.timeout_sec,
    }
  }
}


// Corresponds to dynamixel_interfaces__srv__GetDataFromDxl_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDataFromDxl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub item_data: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for GetDataFromDxl_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDataFromDxl_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetDataFromDxl_Response {
  type RmwMsg = super::srv::rmw::GetDataFromDxl_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        item_data: msg.item_data,
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      item_data: msg.item_data,
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      item_data: msg.item_data,
      result: msg.result,
    }
  }
}


// Corresponds to dynamixel_interfaces__srv__SetDataToDxl_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDataToDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_data: u32,

}



impl Default for SetDataToDxl_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDataToDxl_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDataToDxl_Request {
  type RmwMsg = super::srv::rmw::SetDataToDxl_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        id: msg.id,
        item_name: msg.item_name.as_str().into(),
        item_data: msg.item_data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      id: msg.id,
        item_name: msg.item_name.as_str().into(),
      item_data: msg.item_data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      id: msg.id,
      item_name: msg.item_name.to_string(),
      item_data: msg.item_data,
    }
  }
}


// Corresponds to dynamixel_interfaces__srv__SetDataToDxl_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDataToDxl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for SetDataToDxl_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDataToDxl_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDataToDxl_Response {
  type RmwMsg = super::srv::rmw::SetDataToDxl_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}


// Corresponds to dynamixel_interfaces__srv__RebootDxl_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RebootDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

}



impl Default for RebootDxl_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RebootDxl_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RebootDxl_Request {
  type RmwMsg = super::srv::rmw::RebootDxl_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
    }
  }
}


// Corresponds to dynamixel_interfaces__srv__RebootDxl_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RebootDxl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for RebootDxl_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::RebootDxl_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RebootDxl_Response {
  type RmwMsg = super::srv::rmw::RebootDxl_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result: msg.result,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result: msg.result,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result: msg.result,
    }
  }
}






#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl() -> *const std::ffi::c_void;
}

// Corresponds to dynamixel_interfaces__srv__GetDataFromDxl
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDataFromDxl;

impl rosidl_runtime_rs::Service for GetDataFromDxl {
    type Request = GetDataFromDxl_Request;
    type Response = GetDataFromDxl_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl() }
    }
}




#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl() -> *const std::ffi::c_void;
}

// Corresponds to dynamixel_interfaces__srv__SetDataToDxl
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDataToDxl;

impl rosidl_runtime_rs::Service for SetDataToDxl {
    type Request = SetDataToDxl_Request;
    type Response = SetDataToDxl_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl() }
    }
}




#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__RebootDxl() -> *const std::ffi::c_void;
}

// Corresponds to dynamixel_interfaces__srv__RebootDxl
#[allow(missing_docs, non_camel_case_types)]
pub struct RebootDxl;

impl rosidl_runtime_rs::Service for RebootDxl {
    type Request = RebootDxl_Request;
    type Response = RebootDxl_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dynamixel_interfaces__srv__RebootDxl() }
    }
}


