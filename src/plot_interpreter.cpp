//plot_interpreter.ino

#include "Arduino.h"
#include "artist.h"

Artist artist;
long pos1[2];
long pos2[2];

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);

  pos1[0] = 5;
  pos1[1] = 5;

  pos2[0] = 15;
  pos2[1] = 15;

  artist.line(pos1, pos2);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
