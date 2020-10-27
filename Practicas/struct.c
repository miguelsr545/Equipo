#include <stdio.h>
#include "Structs.h"
#include <stdlib.h>
/* Descripcion 

->Crear un programa que simule un estacionamiento con 5 diferentes secciones 0, 1, 2, 3 o 4. Cada seccion tendra un cupo maximo de carros que sera definido por Defines diferentes. 
->Se tiene que usar un arreglo de estructuras para manejar los estacionamientos, la estructura es la de abajo.
->El programa correra en un ciclo infinito y habra funciones aleatorias que metan y saquen carros de las diferentes secciones.
->El programa debe tener una logica que atienda las peticiones siguientes con funciones:
	*Obtener el numero de espacios disponibles de una seccion (F1)
	*Obtener el numero de espacios no disponibles de una seccion (F2)
	*Obtener ganancias de sección(F3)
	*Registrar vehiculo ingresado(F4)
	*Remover vehiculo(F5)
	*Registrar pago de vehiculo ingresado(F6)
*/

/* Fucniones */
/*
->(F1) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios disponibles de esa seccion
->(F2) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de espacios no disponibles de esa seccion
->(F3) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento (0, 1, 2, 3 o 4) e imprima la cantidad de dinero acumulada en esa sección
->(F4) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita ingresar un vehiculo a esa seccion
->(F5) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y permita retirar un vehiculo de la cuenta de la seccion
->(F6) Una funcion con 1 parametro, la cual reciba la seccion de estacionamiento y registre el pago por haber ingresado el vehiculo
*/

tstParkingInfo astMyParks[enMaxSectors] = INIT_PARKING_SLOTS;						/*Struct to Use*/

void main ( void )
{
	uint8 u8InputAction = 0; 
	tenParkingSectors enSector; 
	uint8 u8ConfirmationFromAction = 0; 
	while(1)
	{
		fflush(stdin);
		printf("Press 1 to -> Read Available Slots\n");
		printf("Press 2 to -> Read Unavailable Slots\n");
		printf("Press 3 to -> Read Earned Money\n");
		printf("Press 4 to -> Enter a Car to a Section\n");
		printf("Press 5 to -> Remove a Car from a Section\n");
		printf("Enter selection: ");
        
		scanf("%d", &u8InputAction);
        system("cls");
		printf("\nAction Selected %d\n", u8InputAction );

		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("Sector Selected %d\n\n", enSector );

		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{   
                switch ( enSector ) 
                {
                    case 0:
                    ShowAvailableSlots ( enSector0 );
                    break;

                    case 1:
                    ShowAvailableSlots ( enSector1 );
                    break;
                        
                    case 2:
                    ShowAvailableSlots ( enSector2 );
                    break;

                    case 3:
                    ShowAvailableSlots ( enSector3 );
                    break;

                    case 4:
                    ShowAvailableSlots ( enSector4 );
                    break;

                }
            }
			else if( u8InputAction == 2 )
			{
                switch ( enSector ) 
                {
                    case 0:
                    ShowNotAvailableSlots ( enSector0 );
                    break;

                    case 1:
                    ShowNotAvailableSlots ( enSector1 );
                    break;
                        
                    case 2:
                    ShowNotAvailableSlots ( enSector2 );
                    break;

                    case 3:
                    ShowNotAvailableSlots ( enSector3 );
                    break;

                    case 4:
                    ShowNotAvailableSlots ( enSector4 );
                    break;
                }
			}
			else if( u8InputAction == 3 )
			{
                switch ( enSector ) 
                {
                    case 0:
                    ShowEarnedMoney ( enSector0 );
                    break;

                    case 1:
                    ShowEarnedMoney ( enSector1 );
                    break;
                        
                    case 2:
                    ShowEarnedMoney ( enSector2 );
                    break;

                    case 3:
                    ShowEarnedMoney ( enSector3 );
                    break;

                    case 4:
                    ShowEarnedMoney ( enSector4 );
                    break;
                }
			}
			else if( u8InputAction == 4 )
			{
                switch ( enSector ) 
                {
                    case 0:
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector0 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("All slots are ocuppied");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector0 );
                    }
                    break;

                    case 1:
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector1 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("All slots are ocuppied");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector1 );
                    }
                    break;
                        
                    case 2:
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector2 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("All slots are ocuppied");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector2 );
                    }                 
                    break;

                    case 3:
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector3 );
                    if ( u8ConfirmationFromAction == 0)
                    {
                        printf("All slots are ocuppied");
                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector3 );
                    }
                    break;

                    case 4:
                    u8ConfirmationFromAction = u8AddCarToSector ( enSector4 );
                    if ( u8ConfirmationFromAction == 0)
                    {

                    } 
                    else if( u8ConfirmationFromAction == 1)
                    {
                        u8ImportPaymentOfSlot ( enSector4 );
                    }
                    break;

                }
			}
			else if ( u8InputAction == 5 )
			{
                switch ( enSector ) 
                {
                    case 0:
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector0 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("All the slots are empty, there is no car to remove");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("Car removed");
                    }
                    break;

                    case 1:
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector1 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("All the slots are empty, there is no car to remove");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("Car removed");
                    } 
                    break;
                        
                    case 2:
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector2 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("All the slots are empty, there is no car to remove");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("Car removed");
                    }
                    break;

                    case 3:
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector3 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("All the slots are empty, there is no car to remove");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("Car removed");
                    }
                    break;

                    case 4:
                    u8ConfirmationFromAction = u8RemoveCarFromSector ( enSector4 );
                    if ( u8ConfirmationFromAction == 0 )
                    {
                        printf("All the slots are empty, there is no car to take out");
                    }
                    else if ( u8ConfirmationFromAction == 1 )
                    {
                        printf("Car removed");
                    }
                    break;
                }             
			}
			else
			{

			}
			printf("\n\n");
		}
		else
		{
			/*Not a valid sector*/
		}
    
	}
}

