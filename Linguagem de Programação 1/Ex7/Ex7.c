#include <stdio.h>

// exercício 7 da Lista 1 - Funções

float Menor(float num1, float num2, float num3);

int main()
{
	float num1, num2, num3;
	
	scanf ("%f %f %f", &num1, &num2, &num3);
	
	printf ("\n%f\n", Menor(num1, num2, num3));
	
	return 0;
}

float Menor(float num1, float num2, float num3)
{
	float menor;
	
	menor = num1;
	
	if (num1 < num2)
		menor = num1;
	else
		menor = num2;
	
	if (num3 < menor)
		menor = num3;
	
	return menor;
}