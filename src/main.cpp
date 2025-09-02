#include <Arduino.h>

#define MA_BROCHE_ANGLE 32

#include <FastLED.h>

CRGB monPixel;

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812,27,GRB>(&monPixel,1);
}

void loop() {
  int maLectureAngle = analogRead(MA_BROCHE_ANGLE);
  Serial.println(maLectureAngle);

  /*
  if (maLectureAngle >= 2000)
  {
    monPixel = CRGB(255,0,0);
    FastLED.show();
  } if (maLectureAngle < 2000)
  {
    monPixel = CRGB(0,0,0);
    FastLED.show();
  }
  */

  maLectureAngle = maLectureAngle / 16;

  monPixel = CRGB(0,0,maLectureAngle);
    FastLED.show();

  delay(100);
}