#include <stdio.h>

int main ()

{
	int Matriz[10], N;
	
	for (N=0; N<=9; N++)
	{
		scanf ("%i", &Matriz[N]);
		if (Matriz[N] <= 0)
			Matriz[N] = 1;
	}
	
	for (N=0; N<=9; N++)
	{
		printf ("X[%i] = %i\n", N, Matriz[N]);
	}
	

	return 0;
}