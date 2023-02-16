#include <Arduino.h>
#include<CableLAN.h>

CableLAN cable; // instancier l'Obket CableLAN

void setup() {
  // Configuration des broches en entrée
  cable.init_congig_broches(); 

  Serial.begin(9600);
}

void loop() {
  // Lecture des signaux sur les broches
  cable.read_signals();

  // Afficher type de cable sur Monitor
  cable.cable_type(); 
  delay(10000);
}
