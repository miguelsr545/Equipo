#include <stdio.h>

int main ()
{
	int BitsVar, OpVar=0, CorrVar=33;
	printf("Elige un valor de bits para tu variable: 8, 16 o 32");
	scanf("%d",&BitsVar);
	if(BitsVar==8)
	{
		unsigned char VarOp=0;
	}
	else
	{
		if(BitsVar==16)
		{
			unsigned short VarOp=0;
		}
		else
		{
			if(BitsVar==32)
			{
				unsigned int VarOp=0;
			}
		}
	}
	if (BitsVar==8 || BitsVar==16 || BitsVar==32)
	{
		while (OpVar<1 || OpVar>3)
		{
			printf("Seleccione una de las siguientes opciones: \n");
			printf("Or=1\n");
			printf("And=2\n");
			printf("Xor=3\n");
			scanf("%d",&OpVar);
		}
		while(CorrVar<0 || CorrVar>=BitsVar)
		{
			printf("En que bit quieres que se aplique el corrimiento: ");
			scanf("%d",&CorrVar)
		}
		if (OpVar==1)
		{
			VarOp &= ~ (1 << CorrVar);
		}
		else 
		{
			if (OpVar==2)
			{
				VarOp |= (1<<CorrVar);
			}
			else
			{
				VarOp ^= (1<<CorrVar);
			}
		}
		printf("%d",&VarOp);
	}
	else
	{
		printf("No elegiste ninguna de las posibles variables");
	}
}