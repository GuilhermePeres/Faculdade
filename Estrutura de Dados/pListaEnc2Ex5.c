#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{	int Lista[5], aux, c, numero;

	for (c=0; c<5; c++)
	{	printf("Informe 5 numeros:\n");
		scanf("%d", &Lista[c]);
	}
	
	for (c=0; c<5; c++)
	{
		printf("%i", Lista[c]);
	}
	
	while (numero >= 0)
	{		
		printf("Informe o numero a excluir:\n");
		scanf("%i", &numero);
		
		for (c=0; c<5; c++)
		{	
			if(Lista[c] == numero)
			{
				//if (c == 4)
				//	Lista[c] = NULL;
				//else
				{
					aux = Lista[c+1];
					Lista[c] = aux;
				}
			}
		}
			for (c=0; c<5; c++)
	{
		printf("%i", Lista[c]);
	}
	}
	return 0;
}
	
