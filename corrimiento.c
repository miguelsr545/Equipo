#include <stdio.h>

void main ( void ) {

    char NumeroBits, OperacionVar, Corrimiento, Resultado ;
    printf( "Ingrese el numero de bits" );
    scanf( "%d", &NumeroBits );

    if ( NumeroBits == 8 || 16 || 32 ) {
        printf("1) And \n2) OR \n3) XOR");
        scanf( "%d", &OperacionVar );

        printf( "Ingrese el corrimiento" );
        scanf( "%d", &Corrimiento );

        if ( NumeroBits < Corrimiento && OperacionVar >=1 || OperacionVar <=3) {
        switch ( OperacionVar ) {

            case 1 :
                Resultado &=~ ( 1<< Corrimiento );
            break;

            case 2:
                Resultado |= (1<< Corrimiento);
            break;

            case 3:
                Resultado^= (1 << Corrimiento);
            break;
        } printf("El resultado es: %d", Resultado)
    }
    
    }
    else 

    


}