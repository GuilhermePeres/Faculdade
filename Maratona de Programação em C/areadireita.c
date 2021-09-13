#include <stdio.h>

int main ()

{
	float Matriz[12][12], Soma, Media;
	char Tipo;
	int Lin, Col;
	
	Soma = 0;
	
	//input
	scanf (" %c", &Tipo);
	
	//input
	for (Lin=0; Lin<12; Lin++)
		for (Col=0; Col<12; Col++)
			scanf ("%f", &Matriz[Lin][Col]);
	
	//Fazendo a Soma	
	for (Lin=1; Lin<11; Lin++)
		Soma = Soma + Matriz[Lin][11];
		
	for (Lin=2; Lin<10; Lin++)
		Soma = Soma + Matriz[Lin][10];
		
	for (Lin=3; Lin<9; Lin++)
		Soma = Soma + Matriz[Lin][9];
			
	for (Lin=4; Lin<8; Lin++)
		Soma = Soma + Matriz[Lin][8];
		
	for (Lin=5; Lin<7; Lin++)
		Soma = Soma + Matriz[Lin][7];
	
	//output
	if (Tipo == 'S')
	{
		printf("%.1f\n", Soma);
	}	
	else
		printf("%.1f\n", Soma/30);
	
	
	return 0;
}