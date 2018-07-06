/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 6;
int ldr = 0;
int lightVal = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	lightVal = analogRead(ldr);
	digitalWrite(led, HIGH);

	delay(lightVal);

	digitalWrite(led, LOW);

	delay(lightVal);
}