/*F1*/
void ShowAvailableSlots ( tenParkingSectors enCurrentSector )
{
    
    switch ( enCurrentSector ) 
    {
        case 0:
        printf( "You have %d available slots", astMyParks[enSector0].u8AvailableSlots );
        break;

        case 1:
        printf("You have %d available slots", astMyParks[enSector1].u8AvailableSlots );
        break;
                        
        case 2:
        printf("You have %d available slots", astMyParks[enSector2].u8AvailableSlots );
        break;

        case 3:
        printf("You have %d available slots", astMyParks[enSector3].u8AvailableSlots );
        break;

        case 4:
        printf("You have %d available slots", astMyParks[enSector4].u8AvailableSlots );
        break;
    }
}

/*F2*/
void ShowNotAvailableSlots ( tenParkingSectors enCurrentSector )
{
    switch ( enCurrentSector ) 
    {
        case 0:
        printf("Not available slots %d/%d ", astMyParks[enSector0].u8NotAvailableSlots, astMyParks[enSector0].u8MaxSlots );
        break;

        case 1:
        printf("Not available slots %d/%d ", astMyParks[enSector1].u8NotAvailableSlots, astMyParks[enSector1].u8MaxSlots );
        break;
                        
        case 2:
        printf("Not available slots %d/%d ", astMyParks[enSector2].u8NotAvailableSlots, astMyParks[enSector2].u8MaxSlots );
        break;

        case 3:
        printf("Not available slots %d/%d ", astMyParks[enSector3].u8NotAvailableSlots, astMyParks[enSector3].u8MaxSlots );
        break;

        case 4:
        printf("Not available slots %d/%d ", astMyParks[enSector4].u8NotAvailableSlots, astMyParks[enSector4].u8MaxSlots );
        break;
    }
}

