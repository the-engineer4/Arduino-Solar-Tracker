/*
  Arduino Solar Tracking Circuit

  Automated single or dual axis Photo-Voltaic(PV) panel array rotation to achieve maximum 
  surface area exposure to sunlight with automatic nightly orientation reset. This will 
  optimize solar power generation with 40%-60% improvement in efficiency over fixed PV 
  panel installations.

  The circuit:
   

  CODE REVISIONS:
  1. Initial code - modified 21 May 2017 By Ryan Downer
  
  LICENSING:
    GNU General Public License v3.0
    Permissions of this strong copyleft license are conditioned on making available
    complete source code of licensed works and modifications, which include larger 
    works using a licensed work, under the same license. Copyright and license notices
    must be preserved. Contributors provide an express grant of patent rights.

*/

<<<<<<< HEAD
// include library definition files
#include "SolarTracker.h"



/* I\O PIN MAPPING ARDUINO NANO MODULE - Main Controller Module  */
#define IO_Sensor NANO_A0_PIN
#define NANO_A1_PIN 1
#define NANO_A2_PIN 2
#define NANO_A3_PIN 3
//int ledPin = 9;    // LED connected to digital pin 9


// CREATE DFR Keypad CLASS INSTANCE
SolarTracker Tracker;
  

void setup() {

  
//---------------------------------------------
}


/*
=======
/* I\O PIN MAPPING ARDUINO NANO MODULE - Main Controller Module  */
#define NANO_A0_PIN 22
#define NANO_A1_PIN 23
#define NANO_A2_PIN 24
#define NANO_A3_PIN 25

int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
}

>>>>>>> master
void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
<<<<<<< HEAD
  */
=======
>>>>>>> master
}
