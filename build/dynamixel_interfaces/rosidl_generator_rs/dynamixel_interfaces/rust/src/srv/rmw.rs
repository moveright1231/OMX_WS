#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl_Request() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__GetDataFromDxl_Request__init(msg: *mut GetDataFromDxl_Request) -> bool;
    fn dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Request>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Request>);
    fn dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDataFromDxl_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Request>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__GetDataFromDxl_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDataFromDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timeout_sec: f64,

}



impl Default for GetDataFromDxl_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__GetDataFromDxl_Request__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__GetDataFromDxl_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDataFromDxl_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDataFromDxl_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDataFromDxl_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/GetDataFromDxl_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl_Request() }
  }
}


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl_Response() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__GetDataFromDxl_Response__init(msg: *mut GetDataFromDxl_Response) -> bool;
    fn dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Response>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Response>);
    fn dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDataFromDxl_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDataFromDxl_Response>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__GetDataFromDxl_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__GetDataFromDxl_Response__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__GetDataFromDxl_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDataFromDxl_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__GetDataFromDxl_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDataFromDxl_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDataFromDxl_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/GetDataFromDxl_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__GetDataFromDxl_Response() }
  }
}


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl_Request() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__SetDataToDxl_Request__init(msg: *mut SetDataToDxl_Request) -> bool;
    fn dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Request>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Request>);
    fn dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDataToDxl_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Request>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__SetDataToDxl_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDataToDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub item_data: u32,

}



impl Default for SetDataToDxl_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__SetDataToDxl_Request__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__SetDataToDxl_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDataToDxl_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDataToDxl_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDataToDxl_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/SetDataToDxl_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl_Request() }
  }
}


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl_Response() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__SetDataToDxl_Response__init(msg: *mut SetDataToDxl_Response) -> bool;
    fn dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Response>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Response>);
    fn dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDataToDxl_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDataToDxl_Response>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__SetDataToDxl_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDataToDxl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for SetDataToDxl_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__SetDataToDxl_Response__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__SetDataToDxl_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDataToDxl_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__SetDataToDxl_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDataToDxl_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDataToDxl_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/SetDataToDxl_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__SetDataToDxl_Response() }
  }
}


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__RebootDxl_Request() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__RebootDxl_Request__init(msg: *mut RebootDxl_Request) -> bool;
    fn dynamixel_interfaces__srv__RebootDxl_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Request>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__RebootDxl_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Request>);
    fn dynamixel_interfaces__srv__RebootDxl_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RebootDxl_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Request>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__RebootDxl_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RebootDxl_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

}



impl Default for RebootDxl_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__RebootDxl_Request__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__RebootDxl_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RebootDxl_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RebootDxl_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RebootDxl_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/RebootDxl_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__RebootDxl_Request() }
  }
}


#[link(name = "dynamixel_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__RebootDxl_Response() -> *const std::ffi::c_void;
}

#[link(name = "dynamixel_interfaces__rosidl_generator_c")]
extern "C" {
    fn dynamixel_interfaces__srv__RebootDxl_Response__init(msg: *mut RebootDxl_Response) -> bool;
    fn dynamixel_interfaces__srv__RebootDxl_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Response>, size: usize) -> bool;
    fn dynamixel_interfaces__srv__RebootDxl_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Response>);
    fn dynamixel_interfaces__srv__RebootDxl_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RebootDxl_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RebootDxl_Response>) -> bool;
}

// Corresponds to dynamixel_interfaces__srv__RebootDxl_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RebootDxl_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub result: bool,

}



impl Default for RebootDxl_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dynamixel_interfaces__srv__RebootDxl_Response__init(&mut msg as *mut _) {
        panic!("Call to dynamixel_interfaces__srv__RebootDxl_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RebootDxl_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dynamixel_interfaces__srv__RebootDxl_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RebootDxl_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RebootDxl_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dynamixel_interfaces/srv/RebootDxl_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dynamixel_interfaces__srv__RebootDxl_Response() }
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


