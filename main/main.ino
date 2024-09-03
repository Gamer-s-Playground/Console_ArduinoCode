#define button 6
#define jsX A0
#define jsY A1

#include <Keyboard.h>

void setup() {
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  //button
  int buttonControl = digitalRead(button);

  if(buttonControl == LOW) {
    Keyboard.press('B');
  }
  else {
    Keyboard.release('B');
  }
}
