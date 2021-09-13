#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char c;
	char vetor[1001];
	int i, j, contabre, contfecha, abre, fecha, aux, entrou; 
	
	i = 0;
	contabre = 0;
	contfecha = 0;
	entrou = 0;
	aux = 0;
		
	while(scanf("%c", &c) != EOF)
	{					
		if(c == '(') 
		{
			//vetor[i] = c;
			contabre++;
		//	i++;
		}
		
		if(c == ')')	
		{
			//vetor[i] = c;
			contfecha++;
		//	i++;
		}
		
		if(contfecha > contabre && aux == 0)
		{
			printf("incorrect\n");
			aux = 1;
		}
		
		if(c == '\n')
		{
			if(contabre > contfecha && aux == 0)
			{
				printf("incorrect\n");
				aux = 1;
			}
			
			if(aux == 0)
				printf("correct\n");
			
			aux = 0;
			//i = 0;
			contabre = 0;
			contfecha = 0;
		}
	}
	return 0;
}
