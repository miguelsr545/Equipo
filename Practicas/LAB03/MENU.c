#include "types.h"
#include "MENU.h"
#include "BML.h"

uint16 TIMEB1;
uint16 TIMEB2;
uint16 TIMEB3;

void StateMachine( void )
{   
    uint8 u8BOMB;
    uint8 u8Accion;
    uint8 u8Ejecutando;
    static uint8 u8DefaultTime = TRUE;
    static uint8 u8State = StateMenu;

    if ( u8State ==  StateMenu ) /*Configurar*/
    {   
        /*Default time set*/
        
        if ( u8DefaultTime == TRUE )
        {   
            printf("\nIngrese los tiempos en seg, maximo de 25 min (1500 seg)\n");
            printf("\nIngrese el valor de la Bomba 1\n");
            TIMEB1 = TimeFunc( );
            printf("Ingrese el valor de la Bomba 2\n");
            TIMEB2 = TimeFunc( );
            printf("Ingrese el valor de la Bomba 3\n");
            TIMEB3 = TimeFunc( );
            u8DefaultTime = FALSE;
        }
        else
        {
            //Nada
        }
        printf("\nIngrese una accion\n");
        printf("1) Cambiar tiempo\n");
        printf("2) Ver Tiempo\n");
        printf("3) Salir del menu y Ejecutar");
        scanf("%d", &u8Accion);

        if ( u8Accion == Time_Select )
        { 
            printf("\n\nIngrese una bomba de infusion\n");
            printf("1) Bomba 1\n");
            printf("2) Bomba 2\n");
            printf("3) Bomba 3\n");
            scanf("%d", &u8BOMB);

            if ( u8BOMB == BOMBA1 )
            {
                TIMEB1 = TimeFunc( );

            }
            else if ( u8BOMB == BOMBA2 )
            {
                TIMEB2 = TimeFunc( );

            }
            else if ( u8BOMB == BOMBA3 )
            {
                TIMEB3 = TimeFunc( );

            }
            else
            {
                printf("Ingrese un numero de 1 a 3\n\n");

            }
        }
        else if ( u8Accion == Time_View )
        {
            printf("\n\nBomba 1 -> %d seg\n", TIMEB1);
            printf("Bomba 2 -> %d seg\n", TIMEB2);
            printf("Bomba 3 -> %d seg\n\n", TIMEB3);

        }
        else if ( u8Accion == End )
        {   
            printf("\n\n<Saliendo Del Menu>\n\n");
            printf("Se iniciara la infusion con los siguientes datos:\n");
            printf("Bomba 1 -> %d seg\n", TIMEB1);
            printf("Bomba 2 -> %d seg\n", TIMEB2);
            printf("Bomba 3 -> %d seg\n", TIMEB3);
            u8State = StateEjecucion;
        }
        else 
        {   
            printf("\n\nAccion Invalida\n\n");

        }
    }
    else if ( u8State == StateEjecucion ) /*Ejecucion*/
    {
        u8Ejecutando = BML( );
        if ( u8Ejecutando == StateEjecucion)
        {
            u8State = StateEjecucion;
        }
        else
        {
            u8State = StateMenu;
            u8DefaultTime = TRUE;
            printf("\n| Ejecucion Terminada |\n\n");
        }
        
    }
    else
    {
        //nada
    }
    
}

//Time
uint16 TimeFunc ( void )
{   
    uint16 u16TimeSet;
    uint8 u8Seguro = TRUE;
    while ( u8Seguro == TRUE )
    {
        printf("\nIngresa el Tiempo");
        scanf("%d", &u16TimeSet);
        if ( u16TimeSet > MAX_TIME )
        {
            printf("\n\nEl tiempo Maximo es de 25 min (1500 seg)");
            u8Seguro = TRUE;
        }
        else
        {
            u8Seguro = FALSE;
        }
    }
    return u16TimeSet;
}