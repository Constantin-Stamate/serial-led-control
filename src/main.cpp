#include <Arduino.h>

#include "app_serial_terminal/app_serial_terminal.h"
#include "ed_led/ed_led.h"
#include "srv_stdio_serial/srv_stdio_serial.h"

void setup() {
    initSerial();
    initLed(13);
}

void loop() {
    String command = readCommand();

    if (command.length() > 0) {
        handleCommand(command);
    }
}