#include "lib1.hpp"

double PidController::compute_speed() {
  double error = desired_speed_ - actual_speed_;

  // Proportional term
  double proportional = kp_ * error;

  // Integral term
  integral_ += error;
  double integral = ki_ * integral_;

  // Derivative term
  double derivative = kd_ * (error - previous_error_);

  // Updating previous error
  previous_error_ = error;

  // Updating the logic
  actual_speed_ += proportional + integral + derivative;

  // Return back the original speed
  return actual_speed_;
}

double PidController::get_actual_speed() {
  // The calculated speed
  return actual_speed_;
}
