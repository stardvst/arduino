/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

#include <IRRemote/IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);

	pinMode(13, OUTPUT);

	irrecv.enableIRIn();
}
olling 
// the loop function runs over and over again until power down or reset
void loop()
{
	if (irrecv.decode(&results))
	{
		Serial.println(results.value, DEC);

		if (results.value == 16724175)
			digitalWrite(13, HIGH);
		else if (results.value == 16718055)
			digitalWrite(13, LOW);

		irrecv.resume();
	}
}