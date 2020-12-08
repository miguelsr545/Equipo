#include "types.h"

tstMax_X_COORDS Park[SIZE_PARKING] = TABLERO;
tstTime Time_Slot[SIZE_PARKING] = TABLERO_TIEMPO;

void main ( void )
{   
    FuncPark();
}

void FuncPark ( void )
{   
    while ( TRUE )
    {
        uint8 u8Accion_Park;
        printf("Bienvenido al estacionamiento\n");
        printf("1) Ingresar auto\n");
        printf("2) Sacar auto\n");
        printf("3) Ver espacios Disponibles\n");
        printf("4) Pasar 1 hora");
        scanf("%d", &u8Accion_Park);

        if ( u8Accion_Park == Meter )
        {
            MeterCoche ( );
        }
        else if ( u8Accion_Park == Sacar )
        {
            SacarCoche ( );
        }
        else if ( u8Accion_Park == VerDisponibles )
        {
            MostrarEspacios ( );
        }
        else if ( u8Accion_Park == PasarHora )
        {
            TimeSlot ( );
        }
        
        else 
        {
            printf("Accion invalida");
        }
    }
}

void MeterCoche ( void )
{   
    uint8 u8X;
    uint8 u8Y;
    uint8 u8Seguro = TRUE;
    while ( u8Seguro == TRUE )
    {
        srand(time(NULL));
        u8X = printRandoms(LIMITE_INF,LIMITE_SUP,UNO);
        u8Y = printRandoms(LIMITE_INF,LIMITE_SUP,UNO);

        if ( Park[u8Y].u8Cordenadas_X[u8X] == COCHE )
        {
            //Nada
        }
        else 
        {
            Park[u8Y].u8Cordenadas_X[u8X] = COCHE;
            u8Seguro = FALSE;
        }
        
    }
    printf("Se estaciono en %d,%d\n", u8X, u8Y);
    Time_Slot[u8Y].u8Tiempo[u8X] = NULL;
}

void SacarCoche ( void )
{   
    uint8 u8XCoord;
    uint8 u8YCoord;
    uint16 u16Cobro;

    MostrarEspacios();
    printf("En que posicion de Y\n");
    scanf("%d", &u8YCoord);
    //printf("x=%d\n", u8XCoord);
    printf("En que posicion de X\n");
    scanf("%d", &u8XCoord);
    //printf("Y=%d\n", u8YCoord);
    Park[u8YCoord].u8Cordenadas_X[u8XCoord] = CASILLAS;
    //printf("x=%d\n", u8XCoord);
    //printf("Y=%d\n", u8YCoord);
    u16Cobro = Time_Slot[u8YCoord].u8Tiempo[u8XCoord]*PRECIO;
    printf("Debe de pagar $%d\n", u16Cobro);
}

void MostrarEspacios ( void )
{   
    uint8 u8j;
    uint8 u8i;
    for ( u8j = 0 ; u8j < SIZE_PARKING ; u8j++)
    {   
        for ( u8i = 0 ; u8i < SIZE_PARKING ; u8i++ )
        {   
            printf("%c ", Park[u8j].u8Cordenadas_X[u8i]);
        }
        printf("\n");
    }
}

uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count) 
{ 
    uint8 u8i; 
    uint8 num;
    num = (rand() % (upper - lower + UNO)) + lower;  
    return num;
} 

void TimeSlot ( void )
{   
    uint8 u8j;
    uint8 u8i;
    for ( u8j = 1 ; u8j < 16 ; u8j++ )
    {
        for ( u8i = 1 ; u8i < 16 ; u8i++ )
        {
            Time_Slot[u8j].u8Tiempo[u8i]++;
        }
    }
    // for ( u8j = 0 ; u8j < SIZE_PARKING ; u8j++)
    // {   
    //     for ( u8i = 0 ; u8i < SIZE_PARKING ; u8i++ )
    //     {   
    //         printf("%d ", Time_Slot[u8j].u8Tiempo[u8i]);
    //     }
    //     printf("\n");
    // }
}