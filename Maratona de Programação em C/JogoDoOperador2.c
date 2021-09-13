#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comparador(const void *p, const void *q);  

int main()
{
	struct Lista{int Val1; int Val2; int Result; char Expressao; char Nome[48]; int Escolha; char Resposta; char Errou[48];};
	struct Lista vetor[48];
	struct Lista aux;	
	
	int n, i, mais, menos, multiplicacao, impossivel, contE, verifica;
	char c;
	
	contE = 0;
		
	while(scanf("%d", &n) != EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d%d%c%d", &vetor[i].Val1, &vetor[i].Val2, &c, &vetor[i].Result);
			
			if(vetor[i].Val1 + vetor[i].Val2 == vetor[i].Result)
			{
				vetor[i].Expressao = '+';
				//printf("\nO resultado da expressao e + e foi salvo no i = %d\n", i);
			}
			else if(vetor[i].Val1 - vetor[i].Val2 == vetor[i].Result)
			{
				vetor[i].Expressao = '-';
				//printf("\nO resultado da expressao e -\n");
			}
			else if(vetor[i].Val1 * vetor[i].Val2 == vetor[i].Result)
			{
				vetor[i].Expressao = '*';
				//printf("\nO resultado da expressao e *\n");
			}
			else
			{
				vetor[i].Expressao = 'I';
				//printf("\nO resultado da expressao e I\n");
			}
		}
		
		contE = 0;
		
		for(i=0; i<n; i++)
		{
			scanf("%s%d", &vetor[i].Nome, &vetor[i].Escolha); 
			scanf(" %c", &vetor[i].Resposta);
			
			//printf("\nPassou por aqui primeiro\n");
			
			if(vetor[i].Resposta != vetor[vetor[i].Escolha -1].Expressao)
			{
				//printf("\nA resposta desse pessoa esta errada e foi comparado o valor do cara  %c com a resposta %c", vetor[i].Resposta, vetor[vetor[i].Escolha -1].Expressao);
				contE ++;
				strcpy(vetor[i].Errou, vetor[i].Nome);
			}
			//else
				//printf("\nA resposta dessa pessoa esta certa");
		}
		
		if(contE != n && contE > 0)
		{
			for(i=0; i<n; i++)
				qsort(vetor, 48, sizeof(struct Lista), comparador);
    		
    		for(i=1; i<n; i++)
    		{
    			if(i == n-1)
    				printf("%s", vetor[i].Errou);
    			else
    				printf("%s ", vetor[i].Errou);
			}
		}
		else if(contE == n)
		{
			printf("None Shall Pass!");
		}
		else
		{
			printf("You Shall All Pass!");
		}
		
		for(i=0; i<n; i++)
		{
			strcpy(vetor[i].Errou, "");
		}
		
		printf("\n");
	}
	
	return 0;
}

int comparador(const void *p, const void *q)  
{ 
	return ( *(int*)p - *(int*)q );
} 
