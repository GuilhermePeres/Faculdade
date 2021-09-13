#include <stdio.h>

int main ()

{
	int input, Matriz[101][101], lin, col, meio, entrence1, exit1;
	
	while (1 == scanf("%i", &input))
	{			
		for (lin=0; lin<input; lin++) 
			for (col=0; col<input; col++)
			{								//coloca os 3's
				if ((lin+1) + col == input)
				   Matriz[lin][col] = 3;		
										
				else if (lin == col)	//coloca os 2's
					Matriz[lin][col] = 2;		
	
					 else				//coloca os 0's
						 Matriz[lin][col] = 0;
			}
		
		entrence1 = input/3;
		
		exit1 = input - entrence1;
		
		for (lin = entrence1; lin < exit1; lin++)		//coloca os 1's
			for (col = entrence1; col < exit1; col++)
				Matriz[lin][col] = 1;

		meio = input/2;
							//coloca o 4
		Matriz[meio][meio] = 4;
	
		for (lin=0; lin<input; lin++)
		{								//output
			for (col=0; col<input; col++)
			{
				printf ("%i", Matriz[lin][col]);
			}
			
			printf ("\n");
		}
			
		
		
		printf ("\n");
	}
	
	return 0;
}