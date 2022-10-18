#include "button_events.h"
#include "led_events.h"

int buttonState_A = LOW;
int buttonState_B = LOW;
int buttonState_Up = LOW;
int buttonState_Down = LOW;

int ledState = 0;

char another_debug_buffer[30];

//
//
//
//
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LOW_LED_PIN, OUTPUT);
  pinMode(MID_LED_PIN, OUTPUT);
  pinMode(HIGH_LED_PIN, OUTPUT);

  pinMode(BUTTON_A_PIN, INPUT);
  pinMode(BUTTON_B_PIN, INPUT);
  pinMode(BUTTON_UP_PIN, INPUT);
  pinMode(BUTTON_DOWN_PIN, INPUT);
  
  Serial.begin(9600); 

  set_led_state(0);
  
}

// the loop function runs over and over again forever
void loop() {
  buttonState_A = debounceButton(BUTTON_A_PIN, buttonState_A);
  buttonState_B = debounceButton(BUTTON_B_PIN, buttonState_B);
  buttonState_Up = debounceButton(BUTTON_UP_PIN, buttonState_Up);
  buttonState_Down = debounceButton(BUTTON_DOWN_PIN, buttonState_Down);
  
  if (buttonState_A == 1){
    Serial.println("A pressed");
    if (ledState == 0){
      set_led_state(1);
    }
  }
  if (buttonState_B == 1){
    Serial.println("B pressed");
    set_led_state(0);
  }
  if (buttonState_Up == 1){
    Serial.println("UP pressed");
    if (ledState <= 2 && ledState > 0){  
    increase(ledState);
    }
  }
  if (buttonState_Down == 1){
    Serial.println("DOWN pressed");
    if (ledState >= 2){
    decrease(ledState);
    }
  }

  
  set_led_state(1);
  Serial.println("####BEGINNING####");
  sprintf(another_debug_buffer, "LED State %d requested",1);
  Serial.println(another_debug_buffer);
  delay(1000);
  
  set_led_state(2);
  Serial.println("");
  sprintf(another_debug_buffer, "LED State %d requested",2);
  Serial.println(another_debug_buffer);
  delay(1000);
  
  set_led_state(3);
  Serial.println("");
  sprintf(another_debug_buffer, "LED State %d requested",3);
  Serial.println(another_debug_buffer);
  delay(1000);
  
  set_led_state(2);
  Serial.println("");
  sprintf(another_debug_buffer, "LED State %d requested",2);
  Serial.println(another_debug_buffer);
  delay(1000);

  set_led_state(1);
  Serial.println("");
  sprintf(another_debug_buffer, "LED State %d requested",1);
  Serial.println(another_debug_buffer);
  delay(1000);

  set_led_state(0);
  Serial.println("");
  sprintf(another_debug_buffer, "LED State %d requested",0);
  Serial.println(another_debug_buffer);
  delay(1000);
  Serial.println("#########END#######");
  Serial.println("");

}
