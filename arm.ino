/* setups needed before function calls, to be moved to common.h */
#include "Servo.h"
int a_up = 77;
int a_down = 127;
int a_pin = 9;

/*setup section*/
Servo arm;
void setup(){
  arm_setup();
}

void arm_setup(){
  arm.attach(a_pin);
}

/* Moves the arm up */
void arm_up(){
  arm.write(a_up);
  delay(500);
}

/* Moves the arm down so that the arm
 * forms a mostly 180 degree angle with the robot.
 * We need the arm to be able to pick up objects from
 * the ground without actually touching the ground.
 */
 void arm_down(){
  arm.write(a_down);
  delay(500);
}

// the loop routine runs over and over again forever:
void loop(){
  for(int i=0; i < 100; i++) {
    arm_up();
    arm_down();
  }
}
