#include <stdio.h>
#include "GENFUN.h"
#include <stdlib.h>
void main ( void ) {

    //  a ---> A
    uint8 au8TestArray[12] = "hello world";
    printf("\n          | Minusculas a Mayusculas | \n\nTexto antes de MAYUS: %s", au8TestArray);
    GENFUN_CapsOn( &au8TestArray[0], 12 );
    printf("\nTexto con MAYUS: %s\n\n", au8TestArray);


    // A ----> a
    uint8 au8Text_UpC_LowC[12] = "HELLO WORLD";
    printf("\n\n            | Mayusculas a Minusculas | \n\nTexto antes de MIN: %s", au8Text_UpC_LowC);
    GENFUN_CapsOff ( &au8Text_UpC_LowC[0], 12 );
    printf("\nTexto con MIN: %s\n\n", au8Text_UpC_LowC);


    // Ocurrencia
    uint8 u8Letra_A_Target; 
    uint8 au8Texto_Ocurrencia[12] = "hello world";
    uint8 u8Se_Repite;
    printf("            | Ocurrencia |\n\n");
    printf("Que letra quieres buscar en   < %s >\n", au8Texto_Ocurrencia);
    gets(&u8Letra_A_Target);
    u8Se_Repite = GENFUN_u8Ocurrencia ( &au8Texto_Ocurrencia[0], u8Letra_A_Target, 12 );
    printf("\nLa Letra  %c  se repite  %d  veces\n\n", u8Letra_A_Target, u8Se_Repite);


    //Promedio
    uint8 u8Cadena_A_Sumar[5] = { 71, 6 , 45 , 86,59 };
    uint8 Posicion_For; //variable de apoyo
    uint16 u16Promedio;
    printf("            | Promedio |\n\n");
    printf("El promedio de la cadena <<");
    for ( Posicion_For = 0 ; Posicion_For < 5 ; Posicion_For ++) {
        printf(" %d ", u8Cadena_A_Sumar[Posicion_For]);
    }
    u16Promedio = GENFUN_u8GetAverage ( &u8Cadena_A_Sumar[0], 5 );
    printf(">> es %d", u16Promedio);


    //Cambiar Cadena 
    uint8 Cadena_A_Cambiar[12] = "hello world";
    uint8 Caracter_A_Incluir = 0;
    uint8 i; //variable de apoyo
    printf("\n\n            | Cambiar Caracter de la Cadena |\n\n");
    printf("Texto antes de ser cambiado %s\n", Cadena_A_Cambiar);
    printf("Que caracter quiere poner ");
    scanf("%c", &Caracter_A_Incluir);
    printf("Se cambiara la por %c ", Caracter_A_Incluir);
    GENFUN_u8MemSet ( &Cadena_A_Cambiar[0], Caracter_A_Incluir, 11 );
    printf("\nTexto despues de ser cambiado ");
    for (i=0 ; i<11 ; i++) {
        printf("%c",Cadena_A_Cambiar[i]);
    }
    //Sustituir una cadena por otra

    uint8 Cadena_Destino[12] = "hello world";
    uint8 Cadena_Cambiadora[12] = "dlrow olleh";
    printf("\n\n            | Cambiar cadena |\n\n ");
    printf("Cadena a cambiar < %s > -------->> %s\n\n", Cadena_Destino, Cadena_Cambiadora);
    GENFUN_u8MemCopy ( &Cadena_Destino[0], &Cadena_Cambiadora[0], 12);
    printf("Cadena despues de ser cambiada %s", Cadena_Destino);


    //Ordenar Cadena Ascendente
    
    uint8 Cadena_A_Ordenar[5] = {'6','9','3','4','8',};
    uint8 Cadena_Ordenada[5] = {0,0,0,0,0};
    printf("\n\n            | Ordenar Cadena |\n\nCadena Antes de Ordenar\n");
    for (i=0;i<5;i++) {
        printf("  %c  ", Cadena_A_Ordenar[i]);
    }
    GENFUN_vSortList ( &Cadena_A_Ordenar[0], &Cadena_Ordenada[0], 5);
    printf("\n\nCadena Ordenada\n\n");
    for (i=0;i<5;i++) {
        printf("  %c  ", Cadena_Ordenada[i]);
    }


    //Promedio entre caracteres
    uint8 DELAY_2;
    printf("\n\n            | Suavizar |\n");
    printf("Habra spam de 255 elementos introduce cualquier tecla para comenzar");
    gets(&DELAY_2);
    uint8 u8Cadena_Fuente[255];
    for (i=0 ; i<255 ;i++) {
        u8Cadena_Fuente[i] = printRandoms(15 , 70 , 1);
    }
    uint8 u8Cadena_Destino[255];
    GENFUN_vSoftSignal ( &u8Cadena_Fuente[0], &u8Cadena_Destino[0] );
    

    //Filtro maximos y minimos

    uint8 u8Cadena_Src[255];
    uint8 u8Cadena_Dest[255];
    uint8 DELAY_1;
    for (i=0 ; i<255 ;i++) {
        u8Cadena_Src[i] = printRandoms(10 , 120 , 1);
    }
    printf("\n\n            | Filtro Max y Min |\n");
    printf("Habra spam de 255 elementos introduce cualquier tecla para comenzar");
    gets(&DELAY_1);
    GENFUN_vFilterSignal ( &u8Cadena_Src[0], &u8Cadena_Dest[0], LIMITE_MAXIMO_FILTRO, LIMITE_MINIMO_FILTRO);

}



