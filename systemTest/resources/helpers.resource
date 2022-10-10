*** Comment ***
Copyright (C) 2022 - Janne Brunn a k a Señor Randomirez Enterprises inc.
*** Settings ***
Documentation   Helper test functions
...             Mario approves
Library         GPIOLibrary   
Resource        vars.resource



*** Keywords ***
Initialize Pins
    Set Mode          BOARD
    Set Output Pin    ${LOW_LED_PIN}
    Set Output Pin    ${MID_LED_PIN}
    Set Output Pin    ${HIGH_LED_PIN}
    Set Input Pin     ${BUTTON_A_PIN}
    Set Input Pin     ${BUTTON_B_PIN}
    Set Input Pin     ${BUTTON_UP_PIN}
    Set Input Pin     ${BUTTON_DOWN_PIN}


