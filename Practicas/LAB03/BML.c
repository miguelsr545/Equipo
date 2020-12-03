#include "BML.h"

uint8 BML ( void )
{   
	extern uint8 TIMEB1;
    extern uint8 TIMEB2;
    extern uint8 TIMEB3;

    static uint8 u8Time1 = CERO;
    static uint8 u8Time2 = CERO;
    static uint8 u8Time3 = CERO;

    static uint8 u8Finaliza1 = FALSE;
    static uint8 u8Finaliza2 = FALSE;
    static uint8 u8Finaliza3 = FALSE;

    if ( u8Time1 != TIMEB1 && u8Finaliza1 == FALSE )
    {   
        u8Time1++;
        printf("\nBomba 1 Activa, tiempo restante %d/%d min", u8Time1, TIMEB1);
    }
    else
    {
        u8Finaliza1 = TRUE;
    }
    
    if ( u8Time2 != TIMEB2 && u8Finaliza2 == FALSE )
    {   
        u8Time2++;
        printf("\nBomba 2 Activa, tiempo restante %d/%d min", u8Time2, TIMEB2);
    }
    else
    {
        u8Finaliza2 = TRUE;
    }

    if ( u8Time3 != TIMEB3 && u8Finaliza3 == FALSE )
    {   
        u8Time3++;
        printf("\nBomba 3 Activa, tiempo restante %d/%d min", u8Time3, TIMEB3);
    }
    else
    {
        u8Finaliza3 = TRUE;
    }

    
    
	delay(1);		/* 1 seg  */

    if ( u8Time1 == TIMEB1 && u8Time2 == TIMEB2 && u8Time3 == TIMEB3)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

void delay( uint32 number_of_seconds ) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}