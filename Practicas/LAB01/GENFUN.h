#ifndef GENFUN_H_ /* Include guard */
#define GENFUN_H_

//Data Types
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

//Definitions
#define ASCII_LOW_THRESHOLD_OFF_ON 96
#define ACII_HIGH_THRESHOLD_OFF_ON 123

#define ASCII_CONVERTION_FACTOR 32

#define ASCII_LIMITE_INFERIOR_MAYUSCULAS 64
#define ASCII_LIMITE_SUPERIOR_MAYUSCULAS 91

#define LIMITE_MAXIMO_FILTRO 80
#define LIMITE_MINIMO_FILTRO 40
// Letra a encontrar < l > de ASCII 108
#define ASCII_LETRA_A_ENCONTRAR 108

//Funciones
void GENFUN_CapsOn (uint8 *pu8Src, uint8 u8SizeOfList);
void GENFUN_CapsOff (uint8 *pu8Src, uint8 u8SizeOfList);
uint8 GENFUN_u8Ocurrencia ( uint8 *pu8Src, uint8 u8Letra_A_Target, uint8 u8SizeOfList );
uint8 GENFUN_u8GetAverage ( uint8 *pu8Src, uint8 u8SizeOfList );
void GENFUN_u8MemSet (uint8 *pu8Src, uint8 u8Char2Set, uint8 u8SizeOfList);
void GENFUN_u8MemCopy (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSortList (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8SizeOfList);
void GENFUN_vSoftSignal (uint8 *pu8Src, uint8 *pu8Dest);
void GENFUN_vFilterSignal (uint8 *pu8Src, uint8 *pu8Dest, uint8 u8MaxVal, uint8 u8MinVal);

//Randoms
uint8 printRandoms(uint8 lower, uint8 upper,  uint8 count);

#endif // GENFUN_H_
// El porque de los #ifndef
// https://stackoverflow.com/questions/7109964/creating-your-own-header-file-in-c