int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void turnLed(String binary, int time_high)
{
    if (binary[0] == "1")
    {
        digitalWrite(led1, HIGH);
    }
    if (binary[1] == "1")
    {
        digitalWrite(led2, HIGH);
    }
    if (binary[2] == "1")
    {
        digitalWrite(led3, HIGH);
    }
    if (binary[3] == "1")
    {
        digitalWrite(led4, HIGH);
    }

    delay(time_high);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
}

int binaryToDecimal(String binary)
{
    int num1 = binary[0] * 8;
    int num2 = binary[1] * 4;
    int num3 = binary[2] * 2;
    int num4 = binary[3] * 1;
    return num1 + num2 + num3 + num4;
}

String decimalToBinary(int decimal)
{
    String index = "";
    while (decimal != 1) {
        index = decimal % 2 + index; 
    }
}

String plusOne(String binary)
{
    int decimal = binaryToDecimal(binary);
    if (decimal == 15)
    {
        return "0000";
    }
    int result = decimal + 1;
    return decimalToBinary(result);
}

void loop()
{
    String counter = "1111";
//    while (true) {
//        turnLed(counter, 1000);
//        counter = plusOne(counter);
//    }
    turnLed(counter, 1000);
}
