#ifndef SRV_STDIO_SERIAL_H
#define SRV_STDIO_SERIAL_H

#include <Arduino.h>

void initSerial();
String readCommand();
void setupSerialPrintf();

#endif