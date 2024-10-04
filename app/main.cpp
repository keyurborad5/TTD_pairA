#include "lib1.hpp"
#include <iostream>

int main() {
  //Varialble declaration
  double new_velocity;
  double desired_speed;
  //User input desire speed
  std::cout << " Enter the desired speed : ";
  std::cin>> desired_speed;
  //Creating Object my_controller
  PidController my_controller(desired_speed);

  //Getting new velocity based on desired speed
  new_velocity=my_controller.compute_speed();
  //Printing the results
  std::cout<<std::endl<< "New Velocity is: "<< new_velocity<<std::endl;
  
  return 0;
}
