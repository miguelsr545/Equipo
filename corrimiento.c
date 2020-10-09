#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
/*Ejemplo*/
int main()
{
    uint32 u32NumeroBits = 0;
    uint32 u32OperacionVar = 0;
    uint32 u32Corrimiento = 0;
    uint32 u32Resultado = 0;
    while ( 1 ) {
    printf("Ingrese el numero de bits\n");
    scanf("%d", &u32NumeroBits);
    
    if (u32NumeroBits == 8 || u32NumeroBits == 16 || u32NumeroBits == 32) {

        printf("1) And \n2) OR \n3) XOR\n");
        scanf("%d", &u32OperacionVar);
        if ( u32OperacionVar >= 1 && u32OperacionVar <= 3 ) {

            printf("Ingrese el corrimiento\n");
            scanf("%d", &u32Corrimiento);

            if ( u32OperacionVar == 1 ) {

                u32Resultado &=~ ( 1 << u32Corrimiento );

            }
            else if (u32OperacionVar == 2) {

                u32Resultado |= (1 << u32Corrimiento);

            }
            else {

                u32Resultado ^= (1 << u32Corrimiento);

            }

            printf("\nResultado %d \n", u32Resultado);
        } else {
            printf("El numero debe de ser entre 1 y 3\n\n");
        }
    } else {
        
        printf("El tamanno debe de ser 8, 16 o 32\n\n");

    }
    }
    return 0;
}