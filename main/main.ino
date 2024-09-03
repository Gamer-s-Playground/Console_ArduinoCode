#define button 6
#define jsX A0
#define jsY A1

#include <Keyboard.h>

void setup() {
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  //joystick
  int currX = analogRead(jsX);
  int currY = analogRead(jsY);

  //left
  if(currX == 1023) {
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else {
    Keyboard.release(KEY_LEFT_ARROW);
  }

  //right
  if(currX == 0) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }

  //up
  if(currY == 1023) {
    Keyboard.press(KEY_UP_ARROW);
  }
  else {
    Keyboard.release(KEY_UP_ARROW);
  }

  //down
  if(currY == 0) {
    Keyboard.press(KEY_DOWN_ARROW);
  }
  else {
    Keyboard.release(KEY_DOWN_ARROW);
  }

  //button
  int buttonControl = digitalRead(button);

  if(buttonControl == LOW) {
    Keyboard.press('B');
  }
  else {
    Keyboard.release('B');
  }
}
