//plot_interpreter.ino

#include "Arduino.h"
#include "pen.h"

Pen pen;
void setup(){
}

void loop(){
  pen.up();
  delay(1000);

  pen.down();
  delay(1000);
}
