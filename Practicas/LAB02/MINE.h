
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;



//Simbolos de Juego
#define BANDERITA           244
#define CASILLAS            254
#define BOMB                88
#define DESCRUBRIR          1
#define PUT_FLAG            2
#define REMOVE_FLAG         3

//Borde
#define BORDE_LATERAL       186
#define BORDE_HORIZONTAL    205
#define E_SUP_IZQ           201
#define E_SUP_DER           187
#define E_INF_IZQ           200
#define E_INF_DER           188

//Numeros
#define CERO                48
#define BOOLEAN_TRUE        1
#define BOOLEAN_FALSE       0
#define SIZE_OF_BOARD       17
#define vacio               0
#define LOW_LIMIT_BOMB      1
#define CAMBIO_COORD        1
#define UNO                 1
#define MAX_LIMIT_BOMB      15
#define SEGURO_INPUTS       15
#define LOW_LIMIT_ASCII     47
#define MAX_LIMIT_ASCII     58
#define HAY_BOMB_PLUS       1
#define LIMIT_FOR_Y_BOARD   16

//Dificultades
#define FACIL               10
#define INTERMEDIO          20
#define DIFICIL             30
#define SET_DIF_FACIL       1
#define SET_DIF_INTERMEDIO  2
#define SET_DIF_DIFICIL     3

typedef struct 
{
    uint8 u8Cordenadas_X[SIZE_OF_BOARD];
    
}tstMax_X_COORDS;

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

#define ENTRY       \
{					\
    {E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER},       \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {BORDE_LATERAL,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER},       \
}

uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count);
void Reveal0(  uint8 u8_X, uint8 u8_Y );
