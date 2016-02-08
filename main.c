// ******************************************************************************************* //
//
// File:         lab1p1.c
// Date:         
// Authors:      
//
// Description: Part 1 for lab 1
// ******************************************************************************************* //

#include <xc.h>
#include <sys/attribs.h>
#include "constants.h"
#include "leds.h"
#include "interrupt.h"
#include "switch.h"
#include "timer.h"


typedef enum state_enum {
  RED_LED_ON, GREEN_LED_ON   
} state_t;


volatile state_t myState;
/* Please note that the configuration file has changed from lab 0.
 * the oscillator is now of a different frequency.
 */
int main(void)
{
    myState = GREEN_LED_ON;
    SYSTEMConfigPerformance(10000000);
    initLEDs();
    initTimers();
    
    while(1)
    {
        //TODO: Using a finite-state machine, define the behavior of the LEDs
        //Debounce the switch
        //This line is a test
    }
    
    return 0;
}

void __ISR(_TIMER1_VECTOR, IPL7SRS) timer1Handler(void){
    
    
}

void __ISR(_CHANGE_NOTICE_VECTOR, IPL3SRS) _CNInterrupt(void){
    //TODO: Implement the interrupt to capture the press of the button

}