#include <stdio.h>
#include <math.h>

//exercício 3 da Lista 1 - Funções

float TipoNum(float num);
int Nulo (float num);
float Delta(float a, float b, float c);

int main()
{
	float a, b, c, x1, x2, complexo, ValDelta;
	
	printf ("\nInforme o valor de a, b e c\n");
	
	scanf ("%f %f %f", &a, &b, &c);
	
	if (Nulo(a) == 0)
	{
		printf ("\nValor invalido, coeficiente 'a' deve ser diferente de zero\n");
		return 0;
	}
		// se Delta for maior ou igual a zero
	if (TipoNum(Delta(a, b, c)) == 0)
	{
		x1 = ((b*-1) + sqrt(Delta(a, b, c))) / (2*a);
		x2 = ((b*-1) - sqrt(Delta(a, b, c))) / (2*a);
		
		printf("\nPrimeira raiz: %.2f\n", x1);
		printf("Segunda raiz: %.2f\n", x2);
		
		return 0;
	}
	else
	{	// se Delta for negativo
		x1 = ((b*-1) / (2*a));
		complexo = (sqrt((Delta(a, b, c))*-1) / (2*a));
		
		printf ("\nPrimeira raiz: %.2f + %.2fi\n", x1, complexo);
		printf ("Secunda raiz: %.2f - %.2fi\n", x1, complexo);
		
		return 0;
	}
	
	return 0;
}

float TipoNum(float num)
{
	if (num >= 0)
	{
		//printf("positivo");
		return 0;
	}
	else
	{
		//printf("nao");
		return 1;		
	}
	
	return num;
}

int Nulo (float num)
{
	if (num == 0)
	{
		//printf ("nulo");
		return 0;
	}
	else
	{
		//printf ("nao");
		return 1;
	}
}

float Delta(float a, float b, float c)
{
	//ax² + bx + c
	
	float ValorDelta;
	
	ValorDelta = (pow(b, 2)) - (4 * a * c);
	
	return ValorDelta;
}