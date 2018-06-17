/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 13;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(led, HIGH);
	delay(1000);
	digitalWrite(led, LOW);
	delay(1000);
}
