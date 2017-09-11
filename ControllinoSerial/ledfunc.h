/*
   led show functions for controllino
*/
#include <Arduino.h>

void showLED (int ledNumber, int R, int G, int B) {
  leds[ledNumber].setRGB( R, G, B);
}

void showKnightRider (int R, int G, int B) {
  // ein Mann... ein Auto...
}

void showStrobo (int R, int G, int B) {
  // looks like some 90s disco
}



