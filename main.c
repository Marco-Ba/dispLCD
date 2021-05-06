/*
 * File:   main.c
 * Author: 21193066
 *
 * Created on 5 de Maio de 2021, 14:49
 */

#include "config.h"
#include <xc.h>
#include "DispLCD4Vias.h"
#include "teclado.h"
#include "delay.h"

void main(void) 
{
    char str[] = "tecla:    ";
    dispLCD_init();
    teclado_init();
    
    dispLCD(0,0, "tecla");
    while( 1 )
    {
        str[7] = teclado();
        if( str[7] == 0 )
            str[7] = ' ';
        dispLCD(1,0, str );
    }    
}
