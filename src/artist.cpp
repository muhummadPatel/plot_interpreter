//grid.cpp

#include "Arduino.h"
#include "artist.h"

void Artist::line(long* start, long* end){
  grid.moveToPixels(start);
  pen.down();
  grid.moveToPixels(end);
  pen.up();
}
