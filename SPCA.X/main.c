/*
 * File:   main.c
 * Author: 21193442
 *
 * Created on 11 de Março de 2022, 11:08
 */


#include <xc.h>
#include <pic16f887.h>
#include "config.h"
#include "delay.h"

#define LAMPADA PORTDbits.RD1 // Define apelido de LAMPADA para a porta RD1
#define SENSOR  PORTDbits.RD2 // Define apelido de SENSOR para a porta RD0

void main (void)
{
    
    TRISDbits.TRISD2 = 1; // Define a porta RD2 como entrada
    TRISDbits.TRISD1 = 0; // Define a porta RD1 como saida
    LAMPADA = 0;          // Inicia com a Lampada apagada 

    int t_sensor = 0;    
    
    while( 1 )
    {
        if(SENSOR == 1)    
        {  
           LAMPADA = 1; 
           t_sensor = 4500; 
        }
        
        if(SENSOR == 0)
        {   
            --t_sensor;         //Mantem LAMPADA acessa durante o tempo de bloqueio do sensor(3sec)
            delay(1);           
            
            if(t_sensor <=0)
            {
                LAMPADA = 0;
            }
        }
    }
}
