#include <Arduino.h>

void setup() {

  Serial.begin(9600);
  
}

void loop() {

  if (Serial.available() > 0) 
  {      
    char Zeichen = Serial.read();
    Serial.print(Zeichen);  
  }


//This Code was used for Tests with early Versions of Raw_Com
/*
uint8_t Zeichen;    // Eingelesenes Zeichen

void setup() {

  Serial.begin(115200);
  
}

//Hauptschleife
void loop() {

  if (Serial.available() > 0) {     // ein oder mehrere Zeichen empfangen??
    Zeichen = Serial.read();        // gibt ein Zeichen zurück
    switch(Zeichen) {
      case 'w':                     
      case 'W': 
                Serial.println("1");
                break;
      case 'f':                   
      case 'F': 
                Serial.println("0");
                break;
    }
  }
}
*/