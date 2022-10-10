*** Comment ***
Copyright (C) 2022 - Janne Brunn a k a Señor Randomirez Enterprises inc.
*** Settings ***

Documentation               Test LED behaviour at device startup
Resource                    resources/helpers.resource
Suite Setup                 Initialize Pins

*** Test Cases ***

Led Test Startup
    ${pin_status}=                  Get Pin Status      ${LOW_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${MID_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
    ${pin_status}=                  Get Pin Status      ${HIGH_LED_PIN}
    Should Be Equal As Integers     ${pin_status}       0
 