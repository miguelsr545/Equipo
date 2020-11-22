#include <stdio.h>
#include "statemachine_elegir.h"

extern Bebida strcPreparacion[UNO];

void Elegir_Licor ( )
{
    uint8 u8Seguro = TRUE;
    while ( u8Seguro == TRUE )
    {
        printf("Ingrese el tipo de Licor\n");
        printf("0) Tequila\n");
        printf("1) Ron\n");
        printf("2) Whisky\n");
        printf("3) Vodka\n");
        printf("4) Cerveza\n");
        scanf("%d", &strcPreparacion->u8Licor );
        if ( strcPreparacion->u8Licor >= Max_Licores)
        {
            printf("Numero incorrecto, ingrese un valor de 0 a 4");
        }
        else
        {
            u8Seguro = FALSE;
        }
        
    }  
}

void Elegir_Ingrediente ( )
{
    uint8 u8Seguro = TRUE;

    while ( u8Seguro == TRUE )
    {
        printf("\nIngrese el Ingrediente\n");
        printf("0) Agua Tonica\n");
        printf("1) Sangria\n");
        printf("2) Coca\n");
        printf("3) Clamato\n");
        printf("4) Agua Mineral\n");
        fflush(stdin);
        scanf("%d", &strcPreparacion->u8Ingrediente);
        if ( strcPreparacion->u8Ingrediente >= Max_Ingredientes)
        {
            printf("Numero incorrecto, ingrese un valor de 0 a 4");
        }
        else
        {
            u8Seguro = FALSE;
        }
    }
}

void Elegir_Ingrediente_Extra ( )
{
    uint8 u8Seguro = TRUE;

    while ( u8Seguro == TRUE )
    {
        printf("\nIngrese el Ingrediente Extra\n");
        printf("0) Limon\n");
        printf("1) Sal\n");
        printf("2) Magie\n");
        printf("3) Valentina\n");
        printf("4) Hielos\n");
        fflush(stdin);
        scanf("%d", &strcPreparacion->u8Ingrediente_Extra);
        if ( strcPreparacion->u8Ingrediente_Extra >= Max_Ingredientes_Extra)
        {
            printf("Numero incorrecto, ingrese un valor de 0 a 4");
        }
        else
        {
            u8Seguro = FALSE;
        }
    }
}

