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

  shell.write('x');
}

void cmd_origin(Shell &shell, int argc, const ShellArguments &argv){
  artist.origin();

  shell.write('x');
}

void setup(){
  Serial.begin(9600);
  shell.setPrompt("$\n");
  shell.begin(Serial);

  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);

  ShellCommand(line, "draw a line", cmd_line);
  ShellCommand(origin, "move pen to origin", cmd_origin);
}

void loop(){
  shell.loop();
}
