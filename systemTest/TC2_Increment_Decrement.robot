*** Comment ***
Copyright (C) 2022 - Janne Brunn a k a Señor Randomirez Enterprises inc.
*** Settings ***

Documentation               Test LED behaviour at device startup
Resource                    resources/helpers.resource
Suite Setup                 Initialize Pins

*** Test Cases ***

LED Levels Test
    Push Button    "A"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0

    Push Button    "UP"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
 
    Push Button    "UP"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1

    Push Button    "DOWN"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0

    Push Button    "DOWN"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       1
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0

    Push Button    "B"
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    
    