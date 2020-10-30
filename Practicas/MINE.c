#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MINE.h"

tstMax_X_COORDS Plano[17] = TABLERO;
void main ( void )
{
    uint8 i,j, num, X, Y, u8INPUT_X = 3, u8INPUT_Y = 0, u8NumerosArriba, u8NumerosIzquierda, u8NumerosDerecha, u8NumerosAbajo, u8NumeroCentral_X, u8NumeroCentral_Y;
    uint8 Ar, Ab; 
    tstEntry Entradas[17] = ENTRY;  
    
    for ( j = 0 ; j < 17 ; j++)
    {
        for ( i = 0 ; i < 17 ; i++ )
        {   
            printf(" %c ", Plano[j].u8Cordenadas_X[i]);
        }
        printf("\n");
    }

    printf("\nBombs\n");
    //srand(time(0));
    for ( i = 0 ; i < 11 ; i++ )
    {   
        X = printRandoms(1,15,1);
        Y = printRandoms(1,15,1);
        Entradas[Y].u8Cordenadas_X[X] = 88;
        
    }

    for ( j = 0 ; j < 17 ; j++)
    {

        for ( i = 0 ; i < 17 ; i++ )
        {  

            if ( Entradas[j].u8Cordenadas_X[i] == 88 )
            {
                u8NumerosArriba = j - 1;
                u8NumerosIzquierda = i - 1;
                u8NumerosDerecha = i + 1;
                u8NumerosAbajo = j + 1;
                u8NumeroCentral_X = i;
                u8NumeroCentral_Y = j;
                //Arriba Izquierda
                if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] < 58)
                {
                    Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Arriba Centro
                if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] < 58)
                {
                    Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Arriba Derecha
                if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] < 58)
                {
                    Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Abajo Izquierda
                if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] < 58)
                {
                    Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Abajo Centro
                if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] < 58)
                {
                    Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Abajo Derecha
                if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] < 58)
                {
                    Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] += 1 ;
                }
                else 
                {
                    //Nada
                }
                //Centro Izquierda
                if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] < 58)
                {
                    Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] += 1; 
                }
                else 
                {
                    //Nada
                }
                //Centro Derecha
                if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] < 58)
                {
                    Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] += 1 ;
                }
                else 
                {
                    //Nada
                }
            }
        }
    }
    
    for ( j = 0 ; j < 17 ; j++)
    {

        for ( i = 0 ; i < 17 ; i++ )
        {   
            printf(" %c ", Entradas[j].u8Cordenadas_X[i]);
        }
        printf("\n");
    }


    printf("ingresa la coordenada en Y\n");
    fflush(stdin);
    scanf("%d", &u8INPUT_Y);
    printf("ingresa la coordenada en X\n");
    scanf("%d", &u8INPUT_X);
    //printf("\n<%d,%d>", u8INPUT_X, u8INPUT_Y);
    printf("%d\n", Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X]);

    if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == 'X' )
    {
        printf("Perdiste we\n");
    }
}

uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count) 
{ 
    uint8 i; 
    uint8 num;
    num = (rand() % (upper - lower + 1)) + lower;  
    return num;
} 


