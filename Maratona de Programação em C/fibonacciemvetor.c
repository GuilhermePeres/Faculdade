#include <stdio.h>

int main ()

{
	double Fib[60];
	int Total, c, Imput;
	
	Fib[0] = 0;
	Fib[1] = 1;
	
	for (c=2; c<=60; c++)
		Fib[c] = (Fib[c-1] + Fib[c-2]);
	
	scanf ("%i", &Total);
	
	for (c=0; c<Total; c++)
	{
		scanf ("%i", &Imput);
		printf ("Fib(%i) = %.0lf\n", Imput, Fib[Imput]);
	}
	
	return 0;
}