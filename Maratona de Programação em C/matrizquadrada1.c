#include <stdio.h>

int main ()

{
	int Matriz[100][100], imput, t, t2, c, inside, menor, maior;
			
	scanf ("%i", &imput);
	
	while (imput != 0)
	{
		maior = imput-1;
		inside = 2;
		menor = 0;
		
		for (t=0; t<imput; t++)
			for (t2=0; t2<imput; t2++)		
					Matriz[t][t2] = 1;
		
		for (c=0; c<imput; c++)
		{
			for (t=0; t<imput; t++)
				for (t2=0; t2<imput; t2++)
					if((t > menor && t < maior) && (t2 > menor && t2 < maior))
						Matriz[t][t2] = inside;
					
			inside++;
			menor++;
			maior--;		
		}									
				
		for (t=0; t<imput; t++)
		{
			for (t2=0; t2<imput; t2++)
			{
				if (t2 == 0)
					printf("%3i", Matriz[t][t2]);
				else
					printf(" %3i", Matriz[t][t2]);
			}
			
			printf("\n");
		}
		
		printf("\n");
		scanf ("%i", &imput);
	}

	return 0;
}