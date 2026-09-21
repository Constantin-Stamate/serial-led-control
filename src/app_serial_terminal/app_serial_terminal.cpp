#include "app_serial_terminal.h"

#include "ed_led/ed_led.h"

void handleCommand(String command) {
    command.trim();

    if (command.equalsIgnoreCase("led on")) {
        ledOn();
    } else if (command.equalsIgnoreCase("led off")) {
        ledOff();
    } else if (command.equalsIgnoreCase("led toggle")) {
        ledToggle();
    } else {
        Serial.println(
            "Unknown command. Use 'led on', 'led off', or 'led toggle'"
        );
    }
}