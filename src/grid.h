//grid.h

#ifndef GRID_H
#define GRID_H

#include "Arduino.h"
#include <AccelStepper.h>
#include <MultiStepper.h>

#define X 0
#define Y 1

#define STEPS_PER_PIXEL 50
#define X_WIDTH_IN_STEPS 6500
#define Y_WIDTH_IN_STEPS 6500

#define COOLDOWN_DELAY 100

class Grid{
public:
  Grid();
  bool moveToPixels(long* pos);
  long* getResolutionInPixels();

private:
  AccelStepper x_stepper;
  AccelStepper y_stepper;
  MultiStepper steppers;
  void pixelsToSteps(long* pos);
};

#endif
