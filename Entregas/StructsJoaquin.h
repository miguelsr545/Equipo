
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

typedef enum
{
	enSector0 = 0,
	enSector1,
	enSector2,
	enSector3,
	enSector4,
	enMaxSectors
}tenParkingSectors;

#define ParkingFee			17
#define SECTOR0_SLOTS		5
#define SECTOR1_SLOTS		10
#define SECTOR2_SLOTS		25
#define SECTOR3_SLOTS		7
#define SECTOR4_SLOTS		12


void ShowAvailableSlots (uint8 *pu8Sector);
void ShowNotAvailableSlots (uint8 *pu8Sector, uint8 Sector);
void ShowEarnedMoney ( uint8 *pu8Sector );
uint8 u8AddCarToSector( uint8 *pu8Sector, uint8 u8check );
uint8 u8RemoveCarFromSector( uint8 *pu8Sector, uint8 u8check, uint8 *pu8ParkingFee );
void u8ImportPaymentOfSlot( uint8 *pu8Tot, uint8 *pu8Add );
uint8 printRandoms(uint8 0, uint8 2,  uint8 count);
