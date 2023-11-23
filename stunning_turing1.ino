// C++ code
//
#include <Servo.h>

Servo servo_4;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A1, INPUT);
  servo_4.attach(4, 500, 2500);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 600) {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }

  analogRead(A1);

  Serial.println("");
  if (analogRead(A1) > 200) {
    servo_4.write(90);
  } else {
    servo_4.write(0);
  }
}