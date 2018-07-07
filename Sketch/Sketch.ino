/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int input = A0;
int LED = 10;
int sensorValue = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	sensorValue = analogRead(input);

	Serial.print("Sensor value = ");
	Serial.print(sensorValue);

	digitalWrite(LED, sensorValue < 50 ? HIGH : LOW);

	delay(50);
}
