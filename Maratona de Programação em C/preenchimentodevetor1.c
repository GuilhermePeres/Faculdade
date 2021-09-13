#include <stdio.h>

int main ()

{
	int Vetor[10], n;
	
	scanf ("%i", &Vetor[0]);
	
	for (n=1; n<10; n++)
		Vetor[n] = Vetor[n-1] * 2;
	
	for (n=0; n<10; n++)
		printf("N[%i] = %i\n", n, Vetor[n]);
	
	return 0;
}