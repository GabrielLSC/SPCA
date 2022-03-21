/*
 * File:   main.c
 * Author: 21193442
 *
 * Created on 11 de Março de 2022, 11:08
 */


#include <xc.h>
#include <pic16f887.h>
#include "config.h"

#define LAMPADA PORTDbits.RD1 // Define apelido de LAMPADA para a porta RD1
#define SENSOR  PORTDbits.RD0 // Define apelido de SENSOR para a porta RD0

void main (void)
{
    
    TRISDbits.TRISD0 = 1; // Define a porta RD0 como entrada
    TRISDbits.TRISD1 = 0; // Define a porta RD1 como saida
    LAMPADA = 0;          // Inicia com a Lampada apagada 

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
