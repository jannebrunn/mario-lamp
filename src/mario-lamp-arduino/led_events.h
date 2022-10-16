#ifndef LED_EVENTS_H
#define LED_EVENTS_H

#define LOW_LED_PIN 8
#define MID_LED_PIN 9
#define HIGH_LED_PIN 13

#include <Arduino.h>
void increase(int fromState);
void decrease(int fromState);
void set_led_state(int state);

#endif