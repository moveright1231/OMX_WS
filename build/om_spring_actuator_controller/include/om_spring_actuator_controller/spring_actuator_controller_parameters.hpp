// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

// silence deprecation warnings for parameter_traits, needed for backwards compatibility
#define SILENCE_DEPRECATION_WARNINGS
#include <parameter_traits/parameter_traits.hpp>
#undef SILENCE_DEPRECATION_WARNINGS

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace spring_actuator_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::vector<std::string> joints = {};
        std::vector<std::string> command_interfaces = {};
        std::vector<std::string> state_interfaces = {};
        std::vector<std::string> command_joints = {};
        std::vector<double> static_friction_scalars = {0.1};
        std::vector<double> static_friction_velocity_thresholds = {0.3};
        std::vector<double> torque_scaling_factors = {1.0};
        std::vector<double> trigger_spring_stiffness = {0.06};
        std::vector<double> trigger_neutral_position = {0.0};
        std::vector<double> trigger_damping = {0.004};
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    template <typename NodeT>
    ParamListener(NodeT node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("spring_actuator_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;


      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interfaces")) {
            updated_params.command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_interfaces")) {
            updated_params.state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "static_friction_scalars")) {
            updated_params.static_friction_scalars = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "static_friction_velocity_thresholds")) {
            updated_params.static_friction_velocity_thresholds = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "torque_scaling_factors")) {
            updated_params.torque_scaling_factors = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "trigger_spring_stiffness")) {
            updated_params.trigger_spring_stiffness = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "trigger_neutral_position")) {
            updated_params.trigger_neutral_position = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "trigger_damping")) {
            updated_params.trigger_damping = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names to control and listen to (e.g., [joint1, joint2, ...])";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.joints);
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Command interfaces provided by the hardware interface for all joints";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "State interfaces provided by the hardware for all joints";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.state_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names to control if the command and state interfaces differ";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.command_joints);
          parameters_interface_->declare_parameter(prefix_ + "command_joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "static_friction_scalars")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Scaling factors for static friction compensation (dithering)";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.static_friction_scalars);
          parameters_interface_->declare_parameter(prefix_ + "static_friction_scalars", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "static_friction_velocity_thresholds")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Velocity thresholds for static friction compensation";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.static_friction_velocity_thresholds);
          parameters_interface_->declare_parameter(prefix_ + "static_friction_velocity_thresholds", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "torque_scaling_factors")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Scaling factors for calculated torques";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.torque_scaling_factors);
          parameters_interface_->declare_parameter(prefix_ + "torque_scaling_factors", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "trigger_spring_stiffness")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Spring stiffness constant (K) for the trigger joint";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.trigger_spring_stiffness);
          parameters_interface_->declare_parameter(prefix_ + "trigger_spring_stiffness", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "trigger_neutral_position")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Rest/neutral angle (in radians) for the trigger joint";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.trigger_neutral_position);
          parameters_interface_->declare_parameter(prefix_ + "trigger_neutral_position", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "trigger_damping")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Damping coefficient for the trigger joint";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.trigger_damping);
          parameters_interface_->declare_parameter(prefix_ + "trigger_damping", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "joints") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'joints': {}", validation_result.error()));
      }
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "command_interfaces") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "state_interfaces") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_joints");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "command_joints") << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_joints': {}", validation_result.error()));
      }
      updated_params.command_joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "static_friction_scalars");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "static_friction_scalars") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.static_friction_scalars = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "static_friction_velocity_thresholds");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "static_friction_velocity_thresholds") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.static_friction_velocity_thresholds = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "torque_scaling_factors");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "torque_scaling_factors") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.torque_scaling_factors = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "trigger_spring_stiffness");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "trigger_spring_stiffness") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.trigger_spring_stiffness = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "trigger_neutral_position");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "trigger_neutral_position") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.trigger_neutral_position = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "trigger_damping");
      RCLCPP_DEBUG_STREAM(logger_, (prefix_ + "trigger_damping") << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.trigger_damping = param.as_double_array();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace spring_actuator_controller
