#include <stdio.h>
#include <stdlib.h>

// exercício 9 da Lista 1 - Funções

int Dado();

int main()
{	
	int cont, val;
	
	double porcentUm, porcentDois, porcentTres, porcentQuatro, porcentCinco, porcentSeis, um, dois, tres, quatro, cinco, seis;
	
	um = dois = tres = quatro = cinco = seis = 0;
	
	srand(time(NULL));	
	
	for (cont = 0; cont < 1000000; cont++)
	{
		val = Dado();
		
		printf ("%i ", val);
		
		if (val == 1)
		{
			um++;
		}		
		else if (val == 2)
		{
			dois++;
		}			
			else if (val == 3)
			{
				tres++;
			}
				else if (val == 4)
				{
					quatro++;
				}	
					else if (val == 5)
					{
						cinco++;
					}	
						else
						{
							seis++;
						}				
	}
	
	printf ("\nQuantas vezes cada numero saiu: \nUm: %.0lf\nDois: %.0lf\nTres: %.0lf\nQuatro: %.0lf\nCinco: %.0lf\nSeis: %.0lf\n", um, dois, 
	tres, quatro, cinco, seis);
	
	porcentUm = um / 1000000;
	porcentDois = dois / 1000000;
	porcentTres = tres / 1000000;
	porcentQuatro = quatro / 1000000;
	porcentCinco = cinco / 1000000;
	porcentSeis = seis / 1000000;
	
	printf ("\nProbabilidade de cada numero:\nUm: %.3lf%%\nDois: %.3lf%%\nTres: %.3lf%%\nQuatro: %.3lf%%\nCinco: %.3lf%%\nSeis: %.3lf%%\n",
	porcentUm, porcentDois, porcentTres, porcentQuatro, porcentCinco, porcentSeis);
	
	printf ("\nAs probabilidades dos numeros foram praticamente identicas\n");
}

int Dado()
{
	int num;
	
	num = 1 + (rand () % 6);
		
	return num;
}