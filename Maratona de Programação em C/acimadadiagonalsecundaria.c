#include <stdio.h>

int main ()

{
	double Matriz[12][12], Soma, Media;
	char Tipo;
	int Lin, Col, x;
	
	Soma = 0;
	x = 10;
	
	//input
	scanf (" %c", &Tipo);
	
	//input
	for (Lin=0; Lin<12; Lin++)
		for (Col=0; Col<12; Col++)
			scanf ("%lf", &Matriz[Lin][Col]);
	
	//Fazendo a Soma	
	for (Lin=0; Lin<11; Lin++)
	{
		for (Col=x; Col>=0; Col--)
		{
			Soma += Matriz[Lin][Col];
		}
		x--;
	}
	
	//output
	if (Tipo == 'S')
	{
		printf("%.1lf\n", Soma);
	}	
	else
		printf("%.1lf\n", Soma/66);
	
	
	return 0;
}