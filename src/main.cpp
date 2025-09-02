#include <Arduino.h>

#define MA_BROCHE_ANGLE 32

void setup() {
  Serial.begin(115200);
}

void loop() {
  int maLectureAngle = analogRead(MA_BROCHE_ANGLE);
  Serial.println(maLectureAngle);
  delay(100);
}