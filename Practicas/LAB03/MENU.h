

#define TRUE                1
#define FALSE               0
#define MAX_TIME            1500
#define CERO                0
#define UNO                 1

typedef enum 
{
    BOMBA1 = UNO,
    BOMBA2,
    BOMBA3
}BOMB;

typedef enum
{
    Time_Select = UNO,
    Time_View,
    End
}InputAction;   

typedef enum
{
    StateMenu = UNO,
    StateEjecucion
}States;

uint16 TimeFunc( void );