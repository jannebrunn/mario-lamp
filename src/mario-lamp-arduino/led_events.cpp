#include "led_events.h"
char debug_buffer[30];

void increase(int fromState){
    if (fromState == 1){
        set_led_state(2);
    }
    else if (fromState == 2)
    {
        set_led_state(3);
    }
    
    
}

void decrease(int fromState){
    if (fromState == 3){
        set_led_state(2);
    }
    else if (fromState == 2)
    {
        set_led_state(1);
    }
    
}

void set_led_state(int state){
    if (state == 0){
        digitalWrite(LOW_LED_PIN, HIGH);
        digitalWrite(MID_LED_PIN, HIGH);
        digitalWrite(HIGH_LED_PIN, HIGH);
        sprintf(debug_buffer, "LED State %d set",state);
        Serial.println(debug_buffer);
    }
    else if (state == 1)
    {
        digitalWrite(LOW_LED_PIN, LOW);
        digitalWrite(MID_LED_PIN, HIGH);
        digitalWrite(HIGH_LED_PIN, HIGH);
        sprintf(debug_buffer, "LED State %d set",state);
        Serial.println(debug_buffer);
    }
    else if (state == 2)
    {
        digitalWrite(LOW_LED_PIN, LOW);
        digitalWrite(MID_LED_PIN, LOW);
        digitalWrite(HIGH_LED_PIN, HIGH);
        sprintf(debug_buffer, "LED State %d set",state);
        Serial.println(debug_buffer);
    }
    else if (state == 3)
    {
        digitalWrite(LOW_LED_PIN, LOW);
        digitalWrite(MID_LED_PIN, LOW);
        digitalWrite(HIGH_LED_PIN, LOW);
        sprintf(debug_buffer, "LED State %d set",state);
        Serial.println(debug_buffer);
    }
    
    
    
}

