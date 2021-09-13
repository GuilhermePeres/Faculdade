#include <stdio.h>

int main ()

{
	int c;
	double Val, Vet[100];
	
	scanf ("%lf", &Val);
	
	Vet[0] = Val;
	
	for (c=1; c<100; c++)
		Vet[c] = Vet[c-1] / 2;
	
	for (c=0; c<100; c++)
		printf ("N[%i] = %.4lf\n", c, Vet[c]);
	
	return 0;
}