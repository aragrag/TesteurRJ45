#include<CableLAN.h>
#include <iostream>
#include <string>


void CableLAN::init_congig_broches (){
  // Configuration des broches en entrée

  for (int i = 0; i <= 7; i++)
  {
    pinMode(pins[i], INPUT);
    pinMode(pinOuts[i], INPUT);
  } 
}

void CableLAN::read_signals(){
  // Lecture des signaux sur les broches
  for (int i = 0; i <= 7; i++)
  {
    sigs[i] = digitalRead(pins[i]);
    sigOuts[i] = digitalRead(pinOuts[i]); 
  }
}


void CableLAN::cable_type(){
    Serial.println();
    for (int i = 0; i <= 7; i++)
    {
      Serial.print(sigs[i]);
    }
    Serial.println();
    for (int i = 0; i <= 7; i++)
    {
      Serial.print(sigOuts[i]);
    }
    Serial.println();

    Serial.println("==================");
    if(
      sigs[0] == sigOuts[0] &&
      sigs[1] == sigOuts[1] &&
      sigs[2] == sigOuts[2] &&
      sigs[3] == sigOuts[3] &&
      sigs[4] == sigOuts[4] &&
      sigs[5] == sigOuts[5] &&
      sigs[6] == sigOuts[6] &&
      sigs[7] == sigOuts[7]
    ){
      Serial.println("câble droit ok");
      //return("Câble droit ok");   
      

    }else if(
      sigs[0] == sigOuts[2] &&
      sigs[1] == sigOuts[5] &&
      sigs[2] == sigOuts[0] &&
      sigs[3] == sigOuts[3] &&
      sigs[4] == sigOuts[4] &&
      sigs[5] == sigOuts[1] &&
      sigs[6] == sigOuts[6] &&
      sigs[7] == sigOuts[7]
      ){
      Serial.println("Câble cross.  ok");
      //return("Câble cross.  ok");
    }else{
      Serial.println("Câble inc.  ok");   
      //return("Câble inc.  ok");   
      
    }
    Serial.println("==================");

}