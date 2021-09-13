#include <stdio.h>

int main ()

{
	int N, Matriz[15][15], lin, col, basecol, baselin;
	
	scanf ("%i", &N);
	
	basecol = 1;
	
	while (N != 0)		
	{							//coloca os valores da matriz
		for (lin=0; lin<N; lin++)
		{	
			for (col=0; col<N; col++)
			{
				if (col == 0)
				{
					Matriz[lin][col] = basecol;
					
					basecol = basecol * 2;
				}										
				else										
					Matriz[lin][col] = Matriz[lin][col-1] * 2;
				
				if (N == 1 || N == 2){			//Output da Matriz Começa Aqui
					if (col == 0)
						printf ("%i", Matriz[lin][col]);
					else
						printf (" %i", Matriz[lin][col]);
				}
				else if (N > 2 && N < 5){
						if (col == 0)
							printf ("%2i", Matriz[lin][col]);
						else
							printf (" %2i", Matriz[lin][col]);
				}
					 else if (N == 5){
							if (col == 0)
								printf ("%3i", Matriz[lin][col]);
							else
								printf (" %3i", Matriz[lin][col]);
					 }
						  else if (N == 6 || N == 7){
								 if (col == 0)
									 printf ("%4i", Matriz[lin][col]);
								 else
									 printf (" %4i", Matriz[lin][col]);
						  }
							   else if (N == 8 || N == 9){
									  if (col == 0)
										  printf ("%5i", Matriz[lin][col]);
									  else
										  printf (" %5i", Matriz[lin][col]);
							   }
									else if (N == 10){
											if (col == 0)
											    printf ("%6i", Matriz[lin][col]);
											else
												printf (" %6i", Matriz[lin][col]);
									}
										 else if (N == 11 || N == 12){
												if (col == 0)
													printf ("%7i", Matriz[lin][col]);
												else
													printf (" %7i", Matriz[lin][col]);
										 }
											  else if (N == 13 || N == 14){
													 if (col == 0)
														 printf ("%8i", Matriz[lin][col]);
													 else
														 printf (" %8i", Matriz[lin][col]);
											  }
												   else{
														if (col == 0)
															printf ("%9i", Matriz[lin][col]);
														else
															printf (" %9i", Matriz[lin][col]);
												   }										//Output Termina Aqui
				
				if (col == N-1 && lin == N-1)
					printf ("\n");
			}
			
			printf ("\n");
		}
		
		basecol = 1;
		
		scanf ("%i", &N);
	}
	
	return 0;
}