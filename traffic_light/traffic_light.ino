// Pin:
int green = 3;
int yellow = 5;
int red = 7;

void setup()
{
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
}

void intermittent(int pin, int times)
{
    int i = 0;
    while (i < times)
    {
        digitalWrite(pin, HIGH);
        delay(100);
        digitalWrite(pin, LOW);
        delay(100);
        i++;
    }
}

void turnOnOff(int pin, int time)
{
    digitalWrite(pin, HIGH);
    delay(time);
    digitalWrite(pin, LOW);
    intermittent(pin, 5);
}

void loop()
{
    turnOnOff(green, 5000);
    turnOnOff(yellow, 1000);
    turnOnOff(red, 5000);
    turnOnOff(yellow, 1000);
}

// Made by David Hurtado