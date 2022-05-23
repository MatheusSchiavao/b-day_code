//biblioteca 
#include <stdio.h>

int main()
{
	int d, m, da, ma, x, y, z;

		printf("Digite o dia atual: ");
			scanf("%d",&d);
		printf("Digite o mes que voce esta: ");
			scanf("%d",&m);
	
	if((d >= 1) && (d <= 31))
	{
		switch(m)
		{
			case 1: 
				x = d;
					break;
			case 2: 
				x = d + 31; 
					break;
			case 3: 	
				x = d + 59; 
					break;
			case 4: 
				x = d + 90; 
					break;
			case 5: 
				x = d + 121; 
					break;
			case 6: 
				x = d + 151; 
					break;
			case 7: 
				x = d + 182; 
					break;
			case 8: 
				x = d + 212; 
					break;
			case 9: 
				x = d + 243; 
					break;
			case 10:
				 x = d + 273; 
					break;
			case 11:
				 x = d + 304; 
					break;
			case 12: 
				x = d + 334; 
					break;
			default: printf("\nMes nao existente!\n");
		}
	}
	else
	{
		printf("\nDia nao existente!\n");
	}
	
		printf("\nDigite o dia de seu aniversario: ");
			scanf("%d",&da);
		printf("Digite o mes de seu aniversario: ");
			scanf("%d",&ma);
	
	if((da >= 1) && (da <= 31))
	{
		switch(ma)
		{
			case 1:
				 y = da;
					break;
			case 2: 
				y = da + 31; 
					break;
			case 3: 	
				y = da + 59; 
					break;
			case 4: 
				y = da + 90; 
					break;
			case 5: 
				y = da + 121; 
					break;
			case 6: 
				y = da + 151; 
					break;
			case 7: 
				y = da + 182; 
					break;
			case 8: 
				y = da + 212; 
					break;
			case 9: 
				y = da + 243; 
					break;
			case 10:
				 y = da + 273; 
					break;
			case 11:
				 y = da + 304; 
					break;
			case 12:
				 y = da + 334; 
					break;
			default: printf("\nMes nao existente!\n");
		}
	}
	else
	{
			printf("\nDia nao existente!\n");
	}
	
		if(y > x)
	{
		z = y - x;
	}
	else
	{
		if(x > y)
		{
			z = (365 - x) + y;
		}
	else
		{
			printf("\n\nParabens! Hoje e seu aniversario!\n\n");
		}
	}
		printf("Voce faz aniversario no dia: %d/",da);
		printf("%d\n\n",ma);
		printf("Faltam %d dia(s) para voce fazer aniversario novamente!",z);
}