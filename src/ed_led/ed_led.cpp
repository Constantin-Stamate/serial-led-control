#include <Arduino.h>

static int ledPin;
static bool ledState = LOW;

void initLed(int pin) {
    ledPin = pin;

    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

void ledOn() {
    ledState = HIGH;

    digitalWrite(ledPin, ledState);

    Serial.println("LED on");
}

void ledOff() {
    ledState = LOW;

    digitalWrite(ledPin, ledState);

    Serial.println("LED off");
}

void ledToggle() {
    ledState = !ledState;

    digitalWrite(ledPin, ledState);

    if (ledState) {
        Serial.println("LED on (toggle)");
    } else {
        Serial.println("LED off (toggle)");
    }
}