/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int led = 10;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	for (int x = 0; x < 3; x++)
	{
		digitalWrite(led, HIGH);
		delay(150);
		digitalWrite(led, LOW);
		delay(100);
	}

	// delay to cause gap between letters
	delay(100);

	for (int x = 0; x < 3; x++)
	{
		digitalWrite(led, HIGH);
		delay(400);
		digitalWrite(led, LOW);
		delay(100);
	}

	// delay to cause gap between letters
	delay(100);

	for (int x = 0; x < 3; x++)
	{
		digitalWrite(led, HIGH);
		delay(150);
		digitalWrite(led, LOW);
		delay(100);
	}

	// wait 5s before reporting next SOS signal
	delay(5000);
}
