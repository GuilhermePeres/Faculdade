#include <stdio.h>
#include <string.h>

int sort(const void *a, const void *b);
struct Lista{int Val1; int Val2; int Result; char Expressao; char Nome[100]; int Escolha; char Resposta; char Errou[100];};
struct Lista vetor[100];
struct Lista aux;

int main()
{
	
	
	int n, i, mais, menos, multiplicacao, impossivel, contE, verifica, cont;
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
			
		//	strcpy(vetor[i].Errou, "");
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
			qsort(vetor, contE, sizeof(struct Lista), sort);
			
			/*verifica = 1;
		
			while(verifica)
			{
				verifica = 0;
			
				for(i=0; i<contE; i++)
				{					
        			if(strncmp(vetor[i].Errou, vetor[i+1].Errou, contE) > 0)
					{
						verifica = 1;
						
        				aux = vetor[i];
        				
        				vetor[i] = vetor[i+1];
        				
        				vetor[i+1] = aux;
       				}
        		}
    		}*/
    		
    		for(i=0; i<=contE; i++)
    		{  			
    			if(i == contE)
    				printf("%s", vetor[i].Errou);
    			else
    			{
    				printf("%s", vetor[i].Errou);
    				printf(" ");
    			}
    			
    			//strcpy(vetor[i].Errou, "");
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
		
	//	for(i=0; i<n; i++)
	//	{
	//		strcpy(vetor[i].Errou, "");
	//	}
		
		printf("\n");
	}
	
	return 0;
}

int sort(const void *a, const void *b)
{
	int antes = ((struct Lista *)a)->Errou; 
	int depois = ((struct Lista *)b)->Errou;
	return (antes - depois);
}
