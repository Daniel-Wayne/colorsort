#include "common.h"

Servo arm, claw;

void setup() {
	arm.attach(9);
	claw.attach(3);	
}


/*
 *	Let's have our first program make the claw do the following:
 *	Start with claw open and arm up, have the robot pick up an object right
 *	in front of it, raise the arm up and hold it for 2 seconds, then set the
 *	object back down.
 */
void loop() {

}
