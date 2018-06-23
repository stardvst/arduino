/*
Name:		Sketch.ino
Created:	17-Jun-18 11:18:21
Author:	liliam
*/

char buffer[18];
int red, green, blue;

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);
	Serial.flush();

	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	if (Serial.available() > 0)
	{
		int idx = 0;
		delay(100);

		int numChar = Serial.available();
		if (numChar > 15)
			numChar = 15;
		
		while (numChar--)
			buffer[idx++] = Serial.read();

		splitString(buffer);
	}
}

void splitString(char *data)
{
	Serial.print("Data entered: ");
	Serial.println(data);

	auto param = strtok(data, ", ");
	while (param)
	{
		setLED(param);
		param = strtok(data, ", ");
	}

	// clear
	memset(buffer, 0, sizeof buffer);
	Serial.flush();
}

void setLED(char *data)
{
	if (data[0] == 'r' || data[0] == 'R')
	{
		auto ans = strtol(data + 1, nullptr, 10);
		ans = constrain(ans, 0, 255);

		analogWrite(redPin, ans);
		Serial.print("Red is set to: ");
		Serial.println(ans);
	}
	else if (data[0] == 'g' || data[0] == 'G')
	{
		auto ans = strtol(data + 1, nullptr, 10);
		ans = constrain(ans, 0, 255);

		analogWrite(greenPin, ans);
		Serial.print("Green is set to: ");
		Serial.println(ans);
	}
	else if (data[0] == 'b' || data[0] == 'B')
	{
		auto ans = strtol(data + 1, nullptr, 10);
		ans = constrain(ans, 0, 255);

		analogWrite(bluePin, ans);
		Serial.print("Blue is set to: ");
		Serial.println(ans);
	}
}