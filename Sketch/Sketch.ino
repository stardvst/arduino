/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

byte ledPin[] = { 4,5,6,7,8,9,10,11,12,13 };
int currentLED = 0;

int ledDEalay;
unsigned long changeTime;
int potPin = 2;

int direction = 1;

// the setup function runs once when you press reset or power the board
void setup()
{
	// set all pins to output
	for (auto pin : ledPin)
		pinMode(pin, OUTPUT);
	
	changeTime = millis();
}

int buttonState = 0;

// the loop function runs over and over again until power down or reset
void loop()
{
	// read pot value
	ledDEalay = analogRead(potPin);

	Serial.print(ledDEalay);

	// if it has been ledDelay ms since last change
	if (millis() - changeTime > ledDEalay)
	{
		changeLED();
		changeTime = millis();
	}
}

void changeLED()
{
	// turn off all LEDs
	for (auto pin : ledPin)
		digitalWrite(pin, LOW);

	// turn on current LED
	digitalWrite(ledPin[currentLED], HIGH);

	// increment by the direction value
	currentLED += direction;

	// change direction if we reach the end
	if (currentLED == 9)
		direction = -1;
	else if (currentLED == 0)
		direction = 1;
}
