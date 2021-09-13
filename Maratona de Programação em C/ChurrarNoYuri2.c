#include<stdio.h>
#include<string.h>

int main()
{
	struct Lista {char nome[21]; int data;};
	struct Lista vetor[9], aux;
	int i, j, k, l, verifica;
	
	while(scanf("%i", &i) != EOF)
	{
		for(j=0; j<i; j++)
		{	
			scanf("%s %d", &vetor[j].nome, &vetor[j].data);
		}
		
		verifica = 1;
		
		while(verifica)
		{
			verifica = 0;
			
			for(j=0; j<i; j++)
			{
        		if(vetor[j].data > vetor[j+1].data)
				{
					verifica = 1;
					
        			aux = vetor[j];
        			
        			vetor[j] = vetor[j+1];
        			
        			vetor[j+1] = aux;
       			}
        	}
        }
        
        for(j=0; j<i; j++)
		{	
			if(j == i-1)
			{
				printf("%s\n", vetor[j].nome);
			}
			else
				printf("%s ", vetor[j].nome);
		}
		
	}	
	return 0;
}
