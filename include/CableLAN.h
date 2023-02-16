#include <Arduino.h>
#include <iostream>
#include <string>


class CableLAN {
    private : 
        // Définition des broches utilisées
        const int pins[8] =     {1,2,3,4,5,0,21,20};
        const int pinOuts[8] =  {10,9,12,13,14,6,7,8};

        int sigs[8] = {0,0,0,0,0,0,0,0};
        int sigOuts[8] = {0,0,0,0,0,0,0,0};
    
    public : 

        void init_congig_broches();

        void read_signals();
        
        void cable_type();
    
};