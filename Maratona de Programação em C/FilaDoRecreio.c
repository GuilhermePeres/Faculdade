#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int vetor[1001], troca[1001];
	
	int n, cont, i, j, pessoas, verifica, aux;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		cont = 0;
		
		scanf("%d", &pessoas);
		
		for(j=0; j<pessoas; j++)
		{
			scanf("%d", &vetor[j]);
			troca[j] = vetor[j];
		}
		
		verifica = 1;
		
		while(verifica)
		{
			verifica = 0;
			
			for(j=0; j<pessoas; j++)
			{
        		if(troca[j] < troca[j+1])
				{
					verifica = 1;
					
        			aux = troca[j];
        			
        			troca[j] = troca[j+1];
        			
        			troca[j+1] = aux;
       			}
        	}
        }
        
        for(j=0; j<pessoas; j++)
        {
        	if(vetor[j] == troca[j])
        	{
        		cont++;
			}
			vetor[j] = 0;
			troca[j] = 0;  
		}

		printf("%d\n", cont);
	}
	return 0;
}
