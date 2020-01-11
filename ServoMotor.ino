#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(3);
  servo.write(0);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(120);
  delay(750);
  servo.write(65);
  delay(750);
  //servo.write(-45);
  //delay(750);

}
