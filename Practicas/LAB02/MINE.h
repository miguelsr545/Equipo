
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

typedef struct 
{
    uint8 u8Cordenadas_X[17];
    
}tstMax_X_COORDS;

#define BANDERITA           193
#define CASILLAS            254
#define BORDE_LATERAL       186
#define BORDE_HORIZONTAL    205
#define E_SUP_IZQ           201
#define E_SUP_DER           187
#define E_INF_IZQ           200
#define E_INF_DER           188
#define CERO                48
#define FACIL               10
#define INTERMEDIO          20
#define DIFICIL             32

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

#define TABLERO     \
{					\
    {E_SUP_IZQ,INPUT_1,INPUT_2,INPUT_3,INPUT_4,INPUT_5,INPUT_6,INPUT_7,INPUT_8,INPUT_9,INPUT_10,INPUT_11,INPUT_12,INPUT_13,INPUT_14,INPUT_15,E_SUP_DER},             \
    {INPUT_1,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_2,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_3,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_4,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_5,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_6,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_7,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_8,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_9,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_10,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_11,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_12,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_13,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_14,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {INPUT_15,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,CASILLAS,BORDE_LATERAL},                                                                                                                             \
    {E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER},             \
}

#define ENTRY       \
{					\
    {E_SUP_IZQ,INPUT_1,INPUT_2,INPUT_3,INPUT_4,INPUT_5,INPUT_6,INPUT_7,INPUT_8,INPUT_9,INPUT_10,INPUT_11,INPUT_12,INPUT_13,INPUT_14,INPUT_15,E_SUP_DER},       \
    {INPUT_1,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_2,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_3,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_4,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_5,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_6,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_7,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_8,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_9,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_10,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_11,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_12,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_13,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_14,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {INPUT_15,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,CERO,BORDE_LATERAL},                                                                                                                                                                                   \
    {E_INF_IZQ,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,BORDE_HORIZONTAL,E_INF_DER},       \
}

uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count);
void Reveal0(  uint8 u8_X, uint8 u8_Y );
/*
if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] < 58 ) //Arriba Izquierda
{
    Plano[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda] = Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosIzquierda];
}   
else
{
    //Nada
} 
if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] < 58 )      //Arriba Centro
{
    Plano[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X] =  Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumeroCentral_X];
}
else
{
    //Nada
} 
if ( Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] < 58 )      //Arriba Derecha
{
    Plano[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha] =  Entradas[u8NumerosArriba].u8Cordenadas_X[u8NumerosDerecha];
}
else
{
    //Nada
} 
if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] < 58 )      //Abajo Izquierda
{
    Plano[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda] = Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosIzquierda];
}
else
{
    //Nada
} 
if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] < 58 )      //Abajo Centro
{
    Plano[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X] =  Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumeroCentral_X];
}
else
{
    //Nada
} 
if ( Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] < 58 )      //Abajo Derecha
{
    Plano[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha] =  Entradas[u8NumerosAbajo].u8Cordenadas_X[u8NumerosDerecha];
}
else
{
    //Nada
} 
if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] > 47 && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] < 58 )      //Centro Izquierda
{
    Plano[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda] =  Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosIzquierda];
}
else
{
    //Nada
} 
if ( Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] > 47 && Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] < 58 )      //Centro Derecha
{
    Plano[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha] =  Entradas[u8NumeroCentral_Y].u8Cordenadas_X[u8NumerosDerecha];
}
else
{
    //Nada
}
*/