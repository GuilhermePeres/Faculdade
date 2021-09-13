#include <stdio.h>
#include <string.h>

int main ()

{
	float Conta, Matriz[12][12];
	int Coluna, N, N2;
	char Tipo[2];
	
	Conta = 0;
	
	scanf ("%i", &Coluna);
	scanf ("%s", &Tipo);
	
	for (N=0; N<12; N++)
		for (N2=0; N2<12; N2++)
			scanf ("%f", &Matriz[N][N2]);
		
	for (N=0; N<12; N++)	
		Conta = Conta + Matriz[N][Coluna];
		
	if (strcmp(Tipo, "S") == 0)
		printf ("%.1f\n", Conta);
			
	else
		printf ("%.1f\n", Conta/12);
	
	
	return 0;
}