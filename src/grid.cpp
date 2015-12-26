//grid.cpp

#include "Arduino.h"
#include "grid.h"

Grid::Grid(): x_stepper(1, 9, 8), y_stepper(1, 11, 10){
  x_stepper.setMaxSpeed(3000);
  // x_stepper.setAcceleration(1000);
  x_stepper.setCurrentPosition(0);

  y_stepper.setMaxSpeed(3000);
  //y_stepper.setAcceleration(800);
  y_stepper.setCurrentPosition(0);

  steppers.addStepper(x_stepper);
  steppers.addStepper(y_stepper);
}

bool Grid::moveToPixels(long* pos){
  // TODO: check that pos is inside the X- and Y-width in pixels
  // If outside the bounds, return false

  pixelsToSteps(pos);

  steppers.moveTo(pos);
  steppers.runSpeedToPosition(); // Blocks until all are in position
  delay(COOLDOWN_DELAY);

  return true;
}

long* Grid::getResolutionInPixels(){
  long res[2];
  res[X] = X_WIDTH_IN_STEPS / STEPS_PER_PIXEL;
  res[Y] = Y_WIDTH_IN_STEPS / STEPS_PER_PIXEL;

  return res;
}

void Grid::pixelsToSteps(long* pos){
  pos[X] *= STEPS_PER_PIXEL;
  pos[Y] *= STEPS_PER_PIXEL;
}
