#include <stdio.h>

int main ()

{
	int Matriz[70][70], lin, col, input;
	
	while (1 == scanf("%i", &input))
	{
		for (lin=0; lin<input; lin++)
		{
			for (col=0; col<input; col++)
			{
				if(((lin+1) + col) == input)
					Matriz[lin][col] = 2;

				else if (lin == col)
						Matriz[lin][col] = 1;
					else
						Matriz[lin][col] = 3;
					
				printf ("%i", Matriz[lin][col]);
			}
			
			printf ("\n");
		}
	}
	
	return 0;
}