*** Comment ***
Copyright (C) 2022 - Janne Brunn a k a Señor Randomirez Enterprises inc.
*** Settings ***

Documentation               Test LED behaviour at device startup
Resource                    resources/helpers.resource
Suite Setup                 Initialize Pins

*** Test Cases ***

LED Test Startup 
    Is Pin Low      ${LOW_LED_PIN}
    Is Pin Low      ${MID_LED_PIN}
    Is Pin Low      ${HIGH_LED_PIN}
 