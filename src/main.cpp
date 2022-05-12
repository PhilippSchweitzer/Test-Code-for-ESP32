#include <Arduino.h>

uint8_t Zeichen;    // Eingelesenes Zeichen

void setup() {
//  pinMode(LED_BUILTIN, OUTPUT);     // funktioniert nur, wenn das richtige Board eingestellt ist!
  //pinMode(MY_LED, OUTPUT);        // LED an anderem Pin
  Serial.begin(115200);
  
}

// ***** Hauptschleife          *************************************************************************************
void loop() {

  if (Serial.available() > 0) {   // ein oder mehrere Zeichen empfangen??
    Zeichen = Serial.read();       // gibt ein Zeichen zurück
    switch(Zeichen) {
      case 'w':                   // ohne Break geht es unten weiter => beide Buchstaben funktionieren
      case 'W': 
                Serial.println("1");
                return;
      case 'f':                   
      case 'F': 
                Serial.println("0");
                break;
    }
  }
}