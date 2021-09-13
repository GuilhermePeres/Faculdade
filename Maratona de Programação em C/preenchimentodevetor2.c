#include <stdio.h>

int main ()

{
	int Lmt, c, Val, Vet[1000];
	
	Val = 0;
	
	scanf ("%i", &Lmt);
	
	for (c=0; c<1000; c++)
	{
		Vet[c] = Val;
		Val++;
		
		if (Val > Lmt-1)
		{
			Val = 0;
		}
	}
	
	for (c=0; c<1000; c++)
	{
		printf ("N[%i] = %i\n", c, Vet[c]);
	}

	
	
	
	return 0;
}