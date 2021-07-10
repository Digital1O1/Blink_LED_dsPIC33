/*
 * File:   main.c
 * Author: Chris
 *
 * Created on July 10, 2021, 1:08 PM
 * 
 * Reference video : https://www.youtube.com/watch?v=dPsuCt8JXjU&ab_channel=JamesSmith
 */

#define _XTAL_FREQ 8000000
#define FCY     30400000UL

#include <xc.h>     //Standard header file for mirochip chips
#include <stdlib.h>
#include <stdio.h>
#include <libpic30.h> //Delay function

void main(void) 
{
    TRISE = 0b00000000;
    
    while(1)
    {    
        PORTE = 0b00000001; //RE0 Logic HIGH
        __delay_ms(100);
        PORTE = 0b00000000; //RE Logic LOW
        __delay_ms(100);
    }
    return ;
}
