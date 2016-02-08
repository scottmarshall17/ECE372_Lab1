/*
 * File:   timer.c
 * Authors:
 *
 * Created on December 30, 2014, 8:07 PM
 */

#include <xc.h>
#include "constants.h"

//Uses timer 2
void delayUs(unsigned int delay){
    //TODO: Create a delay using timer 2 for "delay" microseconds.
}

void initTimers() {
     //TODO: Initialize Timer 1 to have a period of
    T1CONbits.TCKPS = PS_256;
    T2CONbits.TCKPS = PS_256;
    T1CONbits.TCS = 0;  //default clock
    T2CONbits.TCS = 0;
    T1CONbits.SIDL = DISABLED;
    T2CONbits.SIDL = DISABLED;
    IFS0bits.T1IF = FLAG_DOWN;  //puts the flag down
    IFS0bits.T2IF = FLAG_DOWN;
    IPC1bits.T1IP = 7;   //sets timer priority level to 7
//    IPC2bits.T2IP = 7;
    TMR2 = 0;
    TMR1 = 0;
    PR2 = 195;
    PR1 = 39062;
//    IEC0bits.T2IE = ENABLED;    //originally ENABLED
    IEC0bits.T1IE = ENABLED;     //enables the interrupt flag   SAME AS ABOVE
    T2CONbits.ON = 0;
    T1CONbits.ON = ENABLED;
    // 1 second. Enable its interrupt
}