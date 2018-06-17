/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int longDelay = 5000;
int shortDelay = 3000;
int mixDelay = 1000;

int red = 10;
int yellow = 9;
int green = 8;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(red, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(green, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(red, HIGH);
	delay(longDelay);

	digitalWrite(yellow, HIGH);
	delay(shortDelay);

	digitalWrite(red, LOW);
	digitalWrite(green, HIGH);
	digitalWrite(yellow, LOW);
	delay(mixDelay);

	delay(longDelay - mixDelay);
	digitalWrite(green, LOW);
	digitalWrite(yellow, HIGH);
	delay(shortDelay);

	digitalWrite(yellow, LOW);
}
