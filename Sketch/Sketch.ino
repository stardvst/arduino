/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 4;
int beep = 5;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
	pinMode(beep, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(led, HIGH);
	digitalWrite(beep, HIGH);
	delay(250);

	digitalWrite(led, LOW);
	digitalWrite(beep, LOW);
	delay(250);
}
