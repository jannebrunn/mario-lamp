#include "button_events.h"
#define LOW_LED_PIN 10
#define MID_LED_PIN 11
#define HIGH_LED_PIN 12

#define BUTTON_A_PIN 4
#define BUTTON_B_PIN 5
#define BUTTON_UP_PIN 6
#define BUTTON_DOWN_PIN 7


int buttonState_A = LOW;
int buttonState_B = LOW;
int buttonState_Up = LOW;
int buttonState_Down = LOW;

char debug_buffer[30];
//
//
//
//
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LOW_LED_PIN, OUTPUT);
  pinMode(LOW_LED_PIN, OUTPUT);
  pinMode(HIGH_LED_PIN, OUTPUT);

  pinMode(BUTTON_A_PIN, INPUT);
  pinMode(BUTTON_B_PIN, INPUT);
  pinMode(BUTTON_UP_PIN, INPUT);
  pinMode(BUTTON_DOWN_PIN, INPUT);
  
  Serial.begin(9600); 
  Serial.println("Hello world!");
}

// the loop function runs over and over again forever
void loop() {
  buttonState_A = debounceButton(BUTTON_A_PIN, buttonState_A);
  buttonState_B = debounceButton(BUTTON_B_PIN, buttonState_B);
  buttonState_Up = debounceButton(BUTTON_UP_PIN, buttonState_Up);
  buttonState_Down = debounceButton(BUTTON_DOWN_PIN, buttonState_Down);
  Serial.println("");
  sprintf(debug_buffer, "Button A:       %d",buttonState_A);
  Serial.println(debug_buffer);
  sprintf(debug_buffer, "Button B:       %d",buttonState_B);
  Serial.println(debug_buffer);
  sprintf(debug_buffer, "Button Up:      %d",buttonState_Up);
  Serial.println(debug_buffer);
  sprintf(debug_buffer, "Button Down:    %d",buttonState_Down);
  Serial.println(debug_buffer);
  Serial.println("");
  delay(1500);
}
//
//
//
//
//
