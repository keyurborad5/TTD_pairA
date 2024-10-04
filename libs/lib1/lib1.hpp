/**
 * @file lib1.hpp
 * @author Keyur Borad (keyurborad5@github.com)
 * @author Uthappa Madettira (gayanuthappams@gmail.com)
 * @brief Header file for PID controller
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include <iostream>
/**
 * @brief Class Defination for PID controller
 * 
 */
class PidController {
public:
//============Constructor==================
    /**
     * @brief Construct a new Pid Controller object
     * 
     * @param value intakes desired speed value
     */
    PidController(double value){
        desired_speed_=value;
    
    };  // Constructor

//============Methods==================
    /**
     * @brief Computes speed based on desired speed
     * 
     * @return double 
     */
    double compute_speed();
    /**
     * @brief Get the actual speed object
     * 
     * @return double 
     */
    double get_actual_speed();    

private:
//===============Attributes===================
    //<! Desired speed to be achieved
    double desired_speed_;      
    //<! Propotional gain
    double kp_{0.50};
    //<! Integral gain
    double ki_{0.01};
    //<! Derivative gain
    double kd_{0.10};
    //<! Preset speed
    double actual_speed_{100.0};
    //<! integral error
    double integral_{0};
    //<! previous error for derivative gain
    double previous_error_{0};
};

