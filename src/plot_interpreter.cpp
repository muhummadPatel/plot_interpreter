//plot_interpreter.cpp

#include "Arduino.h"
#include "artist.h"
#include <Shell.h>

Artist artist;
Shell shell;

void cmd_line(Shell &shell, int argc, const ShellArguments &argv){
  if(argc != 5){
    return;
  }

  long start[] = {atol(argv[1]), atol(argv[2])};
  long end[] = {atol(argv[3]), atol(argv[4])};
  artist.line(start, end);
}

void setup(){
  Serial.begin(9600);
  shell.setPrompt("$");
  shell.begin(Serial);

  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);

  ShellCommand(line, "draw a line", cmd_line);
}

void loop(){
  shell.loop();
}
