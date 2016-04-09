//artist.h

#ifndef ARTIST_H
#define ARTIST_H

#include "Arduino.h"
#include "pen.h"
#include "grid.h"

class Artist{
private:
  Grid grid;
  Pen pen;

public:
  Artist(){};
  void line(long* start, long* end);
  void origin();
};

#endif