/*F3*/
void ShowEarnedMoney ( tenParkingSectors enCurrentSector )
{
    switch ( enCurrentSector ) 
    {
        case 0:
        printf( "You have earned $%d ", astMyParks[enSector0].u32MoneyEarn );
        break;

        case 1:
        printf("You have earned $%d ", astMyParks[enSector1].u32MoneyEarn );
        break;
                        
        case 2:
        printf("You have earned $%d ", astMyParks[enSector2].u32MoneyEarn );
        break;

        case 3:
        printf("You have earned $%d ", astMyParks[enSector3].u32MoneyEarn );
        break;

        case 4:
        printf("You have earned $%d ", astMyParks[enSector4].u32MoneyEarn );
        break;
    }    
}
/*F4*/
uint8 u8AddCarToSector( tenParkingSectors enCurrentSector )
{
    switch ( enCurrentSector ) 
    {
        case 0:
        if ( astMyParks[enSector0].u8NotAvailableSlots == SECTOR0_SLOTS )
        {
            return 0;
        } 
        else 
        {
            astMyParks[enSector0].u8AvailableSlots--;
            astMyParks[enSector0].u8NotAvailableSlots++;
            return 1;
        }
        break;

        case 1:
        if ( astMyParks[enSector1].u8NotAvailableSlots == SECTOR1_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector1].u8AvailableSlots--;
            astMyParks[enSector1].u8NotAvailableSlots++;
            return 1;
        }
        break;
                        
        case 2:
        if ( astMyParks[enSector2].u8NotAvailableSlots == SECTOR2_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector2].u8AvailableSlots--;
            astMyParks[enSector2].u8NotAvailableSlots++;
            return 1;
        }
        break;

        case 3:
        if ( astMyParks[enSector3].u8NotAvailableSlots == SECTOR3_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector3].u8AvailableSlots--;
            astMyParks[enSector3].u8NotAvailableSlots++;
            return 1;
        }
        break;

        case 4:
        if ( astMyParks[enSector4].u8NotAvailableSlots == SECTOR4_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector4].u8AvailableSlots--;
            astMyParks[enSector4].u8NotAvailableSlots++;
            return 1;
        }
        break;
    }
}
/*F5*/
uint8 u8RemoveCarFromSector( tenParkingSectors enCurrentSector )
{
    switch ( enCurrentSector ) 
    {
        case 0:
        if ( astMyParks[enSector0].u8AvailableSlots == SECTOR0_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector0].u8AvailableSlots++;
            astMyParks[enSector0].u8NotAvailableSlots--;
            return 1;
        }
        break;

        case 1:
        if ( astMyParks[enSector1].u8AvailableSlots == SECTOR1_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector1].u8AvailableSlots++;
            astMyParks[enSector1].u8NotAvailableSlots--;
            return 1;
        }
        break;
                        
        case 2:
        if ( astMyParks[enSector2].u8AvailableSlots == SECTOR2_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector2].u8AvailableSlots++;
            astMyParks[enSector2].u8NotAvailableSlots--;
            return 1;
        }
        break;

        case 3:
        if ( astMyParks[enSector3].u8AvailableSlots == SECTOR3_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector3].u8AvailableSlots++;
            astMyParks[enSector3].u8NotAvailableSlots--;
            return 1;
        }
        break;

        case 4:
        if ( astMyParks[enSector4].u8AvailableSlots == SECTOR4_SLOTS )
        {
            return 0;
        }
        else
        {
            astMyParks[enSector4].u8AvailableSlots++;
            astMyParks[enSector4].u8NotAvailableSlots--;
            return 1;
        }
        break;
    }  
}
/*F6*/
void u8ImportPaymentOfSlot( tenParkingSectors enCurrentSector )
{
switch ( enCurrentSector ) 
    {
        case 0:
        astMyParks[enSector0].u32MoneyEarn += SLOT_PRICE;
        break;

        case 1:
        astMyParks[enSector1].u32MoneyEarn += SLOT_PRICE;
        break;
                        
        case 2:
        astMyParks[enSector2].u32MoneyEarn += SLOT_PRICE;
        break;

        case 3:
        astMyParks[enSector3].u32MoneyEarn += SLOT_PRICE;
        break;

        case 4:
        astMyParks[enSector4].u32MoneyEarn += SLOT_PRICE;
        break;
    }
}