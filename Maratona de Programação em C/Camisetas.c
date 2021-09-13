#include<stdio.h>
#include<string.h>

int main ()
{
	struct Lista {char nome[100]; char cor[50]; char tamanho[2];};
	struct Lista vetor[61], aux;
	int num, i, j, verifica;
	j = 0;
	
	while(1)
	{		
		scanf("%d", &num);
		
		if(num == 0)
			return 0;
		
		if(j == 1)
			printf("\n");
		
		j = 1;
				
		for(i=0; i<num; i++)
		{
			scanf(" %[^\n]s", &vetor[i].nome);
			scanf("%s%s", &vetor[i].cor, &vetor[i].tamanho);
		}
		
		verifica = 1;
		
		while(verifica)
		{
			verifica = 0;
			
			for(i=0; i<num-1; i++)
			{
        		if(strncmp(vetor[i].nome, vetor[i+1].nome, 100) > 0)
				{
					verifica = 1;
					
        			aux = vetor[i];
        			
        			//printf("%s", vetor[i+1]);
        			
        			vetor[i] = vetor[i+1];
        			
        			vetor[i+1] = aux;
       			}
        	}
    	}
    	
    	verifica = 1;
    	
    	while(verifica)
    	{
    		verifica = 0;
    		
        	for(i=0; i<num-1; i++)
			{
        		if(strncmp(vetor[i].tamanho, vetor[i+1].tamanho, 2) < 0)
				{
					verifica = 1;
					
        			aux = vetor[i];
        			
        			//printf("%s", vetor[i+1]);
        			
        			vetor[i] = vetor[i+1];
        			
        			vetor[i+1] = aux;
       			}
        	}
        }	
		
		verifica = 1;
			
		while(verifica)
		{
			verifica = 0;
			
			for(i=0; i<num-1; i++)
			{
        		if(strncmp(vetor[i].cor, vetor[i+1].cor, 50) > 0)
				{
					verifica = 1;
					
        			aux = vetor[i];
        			
        			//printf("%s", vetor[i+1]);
        			
        			vetor[i] = vetor[i+1];
        			
        			vetor[i+1] = aux;
       			}
        	}
    	}

		for(i=0; i<num; i++)
        {
        	printf("%s %s %s\n", vetor[i].cor, vetor[i].tamanho, vetor[i].nome);
		}   
	}	
	
	return 0;
}
