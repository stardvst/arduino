/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 13;
int button = 2;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(button, INPUT);
	
	pinMode(led, OUTPUT);
}

int buttonState = 0;

// the loop function runs over and over again until power down or reset
void loop()
{
	buttonState = digitalRead(button);
	if (buttonState == HIGH)
		digitalWrite(led, HIGH);
	else
		digitalWrite(led, LOW);
}
