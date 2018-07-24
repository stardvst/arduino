/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(6, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(6, HIGH);
	delay(500);
	digitalWrite(6, LOW);
	delay(500);
}