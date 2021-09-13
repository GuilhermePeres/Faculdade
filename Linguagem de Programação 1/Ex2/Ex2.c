#include <stdio.h>
#include <math.h>

//exercício 2 da Lista 1 - Funções

float Delta(float a, float b, float c);

int main()

{
	float a, b, c, val;
	
	scanf ("%f %f %f", &a, &b, &c);
	
	val = Delta(a, b, c);
	
	printf ("%.2f", val);
	
	return 0;	
}

float Delta(float a, float b, float c)
{
	//ax² + bx + c
	
	float ValorDelta;
	
	ValorDelta = (pow(b, 2)) - (4 * a * c);
	
	return ValorDelta;
}