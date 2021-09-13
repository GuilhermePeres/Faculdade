#include <stdio.h>

int main()
{
	int corretas;
	char c;
	double cont;
	
	cont = 0;
	corretas = 0;
	
	while(1)
	{ 							
		scanf("%c", &c);
		
		//if(c != '\n')
		//	printf("valor de c: %c\n", c);
		
		if(c == '\n')
		{
			printf("%i\n", corretas);
			
			corretas = 0;
			
			cont = 0;
		}	
		
		if(c == '/')
		{	
			if(cont == 1)
			{
				corretas++;
			}
			//printf("valor de cont: %f\n", cont);
			//printf("corretas: %i\n", corretas);
			//printf("valor de c: %c\n", c);
			cont = 0;
		}
		//if(c != '\n')
		//	ant = c;
		
		if(c == 'W')
		{
			cont++;
		}
		if(c == 'H')
		{
			cont = cont + 0.5;
		}
		if(c == 'Q')
		{
			cont = cont + 0.25;
		}
		if(c == 'E')
		{
			cont = cont + 0.125;
		}
		if(c == 'S')
		{
			cont = cont + 0.0625;
		}
		if(c == 'T')
		{
			cont = cont + 0.03125;
		}
		if(c == 'X')
		{
			cont = cont + 0.015625;
		}
		if(c == '*')
		{
			//printf("%i\n", corretas);
			return 0;
		}
	}
}
