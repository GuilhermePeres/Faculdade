#include <stdio.h>
#include <stdlib.h>

struct Presente {int id; int mult;};
struct Presente vetor[1000000];
int sort(const void *a, const void *b);
int sortID(const void *a, const void *b);

int main()
{
	int n, i, j, qtde, g, larg, alt, comp, verifica;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d%d", &qtde, &g);
		
		for(j=0; j<qtde; j++)
		{
			scanf("%d", &vetor[j].id);
			scanf("%d%d%d", &larg, &alt, &comp);
			vetor[j].mult = larg * alt * comp; 
		}
		
		qsort(vetor, qtde, sizeof(struct Presente), sort);
		qsort(vetor, g, sizeof(struct Presente), sortID);
		
		/*verifica = 1;
		
		while(verifica)
		{
			verifica = 0;
			
			for(j=0; j<i; j++)
			{
        		if(vetor[j].mult > vetor[j+1].mult)
				{
					verifica = 1;
					
        			aux = vetor[j];
        			
        			vetor[j] = vetor[j+1];
        			
        			vetor[j+1] = aux;
       			}
        	}
        }*/
        
        for(j=0; j<g; j++)
        {
        	if(j == g-1)
        		printf("%d\n", vetor[j].id);
        	else
        		printf("%d ", vetor[j].id);
		}
	}
	
	return 0;
}

int sortID(const void *a, const void *b)
{
	int antes = ((struct Presente *)a)->id; int depois = ((struct Presente *)b)->id;
	return (antes - depois);
}

int sort(const void *a, const void *b)
{
	if(((struct Presente *)a)->mult > ((struct Presente *)b)->mult)
	{
		return -1;
	}
	else if(((struct Presente *)a)->mult < ((struct Presente *)b)->mult)
	{
		return 1;
	}
	else if(((struct Presente *)a)->id > ((struct Presente *)b)->id)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
