#include <stdio.h>

int main ()

{
	float Inicial[20], Final[20];
	int n;
	
	for (n=0; n<20; n++)			//recebe os valores
		scanf ("%f", &Inicial[n]);
	
	for (n=0; n<20; n++)			//inverte os valores
		Final[n] = Inicial[19-n];
	
	for (n=0; n<20; n++)						//retorna o resultado
		printf ("N[%i] = %.0f\n", n, Final[n]);
	
	return 0;
}