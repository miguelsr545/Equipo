#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

void Algoritmodeluhn (uint8 *pu8Cadena, uint8 SizeOfList);
void main ( void ) {

    uint8 NumerosDeTarjeta[16] = { 4, 1, 6, 8, 8, 1, 8, 8, 4, 4, 4, 4, 7, 1, 1, 0};
    uint8 i;
    uint8 Suma=0;
    uint8 Validacion;
    Algoritmodeluhn( &NumerosDeTarjeta[0], 16 );
    
    for ( i=0 ; i<16 ; i++)
    printf(" %d ", NumerosDeTarjeta[i]);

    for( i=0 ; i<16 ; i++)
    Suma += NumerosDeTarjeta[i];

    Validacion = Suma % 10;

    if ( Validacion == 1){
        printf("No es valida\n");
    }
    else {
        printf("\nNumeros Validos: \nLa suma es %d", Suma);
    }
}

void Algoritmodeluhn (uint8 *pu8Cadena, uint8 SizeOfList) {
    
    uint8 u8Reciduo;
    uint8 u8NumerosPar;
    uint8 u8suma;
    uint8 NumeroDeVerf;
    uint8 i=0;
    while (SizeOfList != 0) {
        
        u8NumerosPar = SizeOfList % 2;
        
        if ( u8NumerosPar == 0) {
            
            *pu8Cadena += *pu8Cadena;

            if( *pu8Cadena >= 10) {
            u8Reciduo = 1 + ( *pu8Cadena % 10 );
            *pu8Cadena = u8Reciduo;
            }
            else {

            }

        }
        else {
            //nada
        }
        
        u8suma += *pu8Cadena;
        SizeOfList--;
        *pu8Cadena++;
        i++;
        
    }
    *pu8Cadena--;
    *pu8Cadena = u8suma % 10;
}