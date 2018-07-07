/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int trigger =  7;
int echo = 6;

int time = 0;
int dist = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);

	pinMode(echo, INPUT);
	pinMode(trigger, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	digitalWrite(trigger, LOW);
	delay(5);

	digitalWrite(trigger, HIGH);
	delay(10);

	digitalWrite(trigger, LOW);

	time = pulseIn(echo, HIGH);
	dist = (time / 2) / 29.1;

	if (dist >= 500 || dist <= 0)
		Serial.println("No measurement.");
	else
	{
		Serial.print(dist);
		Serial.println("cm");
	}

	delay(1000);
}