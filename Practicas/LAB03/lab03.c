#include "types.h"

extern uint8 TIMEB1;
extern uint8 TIMEB2;
extern uint8 TIMEB3;

void main ( void )
{   
    
    while (TRUE)
    {   
        uint8 u8Loop = TRUE;
        MENU( );
        printf("Se iniciara la infusion con los siguientes datos:\n");
        printf("Bomba 1 -> %d Min\n", TIMEB1);
        printf("Bomba 2 -> %d Min\n", TIMEB2);
        printf("Bomba 3 -> %d Min\n", TIMEB3);
        printf("\n\n");
        while( u8Loop == TRUE )
        {
            u8Loop = BML( );
        }
    }
}

