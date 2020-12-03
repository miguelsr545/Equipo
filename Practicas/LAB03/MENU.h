typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long uint64;

#define TRUE                1
#define FALSE               0
#define MAX_TIME            25
#define CERO                0
typedef enum 
{
    BOMBA1 = 1,
    BOMBA2,
    BOMBA3
}BOMB;

typedef enum
{
    Time_Select = 1,
    Time_View,
    End
}InputAction;   

void MENU( void );
uint8 TimeFunc( void );