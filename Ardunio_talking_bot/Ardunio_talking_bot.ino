#include<SoftwareSerial.h>

SoftwareSerial mySerial (2, 3);

#define m1 4
#define m2 5
#define m3 6
#define m4 7
#define m5 8
#define m6 9
#define m7 10
#define m8 11

#define led 13

void setup()
{
  mySerial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  pinMode(m6, OUTPUT);
  pinMode(m7, OUTPUT);
  pinMode(m8, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, HIGH);
  digitalWrite(m5, HIGH);
  digitalWrite(m6, HIGH);
  digitalWrite(m7, HIGH);
  digitalWrite(m8, HIGH);
  
  if(mySerial.available() == 1)
  {
    String val = mySerial.readString();
    if(val == "who are you")
    {
      digitalWrite(m8, LOW);
      delay(100);
    }
    else if(val == "turn on the LED")
    {
      digitalWrite(m7, LOW);
      delay(100);
      digitalWrite(led, HIGH);
    }
    else if(val == "turn off the LED")
    {
      digitalWrite(m7, LOW);
      delay(100);
      digitalWrite(led, LOW);
    }
    else if(val == "how are you")
    {
      digitalWrite(m6, LOW);
      delay(100);
    }
    else if(val == "I am also good")
    {
      digitalWrite(m5, LOW);
      delay(100);
    }
    else if(val == "would you like to say something")
    {
      digitalWrite(m4, LOW);
      delay(100);
    }
    else if(val == "hi")
    {
      digitalWrite(m3, LOW);
      delay(100);
    }
    else if(val == "bye")
    {
      digitalWrite(m2, LOW);
      delay(100);
    }
    else
    {
      digitalWrite(m1, LOW);
      delay(100);
    }
  }
}
