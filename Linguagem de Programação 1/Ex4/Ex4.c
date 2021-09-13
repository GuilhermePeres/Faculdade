#include <stdio.h>

// exercício 4 da Lista 1 - Funções

float Maior(float num1, float num2);

int main()
{
	float num1, num2;
	
	scanf ("%f %f", &num1, &num2);
	
	printf ("\n%f\n", Maior(num1, num2));
	
	return 0;
}

float Maior(float num1, float num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}