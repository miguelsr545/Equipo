#include <stdio.h>
#include "statemachine_acciones.h"

extern Bebida strcPreparacion[UNO];


void StateMoveLicor (  )
{   
    uint8 u8EnableFill;
    uint8 u8StateLicor = TRUE;
    uint8 u8Llegar = FALSE;
    uint64 u64DelayMov;
    uint64 u64DelayFill;
    //Licor
    while ( u8StateLicor == TRUE )
    {   
        if ( u8Llegar == FALSE )
        {
            printf(" -----> ");
            funcLicor ( strcPreparacion->u8Licor  );
            u64DelayMov = TRASLADO;
            while( u64DelayMov-- );
            u8EnableFill = TRUE;
            u8Llegar = TRUE;
        }
        else if ( u8EnableFill == TRUE)
        {
            printf(" <Llenando ");
            funcLicor ( strcPreparacion->u8Licor );
            printf(">");
            u64DelayFill = LLENAR;
            while( u64DelayFill-- );
            u8EnableFill = FALSE;
        }
        else
        {
            u8StateLicor = FALSE;
        }
    } 
}

void funcLicor ( uint8 u8Licor )
{
    switch ( u8Licor )
    {
        case Tequila:
            printf("Tequila");
        break;

        case Ron:
            printf("Ron");
        break;

        case Whisky:
            printf("Whisky");
        break;

        case Vodka:
            printf("Vodka");
        break;

        case Cerveza:
            printf("Cerveza");
        break;
    }
}

void StateMoveIngrediente ( )
{   
    uint8 u8EnableFill;
    uint8 u8StateIngrediente = TRUE;
    uint8 u8Llegar = FALSE;
    uint64 u64DelayMov;
    uint64 u64DelayFill;
    //Ingrediente
    while ( u8StateIngrediente == TRUE )
    {   
        if ( u8Llegar == FALSE )
        {
            printf(" -----> ");
            funcIngrediente ( strcPreparacion->u8Ingrediente  );
            u64DelayMov = TRASLADO;
            while( u64DelayMov-- );
            u8EnableFill = TRUE;
            u8Llegar = TRUE;
        }
        else if ( u8EnableFill == TRUE)
        {
            printf(" <Llenando ");
            funcIngrediente ( strcPreparacion->u8Ingrediente );
            printf(">");
            u64DelayFill = LLENAR;
            while( u64DelayFill-- );
            u8EnableFill = FALSE;
        }
        else
        {
            u8StateIngrediente = FALSE;
        }
    } 
}

void funcIngrediente ( uint8 u8Ingrediente )
{
    switch ( u8Ingrediente )
    {
        case Agua_Tonica:
            printf("Agua Tonica");
        break;

        case Sangria:
            printf("Sangria");
        break;

        case Coca:
            printf("Coca");
        break;

        case Clamato:
            printf("Clamato");
        break;

        case Agua_Mineral:
            printf("Agua Mineral");
        break;
    }
}

void StateMoveIngrediente_Extra ( )
{   
    uint8 u8EnableFill;
    uint8 u8StateIngrediente_Extra = TRUE;
    uint8 u8Llegar = FALSE;
    uint64 u64DelayMov;
    uint64 u64DelayFill;
    //Ingrediente_Extra
    while ( u8StateIngrediente_Extra == TRUE )
    {   
        if ( u8Llegar == FALSE )
        {
            printf(" -----> ");
            funcIngrediente_Extra ( strcPreparacion->u8Ingrediente_Extra  );
            u64DelayMov = TRASLADO;
            while( u64DelayMov-- );
            u8EnableFill = TRUE;
            u8Llegar = TRUE;
        }
        else if ( u8EnableFill == TRUE)
        {
            printf(" <Agregando ");
            funcIngrediente_Extra ( strcPreparacion->u8Ingrediente_Extra );
            printf("> ");
            u64DelayFill = LLENAR;
            while( u64DelayFill-- );
            u8EnableFill = FALSE;
        }
        else
        {
            u8StateIngrediente_Extra = FALSE;
        }
    } 
}

void funcIngrediente_Extra ( uint8 u8Ingrediente_Extra )
{
    switch ( u8Ingrediente_Extra )
    {
        case Limon:
            printf("Limon");
        break;

        case Sal:
            printf("Sal");
        break;

        case Maguie:
            printf("Maguie");
        break;

        case Valentina:
            printf("Valentina");
        break;

        case Hielos:
            printf("Hielos");
        break;
    }
}