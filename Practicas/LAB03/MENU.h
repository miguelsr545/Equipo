#include "types.h"
#include <stdio.h>

#define TRUE                1
#define FALSE               0
#define MAX_TIME            25
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

uint8 MENU( void );
uint8 TimeFunc( void );