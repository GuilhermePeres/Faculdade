#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 50

int main()
{		
	int n, i, verifica, j, cont, aux, control, total, casos[TAM], menos, cartas[TAM];
	
	i = cont = control = total = menos = 0;
	
	scanf("%d", &n);
	
	while(n != 0)
	{
		for(i=0; i<n; i++)
		{
			cartas[i] = i+1;
			casos[i] = i+1;
			total++;
		}
	
		if(total == 1)
		{
			printf("Discarded cards:\nRemaining cards: 1\n");
			scanf("%d", &n);
			continue;
		}
		//printf("total = %d", total);
		
		control = total;
		
		while(control != 1)
		{			
			cont++;
			
			if(cont %2 != 0 && casos[i] != 0)
			{
				//printf("A ");
				casos[i] = 0;
				
			}
			//if(control == 1)
			//	break;
				control--;
			if(i == total)	
				i=0;
			else
				i++;
		}
		
		verifica = 0;
		
		for(i=0; i<total; i++)
		{
			if(casos[i] == 0)
			{
				if(verifica == 0)
				{
					printf("Discarded cards: %d", cartas[i]);
					verifica = 1;
				}
				else
					printf(", %d", cartas[j]);				
			}
			if(cartas[i] != 0)
				j = i;
		}	
		
		printf("\nRemaining card: %d\n", cartas[j]);
		
		total = 0;
		
		scanf("%d", &n);	
	}
}
