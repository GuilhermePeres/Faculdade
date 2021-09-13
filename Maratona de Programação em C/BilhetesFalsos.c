#include<stdio.h>

int main()
{
	int vetor[20500], comparador[20500], num1, num2, i, cont, aux, verifica, repetiu;
	cont = 0;
	repetiu = 0;
	
	while(1)
	{		
		scanf("%d%d", &num1, &num2);
		
		if(num1 == 0 && num2 == 0)
		{
			//printf("\n");
			return 0;
		}
			
		for(i=0; i<num2; i++)
		{
			scanf("%d", &vetor[i]);
		}
		
		verifica = 1;
			
		while(verifica)
		{
			verifica = 0;
			
			for(i=0; i<num2-1; i++)
			{
        		if(vetor[i] > vetor[i+1])
				{
					verifica = 1;
					
        			aux = vetor[i];
        			
        			vetor[i] = vetor[i+1];
        			
        			vetor[i+1] = aux;
       			}
        	}
        }
        
        
        //printf("\nvetor ordenado:\n");
        
        //for(i=0; i<num2; i++)
    	//{
        	//printf("%d - ", vetor[i]);	
		//}
        
        verifica = 0;
        cont = 0;
        
        for(i=1; i<num2+1; i++)
		{
        	if(vetor[i] == vetor[i-1])
			{
            	cont++;
        	}
        	else 
			{
				if(cont != 0)
        			verifica++;
        			
        		cont = 0;
        	}
        }
        
		printf("%d\n", verifica);
		cont = 0;
    }
				
	return 0;
}
