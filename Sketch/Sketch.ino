/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

int longDelay = 5000;
int shortDelay = 3000;
int mixDelay = 1000;

int carRed = 12;
int carYellow = 11;
int carGreen = 10;
int pedRed = 9;
int pedGreen = 8;

int button = 2;
int crossTime = 5000;
unsigned long changeTime;

// the setup function runs once when you press reset or power the board
void setup()
{
	pinMode(button, INPUT);
	
	pinMode(carRed, OUTPUT);
	pinMode(carYellow, OUTPUT);
	pinMode(carGreen, OUTPUT);
	pinMode(pedRed, OUTPUT);
	pinMode(pedGreen, OUTPUT);

	// initially allow cars
	digitalWrite(carGreen, HIGH);
	digitalWrite(pedRed, HIGH);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	int state = digitalRead(button);

	// check if button is pressed and it's >5 seconds since last press
	if (state == HIGH && (millis() - changeTime) > 5000)
	{
		changeLights();
	}
}

void changeLights()
{
	digitalWrite(carGreen, LOW);
	digitalWrite(carYellow, HIGH);
	delay(2000);

	digitalWrite(carYellow, LOW);
	digitalWrite(carRed, HIGH);
	delay(500);

	digitalWrite(pedRed, LOW);
	digitalWrite(pedGreen, HIGH);
	delay(crossTime);

	// flash ped green
	digitalWrite(carYellow, HIGH);
	for (int x = 0; x < 10; x++)
	{
		digitalWrite(pedGreen, HIGH);
		delay(250);
		digitalWrite(pedGreen, LOW);
		delay(250);
	}

	// turn ped red on
	digitalWrite(carRed, LOW);
	digitalWrite(carYellow, LOW);
	digitalWrite(pedRed, HIGH);
	delay(150);

	digitalWrite(carRed, LOW);
	digitalWrite(carGreen, HIGH);
	delay(3000);

	digitalWrite(carYellow, LOW);
	delay(2000);

	// record time since last change of lights
	changeTime = millis();
}