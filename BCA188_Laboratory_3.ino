#include <Arduino.h>

const uint8_t BUTTON_PIN = 15;
const uint8_t LED1_PIN = 18;
const uint8_t LED2_PIN = 17;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
}

void loop() {
  const bool pressed = (digitalRead(BUTTON_PIN) == LOW);
  digitalWrite(LED1_PIN, pressed ? HIGH : LOW);
  digitalWrite(LED2_PIN, pressed ? LOW : HIGH);
}