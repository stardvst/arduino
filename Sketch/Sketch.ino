/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int measurement = 0;
int beep = 6;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);
	pinMode(6, OUTPUT);

}

// the loop function runs over and over again until power down or reset
void loop()
{
	measurement = analogRead(A0);
	Serial.print("Moisture measurement: ");
	Serial.print(measurement);
	delay(500);
	if (measurement > 100)
		digitalWrite(beep, HIGH);
	else
		digitalWrite(beep, LOW);
}
