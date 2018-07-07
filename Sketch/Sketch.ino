/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 5;
int pir = 7;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
	pinMode(pir, INPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(led, digitalRead(pir));
}
