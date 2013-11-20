/* setups needed before function calls, to be moved to common.h */
#include "Servo.h"
int c_open = 0;
int c_close = 120;
int c_pin = 3;

/*setup section*/
Servo claw;
void setup(){
  claw_setup();
}

void claw_setup(){
  claw.attach(c_pin);
}

/* Opens the claw */
void claw_open(){
  claw.write(c_open);
  delay(500);
}

/* Applies pressure to close the claw.
 * This should be called between every arm movement
 * to keep the object held in the claw while the arm is
 * moving */
void claw_grip(){
  claw.write(c_close);
  delay(500);
}

// the loop routine runs over and over again forever:
void loop(){
  for(int i=0; i < 100; i++) {
    claw_open();
    claw_grip();
  }
}
