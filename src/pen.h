//pen.h

#ifndef PEN_H
#define PEN_H

#include "Arduino.h"
#include <Servo.h>

#define SERVO_PIN 3

#define SERVO_COOLDOWN 50

class Pen{
public:
  Pen(int up_angle=90, int down_angle=0):
    up_angle(up_angle),
    down_angle(down_angle){};
  void up();
  void down();


private:
  Servo servo;
  int up_angle, down_angle;
};

#endif
