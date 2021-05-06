/*
 * File:   teclado.c
 * Author: 21193066
 *
 * Created on 5 de Maio de 2021, 15:30
 */

#include "config.h"
#include <xc.h>
#include "DispLCD4Vias.h"
#include "delay.h"



void teclado_init(void) 
{
   ANSELH = 0x00;
   TRISB = 0xF0;
   PORTB = 0;
}
#define MASK 0x10
char tabela[2][4] = {{'1', '2', '3', 'A'},
                     {'4', '5', '6', 'B'}};
                     
char teclado( void )
{
    char tecla = 0;
    char i;
    PORTB = 0x01;
    for(i=0; i<4; i++ ) if(PORTB & MASK<<i) tecla = tabela[0][i];
    
    PORTB = 0x02;
    for(i=0; i<4; i++ ) if(PORTB & MASK<<i) tecla = tabela[1][i];
    
    
    return(tecla);
}
    