#include <stdio.h>

int main ()

{
	int a, b, c, maior, menor, meio;
	
	scanf ("%i", &a);
	
	maior = a;
	
	scanf ("%i", &b);
	
	if (b > a)
	{
		meio = a;
		maior = b;
	}
	else
		meio = b;
	
	scanf ("%i", &c);
	
	if (c > maior)
	{
		menor = meio;
		meio = maior;
		maior = c;
	}
	else 
		if (c > meio)
		{
			menor = meio;
			meio = c;
		}
	
	if (c < maior && c < meio)
		menor = c;
	
	printf ("%i\n%i\n%i\n\n", menor, meio, maior);
	printf ("%i\n%i\n%i\n", a, b, c);
	
	return 0;
}