void GENFUN_CapsOn ( uint8 *pu8Src, uint8 u8SizeOfList ) {

    while ( u8SizeOfList > 0 ) {
        if ( *pu8Src > ASCII_LOW_THRESHOLD_OFF_ON && *pu8Src < ACII_HIGH_THRESHOLD_OFF_ON ) {
            *pu8Src -= ASCII_CONVERTION_FACTOR;

        }else {
            //No Ocurre Nada
        }
        *pu8Src++;
        u8SizeOfList--;

    }

}

void GENFUN_CapsOff ( uint8 *pu8Src, uint8 u8SizeOfList ) {
    while ( u8SizeOfList > 0 ) {
        if ( *pu8Src > ASCII_LIMITE_INFERIOR_MAYUSCULAS && *pu8Src < ASCII_LIMITE_SUPERIOR_MAYUSCULAS ) {
            *pu8Src += ASCII_CONVERTION_FACTOR;

        }else {
            //No Ocurre Nada
        }
        *pu8Src++;
        u8SizeOfList--;

    }
}

uint8 GENFUN_u8Ocurrencia ( uint8 *pu8Src, uint8 u8Letra_A_Target, uint8 u8SizeOfList ) {
    uint8 u8ocurrencia = 0 ;
    while ( u8SizeOfList != 0 ) {
        if ( *pu8Src != u8Letra_A_Target ) {
            
           //No ocurre nada 

        }
        else {

        u8ocurrencia++;

        }
        *pu8Src++;
        u8SizeOfList--;
    }
    return u8ocurrencia;

}

uint8 GENFUN_u8GetAverage ( uint8 *pu8Src, uint8 u8SizeOfList ) {
    
    uint16 u16Suma = 0;
    uint8 N_Elementos;
    N_Elementos = u8SizeOfList;
    while ( u8SizeOfList != 0 ) {

        u16Suma += *pu8Src;
        *pu8Src++;
        u8SizeOfList--;

    }
    
    return u16Suma/N_Elementos;
}

void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList) {

    while ( u8SizeOfList != 0) {
        *pu8Src = u8Char2Set;
        *pu8Src++;
        u8SizeOfList--;
    }
}

void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) {

    while ( u8SizeOfList != 0 ) {

        *pu8Src = *pu8Dest;
        *pu8Src++;
        *pu8Dest++;
        u8SizeOfList--;
    }

}

void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList) {

    uint8 i;        //   variables
    uint8 j;        //      de 
    uint8 temp;     //     apoyo
    uint8 Arreglo[5] = {0,0,0,0,0};
    

    for(i=0;i<6;i++) {
        Arreglo[i]= *pu8Src;
        pu8Src++;
    }
    for (i=0;i<6;i++)
        pu8Src--; 
    
    for (i=0 ; i<4 ; i++) {
        for ( j=i+1; j<5 ; j++) {
            if (Arreglo[i]>Arreglo[j]) {
                temp =Arreglo[i];
                Arreglo[i]=Arreglo[j];
                Arreglo[j]= temp;
            }
        }
    }
    for (i=0;i<5;i++) {
        *pu8Dest=Arreglo[i];
        *pu8Dest++;
    }
}

void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest) {

    uint8 i;  //  variables
    uint8 j; //    de apoyo
    uint8 Limite_De_Operacion = 0;
    while ( Limite_De_Operacion < 255 ) {
        i = *pu8Src; 
        *pu8Src++;
        j = *pu8Src;
        *pu8Dest = ( i+j ) / 2;
        Limite_De_Operacion++;
        printf("< %d + %d >", i,j);
        printf("  | %d |\n", *pu8Dest);
    }
    
    

}

void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal) {

    uint8 conversion_1;
    uint8 conversion_2;
    uint8 Limite_De_Elementos=0;
    while ( Limite_De_Elementos < 255 ) {
        
        if ( *pu8Src > LIMITE_MAXIMO_FILTRO ) {

            conversion_1 = *pu8Src - LIMITE_MAXIMO_FILTRO;
            *pu8Dest = *pu8Src - conversion_1;
            printf("\n| %d ----> %d |", *pu8Src, *pu8Dest);
        }else if ( *pu8Src < LIMITE_MINIMO_FILTRO ) {

            conversion_2 = LIMITE_MINIMO_FILTRO - *pu8Src;
            *pu8Dest = *pu8Src + conversion_2;
            printf("\n| %d ----> %d |", *pu8Src, *pu8Dest);
        }else {
            *pu8Dest = *pu8Src;
            printf("\n| Cumple %d  |", *pu8Dest);
        }
        
        *pu8Dest++;
        *pu8Src++;
        Limite_De_Elementos++;

    }
}

uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count) 
{  
    uint8 num;
    num = (rand() % (upper - lower + 1)) + lower; 
    //printf("%d \n", num); 
    return num;
} 