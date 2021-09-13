#include <stdio.h>

int main()
{
	long int n, dado[7], i, j, k, cont1, cont2, erro;
	
	cont1 = cont2 = 0;
	
	scanf("%li", &n);
	
	for(i=0; i<n; i++)
	{
		erro = 0;
		
		for(j=0; j<6; j++)
		{
			scanf("%li", &dado[j]);	
			
			if(dado[j] > 6 || dado[j] < 0)
				erro = 1;
		}
		
		if(dado[0] + dado[5] == 7 && dado[1] + dado[3] == 7 && dado[2] + dado[4] == 7)
		{
			for(j=0; j<6; j++)
			{
				for(k=0; k<6; k++)
				{
					if(dado[j] == dado[k] && j != k)
					{
						erro = 1;
						break;
					}
				}
			}
			
			if(erro == 1)
			{
				printf("NAO\n");
			}
			else
				printf("SIM\n");	
		}
		else
			printf("NAO\n");
	}
	
	if(n == 0)
	{
		printf("\n");
	}
	
	return 0;
}
