#include "button_events.h"

int debounceButton(int buttonPin, int lastButtonState) {
    // Variables will change:
    int ledState = HIGH;         // the current state of the output pin
    int buttonState;             // the current reading from the input pin
    
    // the following variables are unsigned longs because the time, measured in
    // milliseconds, will quickly become a bigger number than can be stored in an int.
    unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
    unsigned long debounceDelay = 25;    // the debounce time; increase if the output flickers
    
    int reading = digitalRead(buttonPin);

    // check to see if you just pressed the button
    // (i.e. the input went from LOW to HIGH), and you've waited long enough
    // since the last press to ignore any noise:

    // If the switch changed, due to noise or pressing:
    if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
    }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

    }
    return buttonState;
  }



}