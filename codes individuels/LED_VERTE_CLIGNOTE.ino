#include <Adafruit_NeoPixel.h>

#define LED_PIN    4    // Change this to your data pin
#define NUM_LEDS   21      // Number of WS2812-2020 LEDs

Adafruit_NeoPixel leds(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  leds.begin();          // Initialize LED strip
  leds.show();           // Turn all LEDs off
}

void loop() {
  leds.setPixelColor(0, leds.Color(100, 0, 0)); // Set LED to red
  leds.show();
  delay(10000);
  
  leds.setPixelColor(0, leds.Color(0, 100, 0)); // Set LED to red
  leds.show();
  delay(10000);
}