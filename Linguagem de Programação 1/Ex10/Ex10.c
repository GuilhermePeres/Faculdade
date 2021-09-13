#include <stdio.h>

// exercício 10 da Lista 1 - Funções

int main ()
{
	int temperatura;
	float valor, convert;
	
	printf ("\nQuer converter qual temperatura? Celsius(1) ou Fahrenheit(2)? \nDigite o numero conforme foi especificado.\n");
	
	scanf ("%i", &temperatura);
	
	switch (temperatura)
	{
		case 1 :
			printf ("\nA temperatura sera convertida para Fahrenheit, digite a temperatura: ");
			
			scanf ("%f", &valor);
			
			convert = (9*valor/5) + 32;
			
			printf ("\nA temperatura em Fahrenheit para sua conversao: %.2f\n", convert);
			
			break;
		
		case 2 :
			printf ("\nA temperatura sera convertida para Celsius, digite a temperatura: ");
			
			scanf ("%f", &valor);
			
			convert =  5*(valor-32)/9;
			
			printf ("\nA temperatura em Celsius para sua conversao: %.2f\n", convert);
			
			break;
		
		default :
			printf ("Temperatura invalida!\n");
	}
	
	return 0;
}