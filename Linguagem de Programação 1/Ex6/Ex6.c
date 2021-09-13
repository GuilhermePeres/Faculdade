#include <stdio.h>

// exercício 6 da Lista 1 - Funções

float Maior(float num1, float num2, float num3);

int main()
{
	float num1, num2, num3;
	
	scanf ("%f %f %f", &num1, &num2, &num3);
	
	printf ("\n%f\n", Maior(num1, num2, num3));
	
	return 0;
}

float Maior(float num1, float num2, float num3)
{
	float maior;
	
	maior = num1;
	
	if (num1 > num2)
		maior = num1;
	else
		maior = num2;
	
	if (num3 > maior)
		maior = num3;
	
	return maior;
}