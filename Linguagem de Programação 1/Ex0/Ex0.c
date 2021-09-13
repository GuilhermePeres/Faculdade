#include <stdio.h>

//exercício 0 da Lista 1 - Funções

float TipoNum(float num);

int main ()
{
	float num;
	
	scanf("%f", &num);
	
	TipoNum (num);
	
	return 0;
}

float TipoNum(float num)
{
	if (num > 0){
		printf("positivo");
	}
	else{
		printf("nao");
	}
	
	return num;
}