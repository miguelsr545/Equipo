#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "MINE.h"

tstMax_X_COORDS Plano[17] = TABLERO ;
tstMax_X_COORDS Entradas[17] = ENTRY;
tstMax_X_COORDS helper[17] = ENTRY  ;
void main ( void )
{   
    uint8 u8NuevaPartida = BOOLEAN_TRUE;

    while ( u8NuevaPartida == BOOLEAN_TRUE )
    {  
        uint8 i,j, num, X, Y;
        uint8 u8INPUT_X = 0, u8INPUT_Y = 0;
        uint8 u8NumerosArriba, u8NumerosAbajo;
        uint8 u8NumeroCentral_X, u8NumeroCentral_Y;
        uint8 u8NumerosIzquierda, u8NumerosDerecha; 
        uint8 u8Seguir_jugando = BOOLEAN_TRUE;
        
        uint8 u8CicloBombs = 1;
        uint8 u8NumeroPosicion_X = 0;
        uint8 u8NumeroPosicion_Y = 0;
        uint8 u8Dificultad = 1;
        uint8 u8CantidadBombas = FACIL;
        uint8 u8Accion_D_B;
        uint8 u8WinCondition = 0;

        //Dificultad
        printf("Ingrese la dificultad\n");
        printf("1) Facil        --> 10 bombas\n");
        printf("2) Intermedio   --> 20 bombas\n");
        printf("3) Dificil      --> 30 bombas\n");
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
            printf("Dificultad invalida: Dificultad default => FACIL\n");
            u8CantidadBombas = FACIL;
        }


        //Generador de Bombas
        printf("\nBombs\n");
        srand(time(0));
        while ( u8CicloBombs <= u8CantidadBombas  )
        {   
            X = printRandoms(1,15,1);
            Y = printRandoms(1,15,1);
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
        for ( j = 0 ; j < 17 ; j++) 
        {

            for ( i = 0 ; i < 17 ; i++ )
            {  

                if ( Entradas[j].u8Cordenadas_X[i] == BOMB )
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
            u8NumeroPosicion_Y = 1;
            printf("  1 2 3 4 5 6 7 8 9 A B C D E F\n");
            for ( j = 0 ; j < 17 ; j++)
            {   
                for ( i = 0 ; i < 17 ; i++ )
                {   
                    printf("%c ", Plano[j].u8Cordenadas_X[i]);

                    if ( Plano[j].u8Cordenadas_X[i] == BORDE_LATERAL && i == 16)
                    {
                        printf("%d", u8NumeroPosicion_Y);
                        u8NumeroPosicion_Y++;
                    }
                }
                printf("\n");
            }
            printf("1)Descurbir\n2)Bandera\n3)Quitar Bandera\n");
            scanf("%d", &u8Accion_D_B);
            printf("ingresa la coordenada en Y\n");
            fflush(stdin);
            scanf("%d", &u8INPUT_Y);
            printf("ingresa la coordenada en X\n");
            scanf("%d", &u8INPUT_X);

            //Descubrir
            if ( u8Accion_D_B == 1 )
            {   
                Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X];

                //Perdiste
                if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == 'X' )
                {   
                    u8Seguir_jugando = BOOLEAN_FALSE;
                    printf("Perdiste we\n");

                    //Mostrar Bombas en Tablero
                    for ( j = 0 ; j < 17 ; j++ )
                    {   
                        for ( i = 0 ; i < 17 ; i++ )
                        {
                            if ( Entradas[j].u8Cordenadas_X[i] == BOMB )
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
                            if ( Plano[j].u8Cordenadas_X[i] == BOMB )
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
                else
                {   
                    //Nada
                }
            }
            //Poner Bandera
            else if ( u8Accion_D_B == 2 )
            {   
                Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = BANDERITA;

                if ( Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] == BOMB && Entradas[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] != BANDERITA)
                {
                    u8WinCondition++;
                }
            }
            //Quitar Bandera
            else if ( u8Accion_D_B == 3 )
            {   
                Plano[u8INPUT_Y].u8Cordenadas_X[u8INPUT_X] = CASILLAS;
            }
            //Accion invalida
            else 
            {
                printf("Accion Invalida\n");
            }
            
            //Contador de Bombas para ganar
            if ( u8WinCondition == u8CantidadBombas )
            {   
                printf(" GANASTE ");
                u8Seguir_jugando = BOOLEAN_FALSE;
            }

        }
        printf("Seguir jugando\n");
        printf("1) Si\n");
        printf("2) No\n");
        scanf("%d", &u8NuevaPartida);
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
    Plano[u8_Y].u8Cordenadas_X[u8_X] = CERO;
    helper[u8_Y].u8Cordenadas_X[u8_X] = BOOLEAN_TRUE;

    //Arriba
    if ( Entradas[u8_Y - 1].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y - 1].u8Cordenadas_X[u8_X] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X, u8_Y - 1);
    }
    else 
    {
        Plano[u8_Y-1].u8Cordenadas_X[u8_X] = Entradas[u8_Y-1].u8Cordenadas_X[u8_X];
    }
    //Arriba  Derecha
    if ( Entradas[u8_Y - 1].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y - 1].u8Cordenadas_X[u8_X + 1] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + 1, u8_Y - 1 );
    }
    else
    {
        Plano[u8_Y - 1].u8Cordenadas_X[u8_X + 1] = Entradas[u8_Y - 1].u8Cordenadas_X[u8_X + 1];
    }
    //Arriba Izquierda
    if ( Entradas[u8_Y - 1].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y - 1].u8Cordenadas_X[u8_X - 1] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X - 1, u8_Y - 1 );
    }
    else
    {
        Plano[u8_Y - 1].u8Cordenadas_X[u8_X - 1] = Entradas[u8_Y - 1].u8Cordenadas_X[u8_X - 1];
    }
    
    //Abajo
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X, u8_Y + 1);
    }
    else
    {
        Plano[u8_Y + 1].u8Cordenadas_X[u8_X] = Entradas[u8_Y + 1].u8Cordenadas_X[u8_X];
    }
    
    //Abajo  Derecha
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X + 1] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + 1, u8_Y + 1 );
    }
    else
    {
        Plano[u8_Y + 1].u8Cordenadas_X[u8_X + 1] = Entradas[u8_Y + 1].u8Cordenadas_X[u8_X + 1];
    }
    
    //Abajo Izquierda
    if ( Entradas[u8_Y + 1].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y + 1].u8Cordenadas_X[u8_X - 1] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X - 1, u8_Y + 1 );
    }
    else
    {
        Plano[u8_Y + 1].u8Cordenadas_X[u8_X - 1] = Entradas[u8_Y + 1].u8Cordenadas_X[u8_X - 1];
    }
    
    //Izquierda
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X - 1] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X - 1] != BOOLEAN_TRUE ) 
    {
        Reveal0 ( u8_X - 1, u8_Y );
    }
    else
    {
        Plano[u8_Y].u8Cordenadas_X[u8_X - 1] = Entradas[u8_Y].u8Cordenadas_X[u8_X - 1];
    }
    
    //Derecha
    if ( Entradas[u8_Y].u8Cordenadas_X[u8_X + 1] == CERO && helper[u8_Y].u8Cordenadas_X[u8_X + 1] != BOOLEAN_TRUE )
    {
        Reveal0 ( u8_X + 1, u8_Y );
    }
    else
    {
        Plano[u8_Y].u8Cordenadas_X[u8_X + 1] = Entradas[u8_Y].u8Cordenadas_X[u8_X + 1];
    }
    
}
