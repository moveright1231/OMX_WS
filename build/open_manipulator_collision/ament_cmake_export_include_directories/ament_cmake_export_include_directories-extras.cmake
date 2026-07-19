# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${open_manipulator_collision_DIR}/../../../include;/opt/ros/jazzy/include/urdf;/opt/ros/jazzy/include/pluginlib;/opt/ros/jazzy/include/urdf_parser_plugin;/opt/ros/jazzy/include/urdfdom;/opt/ros/jazzy/include/urdfdom_headers;/usr/include/eigen3;/opt/ros/jazzy/include/rcutils;/opt/ros/jazzy/include/builtin_interfaces;/opt/ros/jazzy/include/geometry_msgs;/opt/ros/jazzy/include/std_msgs;/opt/ros/jazzy/include/service_msgs;/opt/ros/jazzy/include/rosidl_runtime_c;/opt/ros/jazzy/include/rosidl_typesupport_interface;/opt/ros/jazzy/include/rosidl_runtime_cpp;/opt/ros/jazzy/include/rosidl_typesupport_fastrtps_c;/opt/ros/jazzy/include/rosidl_typesupport_fastrtps_cpp;/opt/ros/jazzy/include/rmw;/opt/ros/jazzy/include/rosidl_typesupport_c;/opt/ros/jazzy/include/rosidl_typesupport_cpp;/opt/ros/jazzy/include/rcpputils;/opt/ros/jazzy/include/rosidl_typesupport_introspection_c;/opt/ros/jazzy/include/rosidl_typesupport_introspection_cpp;/opt/ros/jazzy/include/sensor_msgs;/opt/ros/jazzy/include/visualization_msgs")

# append include directories to open_manipulator_collision_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'open_manipulator_collision' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND open_manipulator_collision_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
