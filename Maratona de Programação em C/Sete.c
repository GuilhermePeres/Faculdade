#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j, potencia;
	int vetor[4] = {1, 7, 9, 3};

	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{	
		scanf("%d", &potencia);
        potencia = potencia % 4;
		
		printf("%i\n", vetor[potencia]);
	}
	
	return 0;
}
