#include <stdio.h>
#include "statemachine.h"

Bebida strcPreparacion[UNO];

void main ( void )
{

    Elegir_Licor ( );
    Elegir_Ingrediente ( );
    Elegir_Ingrediente_Extra ( );

    printf("Base ");
    
    StateMoveLicor();
    StateMoveIngrediente();
    StateMoveIngrediente_Extra();

    printf("Back to Base ");
    printf("|Bebida Lista|");
}

