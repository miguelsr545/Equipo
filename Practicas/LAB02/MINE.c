#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "MINE.h"

tstMax_X_COORDS Plano[17] = TABLERO;
tstMax_X_COORDS Entradas[17] = ENTRY;
tstMax_X_COORDS helper[17] = ENTRY;
void main ( void )
{
    uint8 i,j, num, X, Y;
    uint8 u8INPUT_X = 3, u8INPUT_Y = 0;
    uint8 u8NumerosArriba, u8NumerosAbajo;
    uint8 u8NumeroCentral_X, u8NumeroCentral_Y;
    uint8 u8NumerosIzquierda, u8NumerosDerecha; 
    uint8 u8Seguir_jugando = 1;
    uint8 u8Reveal_Arriba = 1, u8Reveal_Abajo = 1;
    uint8 u8Reveal_Derecha = 1, u8Reveal_Izquierda = 1;
    uint8 u8Apoyo;
    uint8 u8Dificultad = 1;
    uint8 u8CantidadBombas = FACIL;
    uint8 C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0, C7 = 0, C8 = 0;
      

    //Dificultad
    /*
    printf("Ingrese la dificultad\n");
    printf("1) Facil --> 10 bombas\n");
    printf("2) Intermedio --> 20 bombas\n");
    printf("3) Dificil --> 30 bombas ");
    scanf("%d", &u8Dificultad);

    if ( u8Dificultad == 1)
    {
        u8CantidadBombas = FACIL;
    }
    else if ( u8Dificultad == 2)
    {
        u8CantidadBombas = INTERMEDIO;
    }
    else if ( u8Dificultad == 3 )
    {
        u8CantidadBombas = DIFICIL;
    }
    else
    {
        printf("Dificultad invalida: Dificultad default => FACIL");
        u8CantidadBombas = FACIL;
    }
    */

    //Generador de Bombas
    printf("\nBombs\n");
    srand(time(0));
    for ( i = 0 ; i < u8CantidadBombas ; i++ )
    {   
        X = printRandoms(1,15,1);
        Y = printRandoms(1,15,1);
        Entradas[Y].u8Cordenadas_X[X] = 88;
        
    }
    //Numeros del tablero
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
            printf("%c ", Entradas[j].u8Cordenadas_X[i]);
        }
        printf("\n");
    }

    //Bucle de juego
    while ( u8Seguir_jugando == 1 )
    {   
        for ( j = 0 ; j < 17 ; j++)
        {
            for ( i = 0 ; i < 17 ; i++ )
            {   
                printf("%c ", Plano[j].u8Cordenadas_X[i]);
            }
            printf("\n");
        }
        printf("ingresa la coordenada en Y\n");
        fflush(stdin);
        scanf("%d", &u8INPUT_Y);
        printf("ingresa la coordenada en X\n");
        scanf("%d", &u8INPUT_X);
        //printf("\n<%d,%d>", u8INPUT_X, u8INPUT_Y);
        //printf("|%d|\n", Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X]);

        Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X];

        //Perdiste
        if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == 'X' )
        {   
            u8Seguir_jugando = 0;
            printf("Perdiste we\n");

            //Mostrar Bombas en Tablero
            for ( j = 0 ; j < 17 ; j++ )
            {   
                for ( i = 0 ; i < 17 ; i++ )
                {
                    if ( Entradas[j].u8Cordenadas_X[i] == 88 )
                    {
                        Plano[j].u8Cordenadas_X[i] = Entradas[j].u8Cordenadas_X[i];
                    }
                }
            }
            //Print Tablero con Bombas
            for ( j = 0 ; j < 17 ; j++)
            {
                for ( i = 0 ; i < 17 ; i++ )
                {   
                    if ( Plano[j].u8Cordenadas_X[i] == 88 )
                    {   
                        printf("X ");
                    }
                    else 
                    {
                        printf("%c ", Plano[j].u8Cordenadas_X[i]);
                    }
                }
                printf("\n");
            }
        }
        else if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == CERO )
        {      
            Reveal0( u8INPUT_X, u8INPUT_Y );
        }
    }
}
uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count) 
{ 
    uint8 i; 
    uint8 num;
    num = (rand() % (upper - lower + 1)) + lower;  
    return num;
} 

// Esta funcion solo se manda a llamar en coords que son 0.
void Reveal0 ( uint8 u8_X, uint8 u8_Y )
{   

    // marcar que ya se paso en esta casilla
    Plano[u8_Y].u8Cordenadas_X[u8_X] = 0;
    helper[u8_Y].u8Cordenadas_X[u8_X] = 1;

    //Arriba
    if ( Entradas[u8_Y-1].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y-1].u8Cordenadas_X[u8_X] != 1 )
    {
        Reveal0 ( u8_X, u8_Y - 1);
    }
    //Arriba  Derecha
    if ( Entradas[u8_Y - 1].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y - 1].u8Cordenadas_X[u8_X + 1] != 1 )
    {
        Reveal0 ( u8_X + 1, u8_Y - 1 );
    }
    //Arriba Izquierda
    if ( Entradas[u8_Y - 1].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y - 1].u8Cordenadas_X[u8_X - 1] != 1 )
    {
        Reveal0 ( u8_X - 1, u8_Y - 1 );
    }

    //Abajo
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X] != 1 )
    {
        Reveal0 ( u8_X, u8_Y + 1);
    }
    //Abajo  Derecha
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X + 1] != 1 )
    {
        Reveal0 ( u8_X + 1, u8_Y + 1 );
    }
    //Abajo Izquierda
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X - 1] != 1 )
    {
        Reveal0 ( u8_X - 1, u8_Y + 1 );
    }

    //Izquierda
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X - 1] != 1 ) 
    {
        Reveal0 ( u8_X - 1, u8_Y );
    }
    //Derecha
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X + 1] != 1 )
    {
        Reveal0 ( u8_X + 1, u8_Y );
    }
}
