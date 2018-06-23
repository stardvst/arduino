/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led1 = 9;
int led2 = 10;
int led3 = 11;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	analogWrite(led1, random(256));
	analogWrite(led2, random(256));
	analogWrite(led3, random(256));
	delay(random(100));
}
