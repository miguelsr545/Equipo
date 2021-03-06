#include "types.h"
#include "BML.h"
#include "MENU.h"

uint8 BML ( void )
{   
    extern uint16 TIMEB1;
    extern uint16 TIMEB2;
    extern uint16 TIMEB3;

    static uint8 u8Finaliza1 = FALSE;
    static uint8 u8Finaliza2 = FALSE;
    static uint8 u8Finaliza3 = FALSE;
    if ( TIMEB1 != CERO && u8Finaliza1 == FALSE )
    {   
        Bomba1_ON( TIMEB1 );
        TIMEB1--;
    }
    else
    {
        u8Finaliza1 = TRUE;
    }
    if ( TIMEB2 != CERO && u8Finaliza2 == FALSE )
    {   
        Bomba2_ON( TIMEB2 );
        TIMEB2--;
    }
    else
    {
        u8Finaliza2 = TRUE;
    }
    if ( TIMEB3 != CERO && u8Finaliza3 == FALSE )
    {   
        Bomba3_ON( TIMEB3 );
        TIMEB3--;
    }
    else
    {
        u8Finaliza3 = TRUE;
    }
	delay(UNO);		/* 1 seg  */
    if ( TIMEB1 == CERO && TIMEB2 == CERO && TIMEB3 == CERO )
    {
        u8Finaliza1 == FALSE;
        u8Finaliza2 == FALSE;
        u8Finaliza3 == FALSE;
        return StateMenu;
    }
    else
    {   
        return StateEjecucion;
        /*Repite Ciclo*/
    }
}

void delay( uint32 number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = Convertir_milis * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
} 