#ifndef BUTTON_EVENTS_H
#define BUTTON_EVENTS_H

#define BUTTON_A_PIN 4
#define BUTTON_B_PIN 5
#define BUTTON_UP_PIN 6
#define BUTTON_DOWN_PIN 7

#include <Arduino.h>

int debounceButton(int buttonPin, int lastButtonState);

#endif