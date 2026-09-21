#include "srv_stdio_serial.h"

#include <stdio.h>
#include <HardwareSerial.h>

int serial_putchar(char c, FILE *f) {
    Serial.write(c);
    return 0;
}

void setupSerialPrintf() {
    static FILE uartout;

    fdev_setup_stream(
        &uartout,
        serial_putchar,
        NULL,
        _FDEV_SETUP_WRITE
    );

    stdout = &uartout;
}

void initSerial() {
    Serial.begin(9600);
    Serial.println("Enter 'led on' or 'led off'");
}

String readCommand() {
    if (Serial.available() > 0) {
        return Serial.readStringUntil('\n');
    }

    return "";
}