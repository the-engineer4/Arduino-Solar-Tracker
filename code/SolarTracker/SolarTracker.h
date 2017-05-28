/*
  SolarTracker.h
*/

/* Ensure this library definition is only included once */
#ifndef SolarTracker_h
#define SolarTracker_h


/* I\O PIN MAPPING ARDUINO NANO MODULE - Main Controller Module  */
//#include "header_file.h"


/* Library Constants Definition  */

// SensorArray class constants 
#define ACTUATOR_EXTEND 0           //Comments
#define ACTUATOR_RETRACT 1          //Comments
#define ACTUATOR_SPEED_STOP 0       //Comments
#define ACTUATOR_SPEED_HALF 127     //Comments
#define ACTUATOR_SPEED_FULL 255     //Comments

// LinearActuator class constants 
#define ACTUATOR_EXTEND 0           //Comments
#define ACTUATOR_RETRACT 1          //Comments
#define ACTUATOR_SPEED_STOP 0       //Comments
#define ACTUATOR_SPEED_HALF 127     //Comments
#define ACTUATOR_SPEED_FULL 255     //Comments


/* I\O PIN MAPPING MODULE - Description  */
#define NANO_A0_PIN 0
#define NANO_A1_PIN 1
#define NANO_A2_PIN 2
#define NANO_A3_PIN 3


/*  Class instances forward declaration */
//class SensorArray
//class LinearActuator;


class SensorArray
{
  public:
    SensorArray();
    int CompareAxis(int axis_id);
    int Refresh();    
     
  private:
    int getSensorData(int sensor_id);
};


class LinearActuator
{
  public:
    LinearActuator();
    int ExtendArm();
    int RetractArm();    
     
  private:
    int speed;
    bool direction;
    
};


#endif
