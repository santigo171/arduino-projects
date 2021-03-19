// Este programa mostrará en codigo morse el mensaje que tu eligas.

// Pon el mensaje en forma de array aquí:
char message[] = {'a', 'r', 'd', 'u', 'i', 'n', 'o', ' ', 'e', 's', ' ', 'g', 'e', 'n', 'i', 'a', 'l'};

// Pon el pin en donde va a estar tu led aquí:
int output_led = 5;

// Pon el tiempo que quieres que dure un punto aquí:
int dot_time = 500;

// Pon el timepo que quieres que dure una raya aquí:
int line_time = 1500;

// Pon el tiempo que quieres que pase entre cada letra aquí:
int time_between_letters = 1000;

// Pon el tiempo que quieres que pase entre cada palabra aquí:
int time_between_words = 2000;

// Pon el tiempo que quieres que pase entre cada pulso aquí:
int time_between_pulse = 500;

//Fin de la configuración, ahora el arduino se encargará de hacer el resto solo.
void setup()
{
  pinMode(output_led, OUTPUT);
}

void turnOnOff(int time)
{
  digitalWrite(output_led, HIGH);
  delay(time);
  digitalWrite(output_led, LOW);
  delay(time_between_pulse);
}

void start(int time, int repetition)
{
  int starti = 0;
  while (starti < repetition)
  {
    digitalWrite(output_led, HIGH);
    delay(time);
    digitalWrite(output_led, LOW);
    delay(time);
    starti++;
  }
}

void showCharacter(char num1, char num2, char num3, char num4, char num5)
{
  if (num1 == '.')
  {
    turnOnOff(dot_time);
  }
  else if (num1 == '-')
  {
    turnOnOff(line_time);
  }

  if (num2 == '.')
  {
    turnOnOff(dot_time);
  }
  else if (num2 == '-')
  {
    turnOnOff(line_time);
  }

  if (num3 == '.')
  {
    turnOnOff(dot_time);
  }
  else if (num3 == '-')
  {
    turnOnOff(line_time);
  }

  if (num4 == '.')
  {
    turnOnOff(dot_time);
  }
  else if (num4 == '-')
  {
    turnOnOff(line_time);
  }

  if (num5 == '.')
  {
    turnOnOff(dot_time);
  }
  else if (num5 == '-')
  {
    turnOnOff(line_time);
  }
}

void loop()
{
  delay(2000);
  start(50, 5);
  delay(2000);

  int message_size = sizeof(message) / sizeof(message[0]);
  int i = 0;
  while (i < message_size)
  {
    int morse_character = tolower(message[i]);
    switch (morse_character)
    {
    case 'a':
      showCharacter('.', '-', '0', '0', '0');
      break;
    case 'b':
      showCharacter('-', '.', '.', '.', '0');
      break;
    case 'c':
      showCharacter('-', '.', '-', '.', '0');
      break;
    case 'd':
      showCharacter('-', '.', '.', '0', '0');
      break;
    case 'e':
      showCharacter('.', '0', '0', '0', '0');
      break;
    case 'f':
      showCharacter('.', '.', '-', '.', '0');
      break;
    case 'g':
      showCharacter('-', '-', '.', '0', '0');
      break;
    case 'h':
      showCharacter('.', '.', '.', '.', '0');
      break;
    case 'i':
      showCharacter('.', '.', '0', '0', '0');
      break;
    case 'j':
      showCharacter('.', '-', '-', '-', '0');
      break;
    case 'k':
      showCharacter('-', '.', '-', '0', '0');
      break;
    case 'l':
      showCharacter('.', '-', '.', '.', '0');
      break;
    case 'm':
      showCharacter('-', '-', '0', '0', '0');
      break;
    case 'n':
      showCharacter('-', '.', '0', '0', '0');
      break;
    case 'o':
      showCharacter('-', '-', '-', '0', '0');
      break;
    case 'p':
      showCharacter('.', '-', '-', '.', '0');
      break;
    case 'q':
      showCharacter('-', '-', '.', '-', '0');
      break;
    case 'r':
      showCharacter('.', '-', '.', '0', '0');
      break;
    case 's':
      showCharacter('.', '.', '.', '0', '0');
      break;
    case 't':
      showCharacter('-', '0', '0', '0', '0');
      break;
    case 'u':
      showCharacter('.', '.', '-', '0', '0');
      break;
    case 'v':
      showCharacter('.', '.', '.', '-', '0');
      break;
    case 'w':
      showCharacter('.', '-', '-', '0', '0');
      break;
    case 'x':
      showCharacter('-', '.', '.', '-', '0');
      break;
    case 'y':
      showCharacter('-', '.', '-', '-', '0');
      break;
    case 'z':
      showCharacter('-', '-', '.', '.', '0');
      break;
    case '1':
      showCharacter('.', '-', '-', '-', '-');
      break;
    case '2':
      showCharacter('.', '.', '-', '-', '-');
      break;
    case '3':
      showCharacter('.', '.', '.', '-', '-');
      break;
    case '4':
      showCharacter('.', '.', '.', '.', '-');
      break;
    case '5':
      showCharacter('.', '.', '.', '.', '.');
      break;
    case '6':
      showCharacter('-', '.', '.', '.', '.');
      break;
    case '7':
      showCharacter('-', '-', '.', '.', '.');
      break;
    case '8':
      showCharacter('-', '-', '-', '.', '.');
      break;
    case '9':
      showCharacter('-', '-', '-', '-', '.');
      break;
    case '0':
      showCharacter('-', '-', '-', '-', '-');
      break;
    case ' ':
      delay(time_between_words); // separa palabras
      break;
    }
    delay(time_between_letters);
    i++;
  }
}
