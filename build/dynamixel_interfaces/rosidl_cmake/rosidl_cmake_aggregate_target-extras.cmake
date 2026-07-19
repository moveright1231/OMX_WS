# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target dynamixel_interfaces::dynamixel_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${dynamixel_interfaces_TARGETS}.
if(dynamixel_interfaces_TARGETS AND NOT TARGET dynamixel_interfaces::dynamixel_interfaces)
  add_library(dynamixel_interfaces::dynamixel_interfaces INTERFACE IMPORTED)
  set_target_properties(dynamixel_interfaces::dynamixel_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${dynamixel_interfaces_TARGETS}")
endif()
