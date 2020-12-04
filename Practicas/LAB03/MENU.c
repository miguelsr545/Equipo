#include "MENU.h"

uint8 TIMEB1;
uint8 TIMEB2;
uint8 TIMEB3;
uint8 MENU( void )
{   
    uint8 u8BOMB;
    uint8 u8Accion;
    
    fflush(stdin);
    printf("\nIngrese una accion\n");
    printf("1) Agregar tiempo\n");
    printf("2) Ver Tiempo\n");
    printf("3) Salir del menu");
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
        printf("\n\nBomba 1 -> %d Min\n", TIMEB1);
        printf("Bomba 2 -> %d Min\n", TIMEB2);
        printf("Bomba 3 -> %d Min\n\n", TIMEB3);
        
    }
    else if ( u8Accion == End )
    {   
        printf("\n\n<Saliendo Del Menu>\n\n");
        printf("Se iniciara la infusion con los siguientes datos:\n");
        printf("Bomba 1 -> %d Min\n", TIMEB1);
        printf("Bomba 2 -> %d Min\n", TIMEB2);
        printf("Bomba 3 -> %d Min\n", TIMEB3);
        return StateBML;
    }
    else 
    {   
        printf("\n\nAccion Invalida\n\n");
        
    }
    return StateMenu;
}

uint8 TimeFunc ( void )
{   
    uint8 u8TimeSet;
    printf("\nIngresa el Tiempo");
    scanf("%d", &u8TimeSet);
    if ( u8TimeSet > MAX_TIME )
    {
        printf("\n\nEl tiempo Maximo es de 25 min");
        return CERO;
    }
    else
    {
        return u8TimeSet;
    }
}