#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

//Borde
#define BORDE_LATERAL       186
#define BORDE_HORIZONTAL    205
#define E_SUP_IZQ           201
#define E_SUP_DER           187
#define E_INF_IZQ           200
#define E_INF_DER           188
#define SIZE_PARKING        17
#define CASILLAS            254

#define LIMITE_INF          1
#define LIMITE_SUP          15

#define UNO                 1
#define COCHE               88
#define PRECIO              20

#define TRUE                1
#define FALSE               0

typedef struct 
{
    uint8 u8Cordenadas_X[SIZE_PARKING];

}tstMax_X_COORDS;


typedef struct 
{
    uint8 u8Tiempo[SIZE_PARKING];

}tstTime;

typedef enum
{
    Meter = 1,
    Sacar,
    VerDisponibles,
    PasarHora
}enmAcciones;

#define TABLERO     \
{					\
    {E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER},             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {BORDE_LATERAL,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER},             \
}

#define TABLERO_TIEMPO     \
{					\
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},                                                                                                                             \
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},             \
}


void FuncPark( void );
void MeterCoche ( void );
void SacarCoche ( void );
void MostrarEspacios ( void );
uint8 printRandoms (uint8 lower, uint8 upper,  uint8 count);
void TimeSlot ( void );
