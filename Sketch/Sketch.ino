/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

#include <Stepper.h>

int SPMU = 32;
Stepper stepper{ SPMU, 2,3,4,5 };

// the setup function runs once when you press reset or power the board
void setup()
{
	stepper.setSpeed(500);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	stepper.step(2048);
	delay(500);
	stepper.step(-2048);
	delay(500);
}