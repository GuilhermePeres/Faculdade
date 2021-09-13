#include <stdio.h>
#include <stdlib.h>

// exercício 8 da Lista 1 - Funções

int Dado();

int main()
{	
	printf ("%i\n", Dado());
}

int Dado()
{
	int num;
	
	srand(time(NULL));
	
	num = 1 + (rand () % 6);
	
	return num;
}