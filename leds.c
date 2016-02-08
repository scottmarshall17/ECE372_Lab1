/*
* File:   leds.c
* Author: 
*
* Created on December 27, 2014, 1:31 PM
*/

#include <xc.h>
#include "constants.h"

void initLEDs(){
    //TODO: Initialize the appropriate pins to work with the LEDs
    TRISGbits.TRISG12 = OUTPUT;     //set LED pins at outputs
    TRISGbits.TRISG14 = OUTPUT;
    
    ODCGbits.ODCG12 = ENABLED;      //Enable Open-Drain Configuration
    ODCGbits.ODCG14 = ENABLED;
    
    LATGbits.LATG12 = HI_Z;         //Turn off the Red LED
    LATGbits.LATG14 = LOW_Z;        //Turn on the Green LED
    
}