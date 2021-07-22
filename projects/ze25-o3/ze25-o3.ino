#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);

int i = 0;
#define BUFF_SIZE 9
int buff[BUFF_SIZE] = {};

unsigned long curr_millis = 0;

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop()
{
  if ((millis() - curr_millis) > 40)
  {
    curr_millis = millis();
    i = 0;
  }

  if (mySerial.available())
  {
    byte val = mySerial.read();
    if (i < BUFF_SIZE)
    {
      buff[i] = val;
      Serial.println(buff[i]);
      i++;
    }
    
    curr_millis = millis();
  }


  delay(10);
}
