#include <stdio.h>

int main ()

{
	double Matriz[12][12], Soma, Media;
	char Tipo;
	int Lin, Col;
	
	Soma = 0;
	
	//input
	scanf (" %c", &Tipo);
	
	//input
	for (Lin=0; Lin<12; Lin++)
		for (Col=0; Col<12; Col++)
			scanf ("%lf", &Matriz[Lin][Col]);
	
	//Fazendo a Soma	
	for (Col=1; Col<11; Col++)
		Soma = Soma + Matriz[0][Col];
		
	for (Col=2; Col<10; Col++)
		Soma = Soma + Matriz[1][Col];
		
	for (Col=3; Col<9; Col++)
		Soma = Soma + Matriz[2][Col];
			
	for (Col=4; Col<8; Col++)
		Soma = Soma + Matriz[3][Col];
		
	for (Col=5; Col<7; Col++)
		Soma = Soma + Matriz[4][Col];
	
	//output
	if (Tipo == 'S')
	{
		printf("%.1lf\n", Soma);
	}	
	else
		printf("%.1lf\n", Soma/30);
	
	
	return 0;
}