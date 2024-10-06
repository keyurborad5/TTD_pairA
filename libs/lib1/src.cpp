#include "lib1.hpp"

double PidController::compute_speed() {
  // Please write your implementation here

  return get_actual_speed();
}

double PidController::get_actual_speed() {
  // Please write your implementation here
  return actual_speed_;
}
