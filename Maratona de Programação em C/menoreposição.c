#include <stdio.h>

int main ()

{
	int Vetor[998], total, c, menor, posicao;
	
	menor = 998;
	
	scanf ("%i", &total);
	
	for (c=0; c<total; c++)
	{
		scanf("%i", &Vetor[c]);
		
		if (Vetor[c] < menor)
		{
			menor = Vetor[c];
			posicao = c;
		}
	}
	
	printf("Menor valor: %i\nPosicao: %i\n", menor, posicao);
	
	
	
	return 0;
}