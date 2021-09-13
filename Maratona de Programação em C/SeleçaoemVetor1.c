#include <stdio.h>

int main ()

{
	float Matriz[100];
	int N;
	
	for (N=0; N<=99; N++)
	{
		scanf ("%f", &Matriz[N]);
		if (Matriz[N] <= 10)
		printf ("A[%i] = %.1f\n", N, Matriz[N]);
	}
	
	return 0;
}