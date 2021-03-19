int led1 = 4;
int led2 = 5;
int led3 = 7;
int led4 = 8;

int message[4] = {0, 0, 0, 0};

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void turnLed(int binary[], int time_high)
{
    if (binary[0] == 1)
    {
        digitalWrite(led1, HIGH);
    }
    if (binary[1] == 1)
    {
        digitalWrite(led2, HIGH);
    }
    if (binary[2] == 1)
    {
        digitalWrite(led3, HIGH);
    }
    if (binary[3] == 1)
    {
        digitalWrite(led4, HIGH);
    }

    delay(time_high);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
}

int binaryToDecimal(int binary[])
{
    int num1 = binary[0] * 1;
    int num2 = binary[1] * 2;
    int num3 = binary[2] * 4;
    int num4 = binary[3] * 8;
    return num1 + num2 + num3 + num4;
}

int *plusOne(int binary[])
{
    int decimal = binaryToDecimal(binary);
    if (decimal == 15)
    {
        return 0;
    }
    int result = decimal + 1;
    int newMessage[4] = {};
    for (int i = 3; i > -1; i = i - 1)
    {
        newMessage[i] = result % 2;
    }
    return newMessage;
}

void loop()
{
    // turnLed(message, 1000);
    // turnLed(plusOne(message), 1000);
    int xd[4] = {0, 1, 0, 1};
    turnLed(xd, 3000);
}