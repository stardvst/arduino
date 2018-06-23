/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

float RGB1[3];
float RGB2[3];
float INC[3];

int red, green, blue;

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);
	randomSeed(analogRead(0));

	RGB1[0] = 0;
	RGB1[1] = 0;
	RGB1[2] = 0;

	RGB1[0] = random(256);
	RGB1[1] = random(256);
	RGB1[2] = random(256);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	randomSeed(analogRead(0));

	for (auto x = 0; x < 3; ++x)
		INC[x] = (RGB1[x] - RGB2[x]) / 256;

	for (auto x = 0; x < 256; ++x)
	{
		red =	int(RGB1[0]);
		green = int(RGB1[1]);
		blue =	int(RGB1[2]);

		analogWrite(redPin, red);
		analogWrite(greenPin, green);
		analogWrite(bluePin, blue);
		delay(100);

		RGB1[0] -= INC[0];
		RGB1[1] -= INC[1];
		RGB1[2] -= INC[2];
	}

	for (float & x : RGB2)
	{
		x = random(556) - 300;
		x = constrain(x, 0, 255);
		delay(100);
	}
}
