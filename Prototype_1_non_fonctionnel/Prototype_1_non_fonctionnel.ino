#include <Adafruit_NeoPixel.h>

#define LED_PIN    4    // Change this to your data pin
#define NUM_LEDS   21      // Number of WS2812-2020 LEDs
#define Color      0

Adafruit_NeoPixel leds(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  leds.begin();          // Initialize LED strip
  leds.show();           // Turn all LEDs off
      Serial.begin(115200);
    pinMode(A2, OUTPUT);
    pinMode(A3, INPUT);

    digitalWrite(A2, HIGH);  // turn the PIR (HIGH is the voltage level)  

    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  
}

void loop() {
  leds.setPixelColor(0, leds.Color(100, 0, 0)); // Set LED to red
  leds.show();
  Color(1)
  delay(10000);
  
  leds.setPixelColor(0, leds.Color(0, 100, 0)); // Set LED to green
  leds.show();
  Color(0) 
  delay(10000);
}

void loop() {
unsigned long startTime;
unsigned long duration = 20000; // Durée en millisecondes 

void setup() {
  Serial.begin(9600);
  startTime = millis(); // Enregistre l'heure de début
}


}

    if (digitalRead(A3)) {   // read the PIR value
      
          void loop() {
  if (millis() - startTime < duration) {
      void loop(){
        if (Color(1)){
          int melody[] = {
  NOTE_C3, NOTE_B2,0,NOTE_C3, NOTE_B2,0,NOTE_C3, NOTE_B2,0
  // note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 2,2,4,2,2,4,2,2
  }
  else{#define Buzzer A4

// notes in the melody:
int melody[] = {
  NOTE_A4,0, NOTE_A4,0, NOTE_A4,0
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,2,4,2,4,2
  
}
}
  
      
};// Code à exécuter pendant 20 secondes
    Serial.println("Boucle active");
  } else {
    // Code à exécuter après les 20 secondes
    Serial.println("Fin de la boucle");
    while (true); // Stoppe le programme 
  }
         
        }
    }
    else {
        setColor(BRIGHTNESS, 0, 0);   // Turn the LED to Green
    }
    
    delay(100);
}
