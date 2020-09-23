#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {
  pwm.begin();
  Serial.begin(9600);
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(50);

  delay(10);

  pwm.setPWM(0, 0, 175);
  pwm.setPWM(3, 0, 400);
  delay(3000);
}

void loop() {
  // up: pressed, down: unpressed
  pwm.setPWM(0, 0, 250);
  pwm.setPWM(3, 0, 400);
  delay(6200);
  pwm.setPWM(0, 0, 175);
  pwm.setPWM(3, 0, 330);
  delay(6200);
}
