#include <stdio.h>

//exercício 1 da Lista 1 - Funções

void Nulo (float num);

int main ()
{
	float num;
	
	scanf("%f", &num);
	
	Nulo(num);
	
	return 0;
}

void Nulo (float num)
{
	if (num == 0)
		printf ("nulo");
	else
		printf ("nao");
}