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
  servo.write(360);
  delay(1000);
  servo.write(-360);

}
