/*
 * File:   main.c
 * Author: 21193442
 *
 * Created on 11 de Março de 2022, 11:08
 */


#include <xc.h>
#include <pic16f887.h>
#include "config.h"

#define LAMPADA PORTDbits.RD1
#define SENSOR  PORTDbits.RD0

void main(void)
{

    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 1;
    
    while( 1 )
    {
        if(SENSOR == 1)
        {
            LAMPADA = 1;
        }
        else
        {
            LAMPADA = 0;
        }
    }
}
