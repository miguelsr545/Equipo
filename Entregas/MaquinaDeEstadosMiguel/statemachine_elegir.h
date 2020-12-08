typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;

#define TRASLADO        1700000000
#define LLENAR          1500000000
#define TRUE            1
#define FALSE           0
#define UNO             1
// 1705032704
typedef struct 
{
    uint8 u8Licor;
    uint8 u8Ingrediente;
    uint8 u8Ingrediente_Extra;
}Bebida;

typedef enum
{
    Tequila = 0,
    Ron,
    Whisky,
    Vodka,
    Cerveza,
    Max_Licores
}Licores;

typedef enum
{
    Agua_Tonica = 0,
    Sangria,
    Coca,
    Clamato,
    Agua_Mineral,
    Max_Ingredientes
}Ingrediente;

typedef enum
{
    Limon = 0,
    Sal,
    Maguie,
    Valentina,
    Hielos,
    Max_Ingredientes_Extra
}Ingrediente_Extra;

void Elegir_Licor();
void Elegir_Ingrediente();
void Elegir_Ingrediente_Extra();