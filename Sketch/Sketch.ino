/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int input = A0;
int LED = 10;
int pir = 7;

int sensorValue = 0;
int moved = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(pir, INPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	sensorValue = analogRead(input);
	moved = digitalRead(pir);

	digitalWrite(LED, sensorValue < 50 && moved == HIGH ? HIGH : LOW);

	delay(50);
}
