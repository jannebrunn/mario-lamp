*** Comment ***
Copyright (C) 2022 - Janne Brunn a k a Señor Randomirez Enterprises inc.
*** Settings ***
Documentation   Helper test functions
...             Mario approves
Library         GPIOLibrary   
Resource        vars.resource



*** Keywords ***
Initialize Pins
    Set Mode          BCM
    Set Input Pin     ${LOW_LED_PIN}
    Set Input Pin     ${MID_LED_PIN}
    Set Input Pin     ${HIGH_LED_PIN}
    Set Output Pin    ${BUTTON_A_PIN}
    Set Output Pin    ${BUTTON_B_PIN}
    Set Output Pin    ${BUTTON_UP_PIN}
    Set Output Pin     ${BUTTON_DOWN_PIN}

Push Button
    [Arguments]       ${button}
    IF    ${button} == "A"
        Set Pin High  ${BUTTON_A_PIN}
        Sleep    50 milliseconds
        Set Pin Low  ${BUTTON_A_PIN}
        Sleep    50 milliseconds
    END
    IF    ${button} == "B"
        Set Pin High  ${BUTTON_B_PIN}
        Sleep    50 milliseconds
        Set Pin Low  ${BUTTON_B_PIN}
        Sleep    50 milliseconds
    END
    IF    ${button} == "UP"
        Set Pin High  ${BUTTON_UP_PIN}
        Sleep    50 milliseconds
        Set Pin Low  ${BUTTON_UP_PIN}
        Sleep    50 milliseconds
    END
    IF    ${button} == "DOWN"
        Set Pin High  ${BUTTON_DOWN_PIN}
        Sleep    50 milliseconds
        Set Pin Low  ${BUTTON_DOWN_PIN}
        Sleep    50 milliseconds
    END


