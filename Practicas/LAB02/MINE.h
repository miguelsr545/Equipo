
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

typedef struct 
{
    uint8 u8Cordenadas_X[17];
    
}tstMax_X_COORDS;

#define BANDERITA           193
#define CASILLAS            254
#define BOMB                88
#define BORDE_LATERAL       186
#define BORDE_HORIZONTAL    205
#define E_SUP_IZQ           201
#define E_SUP_DER           187
#define E_INF_IZQ           200
#define E_INF_DER           188
#define CERO                48
#define FACIL               10
#define INTERMEDIO          20
#define DIFICIL             30
#define BOOLEAN_TRUE        1
#define BOOLEAN_FALSE       0

#define INPUT_1             49
#define INPUT_2             50
#define INPUT_3             51            
#define INPUT_4             52
#define INPUT_5             53
#define INPUT_6             54
#define INPUT_7             55
#define INPUT_8             56
#define INPUT_9             57
#define INPUT_10            65
#define INPUT_11            66
#define INPUT_12            67
#define INPUT_13            68
#define INPUT_14            69
#define INPUT_15            70

// typedef struct 
// {
//     uint8 u8Cordenadas_X[17];
    
// }tstEntry;
typedef struct
{
    uint8 u8GANASTE[81];
}WinStruct;
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

// #define GANASTE         \
// {                       \
//     {0,E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0, 0,E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER, 0, 0, 0, 0,E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0, 0,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,╦,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0,E_SUP_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0, 0,BORDE_LATERAL},               \        {0,BORDE_LATERAL,0,0,0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,╠,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL},                                                                                                                                                                                                                                                                                                                                                                                                                                                          \
//     {0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL},                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                \
//     {0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER, 0, 0, 0,╠,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,185, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,╠,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,185, 0, 0, 0, 0,E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_SUP_DER, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,╠,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0, 0, 0,BORDE_LATERAL},                                                                                                                                                                                            \
//     {0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL},                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     \
//     {0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0 },                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                \
//     {0,E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER, 0, 0, 0, 0, 0, 0, 0,BORDE_LATERAL, 0, 0, 0, 0, 0, 0, 0,E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL, 0, 0, 0, 0,█},                                                                                                                                                                                                                                                       \
// }
// printf(" ,╔,═,═,═,═,═,═,═, , , , ,╔,═,═,═,═,═,═,╗, , , ,║, , , , , , , , , , , ,╔,═,═,═,═,═,═,╗, , , , ,╔,═,═,═,═,═,═, , , , ,═,═,═,═,╦,═,═,═,═, , , ,╔,═,═,═,═,═,═, , , , ,║\n");
// printf(" ,║, , , , , , , , , , , ,║, , , , , , ,║, , , ,╠,═,═,═,═,═,═,╗, , , , ,║, , , , , , ,║, , , , ,║, , , , , , , , , , , , , , ,║, , , , , , , ,║, , , , , , , , , , ,║\n");
// printf(" ,║, , , , , , , , , , , ,║, , , , , , ,║, , , ,║, , , , , , ,║, , , , ,║, , , , , , ,║, , , , ,║, , , , , , , , , , , , , , ,║, , , , , , , ,║, , , , , , , , , , ,║\n");
// printf(" ,║, , , , ,═,═,═,╗, , , ,╠,═,═,═,═,═,═,╣, , , ,║, , , , , , ,║, , , , ,╠,═,═,═,═,═,═,╣, , , , ,╚,═,═,═,═,═,═,╗, , , , , , , ,║, , , , , , , ,╠,═,═,═,═,═, , , , , ,║\n");
// printf(" ,║, , , , , , , ,║, , , ,║, , , , , , ,║, , , ,║, , , , , , ,║, , , , ,║, , , , , , ,║, , , , , , , , , , , ,║, , , , , , , ,║, , , , , , , ,║, , , , , , , , , , ,║\n");
// printf(" ,║, , , , , , , ,║, , , ,║, , , , , , ,║, , , ,║, , , , , , ,║, , , , ,║, , , , , , ,║, , , , , , , , , , , ,║, , , , , , , ,║, , , , , , , ,║, , , , , , , , , , , \n");
// printf(" ,╚,═,═,═,═,═,═,═,╝, , , ,║, , , , , , ,║, , , ,║, , , , , , ,║, , , , ,║, , , , , , ,║, , , , ,═,═,═,═,═,═,═,╝, , , , , , , ,║, , , , , , , ,╚,═,═,═,═,═,═, , , , ,█\n");