#include "stdio.h"
#include "Structs.h"
#include "stdlib.h"

void main ( void )
{
	uint8 i;
    uint8 enSector;
    uint8 Random=0;
	uint8 u8InputAction = 0;
	uint8 u8ConfirmationFromAction = 0;
	uint8 u8Sector[5]= {Sector0_Slots, SECTOR1_SLOTS, SECTOR2_SLOTS, SECTOR3_SLOTS, SECTOR4_SLOTS};
	uint8 u8SectorMaxSlots[5] = {Sector0_Slots, SECTOR1_SLOTS, SECTOR2_SLOTS, SECTOR3_SLOTS, SECTOR4_SLOTS};
	uint8 u8SectorMoney[5] = {0, 0, 0, 0, 0};
	uint8 u8TotalEarnings = 0;
	for(i=0;i<5;i++)
	{
		uint8 printRandoms(&u8Sector[i]);
	}
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
		printf("Action Selected %d\n", u8InputAction );

		printf("Enter Sector from 0 to 4: ");
		scanf("%d", &enSector);
		printf("Sector Selected %d\n", enSector );
		if( enSector < enMaxSectors )
		{
			if( u8InputAction == 1 )
			{
				ShowAvailableSlots( &u8Sector[enSector]);
			}
			else if( u8InputAction == 2 )
			{
				ShowNotAvailableSlots ( &u8Sector[enSector], enSector );
			}
			else if( u8InputAction == 3 )
			{
				ShowEarnedMoney ( &u8SectorMoney[enSector] );
			}
			else if( u8InputAction == 4 )
			{
				u8AddCarToSector( &u8Sector[enSector], u8SectorMaxSlots[enSector]);
			}
			else if ( u8InputAction == 5 )
			{
				u8RemoveCarFromSector(&u8Sector[enSector], u8SectorMaxSlots[enSector], u8SectorMoney[enSector] );
			}
			else
			{
				u8ImportPaymentOfSlot(&u8TotalEarnings, &u8SectorMoney[enSector] );
			}
			printf("\n\n");
		}
		else
		{
			printf("Not a valid sector\n");
		}
		uint8 printRandoms( u8Random );
		if( u8Random == 0 )
			{
				uint8 u8AddCarToSector( &u8Sector[enSector], u8SectorMaxSlots[enSector]);
			}
			else if( u8Random == 1 )
			{
				u8RemoveCarFromSector(&u8Sector[enSector], u8SectorMaxSlots[enSector], u8SectorMoney[enSector] );
			}
			else if( u8Random == 2 )
			{
				/*Nothing to do*/
			}
	}
}
/*F1*/
void ShowAvailableSlots (uint8 pu8Sector)
{
	printf("The number of available slots is: %d",*pu8Sector);
}

/*F2*/
void ShowNotAvailableSlots (uint8 pu8Sector, uint8 Sector)
{
	uint8 OnUse;
	if( Sector == 0 )
			{
				OnUse=Sector0_Slots-*pu8Sector;
			}
			else if( Sector == 1 )
			{
				OnUse=Sector1_Slots-*pu8Sector;
			}
			else if( Sector == 2 )
			{
				OnUse=Sector2_Slots-*pu8Sector;
			}
			else if( Sector == 3 )
			{
				OnUse=Sector3_Slots-*pu8Sector;
			}
			else if ( Sector == 4 )
			{
				OnUse=Sector4_Slots-*pu8Sector;
			}
	printf("The number of occupied slots is: %d",OnUse);		
}

/*F3*/
void ShowEarnedMoney ( uint8 pu8Sector )
{
	printf("The amount of money earned in this sector is: $%d\n",*pu8Sector );
}
/*F4*/
uint8 u8AddCarToSector( uint8 pu8Sector, uint8 u8check )
{
	if(*pu8Sector > 0)
	{
		*pu8Sector += 1;
		printf("The car has been added successfully \n");
	}
	else
	{
		printf("Sorry there's no more space\n");
	}
}
/*F5*/
uint8 u8RemoveCarFromSector( uint8 pu8Sector, uint8 u8check, uint8 pu8ParkingFee )
{
	if(*pu8Sector <> u8check)
	{
		*pu8Sector += 1;
		printf("The car has been removed successfully \n");
		*pu8ParkingFee += ParkingFee;
	}
	else
	{
		printf("Sorry there's no car in this space\n");
	}
}
/*F6*/
void u8ImportPaymentOfSlot( uint8 pu8Tot, uint8 pu8Add )
{
	printf("The section made: $%d\n",*pu8Add);
	*pu8Tot += *pu8Add;
	*pu8Add = 0;
	printf("Total money is: %d\n",*pu8Tot);
}
/*RandomNumberGen*/
uint8 printRandoms(uint8 pu8Random) 
{  
    *pu8Random = (rand() % 3); 
} 
/*RandomNumberGenForSpots*/
uint8 printRandoms(uint8 pu8Random) 
{  
    *pu8Random = (rand() % 6); 
} 