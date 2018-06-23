/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 11;
float sinVal;
int ledVal;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	for (auto x = 0; x < 180; ++x)
	{
		// convert degrees to radians then obtain sin value
		sinVal = sin(x * (3.1412 / 180));
		ledVal = int(sinVal * 255);
		analogWrite(led, ledVal);
		delay(25);
	}
}
