#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MINE.h"

tstMax_X_COORDS Plano[SIZE_OF_BOARD] = TABLERO ;
tstMax_X_COORDS Entradas[SIZE_OF_BOARD] = ENTRY;
tstMax_X_COORDS helper[SIZE_OF_BOARD] = ENTRY  ;
void main ( void )
{   
    uint8 u8NuevaPartida = BOOLEAN_TRUE;
    uint8 i,j, num, X, Y;
    uint8 u8INPUT_X = vacio, u8INPUT_Y = vacio;
    uint8 u8NumerosArriba, u8NumerosAbajo;
    uint8 u8NumeroCentral_X, u8NumeroCentral_Y;
    uint8 u8NumerosIzquierda, u8NumerosDerecha; 
    uint8 u8Seguir_jugando = BOOLEAN_TRUE;
    
    uint8 u8CicloBombs = BOOLEAN_TRUE;
    uint8 u8NumeroPosicion_X = vacio;
    uint8 u8NumeroPosicion_Y = vacio;
    uint8 u8Dificultad = BOOLEAN_TRUE;
    uint8 u8CantidadBombas = FACIL;
    uint8 u8Accion_D_B;
    uint8 u8WinCondition = vacio;

    //Dificultad
    printf("Ingrese la dificultad\n");
    printf("1) Facil        --> 10 bombas\n");
    printf("2) Intermedio   --> 20 bombas\n");
    printf("3) Dificil      --> 30 bombas\n");
    scanf("%d", &u8Dificultad);

    if ( u8Dificultad == SET_DIF_FACIL)
    {
        u8CantidadBombas = FACIL;
    }
    else if ( u8Dificultad == SET_DIF_INTERMEDIO)
    {
        u8CantidadBombas = INTERMEDIO;
    }
    else if ( u8Dificultad == SET_DIF_DIFICIL )
    {
        u8CantidadBombas = DIFICIL;
    }
    else
    {
        printf("Dificultad invalida: Dificultad default => FACIL\n");
        u8CantidadBombas = FACIL;
    }


    //Generador de Bombas
    //printf("\nBombs\n");
    srand(time(0));
    while ( u8CicloBombs <= u8CantidadBombas  )
    {   
        X = printRandoms(LOW_LIMIT_BOMB,MAX_LIMIT_BOMB,UNO);
        Y = printRandoms(LOW_LIMIT_BOMB,MAX_LIMIT_BOMB,UNO);

        if ( Entradas[Y].u8Cordenadas_X[X] == BOMB )
        {
            //Nada
        }
        else 
        {
            Entradas[Y].u8Cordenadas_X[X] = BOMB;
            u8CicloBombs++;
        }
    }
    //Numeros del tablero
    for ( j = vacio ; j < SIZE_OF_BOARD ; j++) 
        {

            for ( i = vacio ; i < SIZE_OF_BOARD ; i++ )
            {  

                if ( Entradas[j].u8Cordenadas_X[i] == BOMB )
                {
                    u8NumerosArriba = j - CAMBIO_COORD;
                    u8NumerosIzquierda = i - CAMBIO_COORD;
                    u8NumerosDerecha = i + CAMBIO_COORD;
                    u8NumerosAbajo = j + CAMBIO_COORD;
                    u8NumeroCentral_X = i;
                    u8NumeroCentral_Y = j;
                    //Arriba Izquierda
                    if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] > LOW_LIMIT_ASCII && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Arriba Centro
                    if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] > LOW_LIMIT_ASCII && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Arriba Derecha
                    if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] > LOW_LIMIT_ASCII && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Abajo Izquierda
                    if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] > LOW_LIMIT_ASCII && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Abajo Centro
                    if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] > LOW_LIMIT_ASCII && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Abajo Derecha
                    if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] > LOW_LIMIT_ASCII && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                    //Centro Izquierda
                    if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] > LOW_LIMIT_ASCII && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] += HAY_BOMB_PLUS; 
                    }
                    else 
                    {
                        //Nada
                    }
                    //Centro Derecha
                    if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] > LOW_LIMIT_ASCII && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] < MAX_LIMIT_ASCII)
                    {
                        Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] += HAY_BOMB_PLUS ;
                    }
                    else 
                    {
                        //Nada
                    }
                }
            }
        }
    // //Imprimir bombas *Solo para pruebas*
    //  for ( j = 0 ; j < 17 ; j++)
    //  {
    //      for ( i = 0 ; i < 17 ; i++ )
    //      {   
    //          printf("%c ", Entradas[j].u8Cordenadas_X[i]);
    //      }
    //      printf("\n");
    //  }

    //Bucle de juego
    while ( u8Seguir_jugando == BOOLEAN_TRUE )
    {   
        u8NumeroPosicion_Y = UNO;
        printf("  1 2 3 4 5 6 7 8 9 A B C D E F\n");
        for ( j = vacio ; j < SIZE_OF_BOARD ; j++)
        {   
            for ( i = vacio ; i < SIZE_OF_BOARD ; i++ )
            {   
                printf("%c ", Plano[j].u8Cordenadas_X[i]);

                if ( Plano[j].u8Cordenadas_X[i] == BORDE_LATERAL && i == LIMIT_FOR_Y_BOARD)
                {
                    printf("%d", u8NumeroPosicion_Y);
                    u8NumeroPosicion_Y++;
                }
            }
            printf("\n");
        }
            
        printf("1)Descubrir\n2)Bandera\n3)Quitar Bandera\n");
        scanf("%d", &u8Accion_D_B);
        printf("ingresa la coordenada en Y\n");
        fflush(stdin);
        scanf("%d", &u8INPUT_Y);
        printf("ingresa la coordenada en X\n");
        scanf("%d", &u8INPUT_X);
        if ( u8INPUT_Y > SEGURO_INPUTS || u8INPUT_Y == vacio || u8INPUT_X > SEGURO_INPUTS || u8INPUT_X == vacio)
        {
            printf("Y y X deben de estar entre 1 y 15\n");
        }
        else
        {
            //Descubrir
            if ( u8Accion_D_B == DESCRUBRIR )
            {   
                Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X];

                //Perdiste
                if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == BOMB )
                {   
                    u8Seguir_jugando = BOOLEAN_FALSE;
                    printf("Perdiste \n");
                    printf("    X   X\n\n");
                    printf("   -------\n");

                    //Mostrar Bombas en Tablero
                    for ( j = vacio ; j < SIZE_OF_BOARD ; j++ )
                    {   
                        for ( i = vacio ; i < SIZE_OF_BOARD ; i++ )
                        {
                            if ( Entradas[j].u8Cordenadas_X[i] == BOMB )
                            {
                                Plano[j].u8Cordenadas_X[i] = Entradas[j].u8Cordenadas_X[i];
                            }
                        }
                    }
                    //Print Tablero con Bombas
                    for ( j = vacio ; j < SIZE_OF_BOARD ; j++)
                    {
                        for ( i = vacio ; i < SIZE_OF_BOARD ; i++ )
                        {   
                            if ( Plano[j].u8Cordenadas_X[i] == BOMB )
                            {   
                                printf("%c ", BOMB);
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
                else
                {   
                    //Nada
                }
            }
            //Poner Bandera
            else if ( u8Accion_D_B == PUT_FLAG )
                {   
                    if ( Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == CASILLAS )
                    {
                        Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = BANDERITA;
                    }
                    else
                    {
                        printf("\nEsta casilla ya esta revelada no puedes poner BANDERA\n");
                    }
                    
                    if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == BOMB && Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] != BANDERITA)
                    {
                        u8WinCondition++;
                    }
                }
            //Quitar Bandera
            else if ( u8Accion_D_B == REMOVE_FLAG )
                {   
                    if ( Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == BANDERITA )
                    {
                        Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = CASILLAS;

                        if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == BOMB )
                        {
                            u8WinCondition--;
                        }
                    }
                    else
                    {
                        printf("\nAqui no hay Bandera\n");
                    }
                }
            //Accion invalida
            else 
            {
                printf("Accion Invalida\n");
            }
            //Contador de Bombas para ganar
            if ( u8WinCondition == u8CantidadBombas )
            {   
                printf("\n GANASTE ");
                u8Seguir_jugando = BOOLEAN_FALSE;
            }
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

// Esta funcion solo se manda a llamar en coords que son 0
void Reveal0 ( uint8 u8_X, uint8 u8_Y )
{   

    // marcar que ya se paso en esta casilla
    Plano[u8_Y].u8Cordenadas_X[u8_X] = CERO;
    helper[u8_Y].u8Cordenadas_X[u8_X] = BOOLEAN_TRUE;

    //Arriba
    if ( Entradas[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X, u8_Y - CAMBIO_COORD);
    }
    else 
    {
        Plano[u8_Y-CAMBIO_COORD].u8Cordenadas_X[u8_X] = Entradas[u8_Y-CAMBIO_COORD].u8Cordenadas_X[u8_X];
    }
    //Arriba  Derecha
    if ( Entradas[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] == CERO && helper[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + CAMBIO_COORD, u8_Y - CAMBIO_COORD );
    }
    else
    {
        Plano[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] = Entradas[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD];
    }
    //Arriba Izquierda
    if ( Entradas[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] == CERO && helper[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X - CAMBIO_COORD, u8_Y - CAMBIO_COORD );
    }
    else
    {
        Plano[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] = Entradas[u8_Y - CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD];
    }
    
    //Abajo
    if ( Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X, u8_Y + CAMBIO_COORD);
    }
    else
    {
        Plano[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X] = Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X];
    }
    
    //Abajo  Derecha
    if ( Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] == CERO && helper[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + CAMBIO_COORD, u8_Y + CAMBIO_COORD );
    }
    else
    {
        Plano[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD] = Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X + CAMBIO_COORD];
    }
    
    //Abajo Izquierda
    if ( Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] == CERO && helper[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X - CAMBIO_COORD, u8_Y + CAMBIO_COORD );
    }
    else
    {
        Plano[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD] = Entradas[u8_Y + CAMBIO_COORD].u8Cordenadas_X[u8_X - CAMBIO_COORD];
    }
    
    //Izquierda
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X - CAMBIO_COORD] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X - CAMBIO_COORD] != BOOLEAN_TRUE ) 
    {
        Reveal0 ( u8_X - CAMBIO_COORD, u8_Y );
    }
    else
    {
        Plano[u8_Y].u8Cordenadas_X[u8_X - CAMBIO_COORD] = Entradas[u8_Y].u8Cordenadas_X[u8_X - CAMBIO_COORD];
    }
    
    //Derecha
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X + CAMBIO_COORD] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X + CAMBIO_COORD] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + CAMBIO_COORD, u8_Y );
    }
    else
    {
        Plano[u8_Y].u8Cordenadas_X[u8_X + CAMBIO_COORD] = Entradas[u8_Y].u8Cordenadas_X[u8_X + CAMBIO_COORD];
    }
    
}
