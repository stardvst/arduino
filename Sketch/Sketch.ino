/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

#include <Servo.h>

Servo servo;

int degree = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	servo.attach(8); // pin 8
}

// the loop function runs over and over again until power down or reset
void loop()
{
	for (auto angle = 0; angle < 180; ++angle)
	{
		servo.write(angle);
		delay(10);
	}

	for (auto angle = 180; angle >= 0; --angle)
	{
		servo.write(angle);
		delay(10);
	}
}