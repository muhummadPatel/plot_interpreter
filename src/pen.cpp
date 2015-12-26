//pen.cpp

#include "Arduino.h"
#include "pen.h"

void Pen::up(){
  if(!servo.attached()){
    servo.attach(3);
  }
  servo.write(up_angle);
  delay(150);
}

void Pen::down(){
  if(!servo.attached()){
    servo.attach(3);
  }
  servo.write(down_angle);
  delay(150);
}
