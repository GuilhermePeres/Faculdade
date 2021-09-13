#include <stdio.h>

int main ()

{
	int lin, col, output, nlin, ncol, Matriz[500][500], zero, temnum, contlin, contcol;
	
	temnum = 0;
	
	zero = 0;
	
	scanf ("%i %i", &nlin, &ncol);	
	
	for (lin=0; lin<nlin; lin++)	//input
		for (col=0; col<ncol; col++)
			scanf ("%i", &Matriz[lin][col]);

	for (lin=0; lin<nlin; lin++)	//verifica se após uma linha de 0's existe um num !=
	{
		for (col=0; col<ncol; col++)
		{
			if (Matriz[lin][col] == 0)
				zero++;
			
			else
			{				
				if (zero >= ncol)
				{	
					printf ("N\n");
			
					return 0;
				}
				
				zero = 0;
			}	
		}
		
		if (zero < ncol)
			zero = 0;
	}		
	
	for (lin=0; lin<nlin; lin++)
	{
		for (col=0; col<ncol; col++)
		{
			if (Matriz[lin][col] != 0)	//verifica se o número mais a esquerda é != 0
			{
				temnum++;
					
				if (temnum == 1)
				{					
					for (contlin=lin+1; contlin<nlin; contlin++)	//verifa as linhas de baixo do numero mais a esquerda
						if (Matriz[contlin][col] != 0)
						{
							printf ("N\n");
						
							return 0;
						}
				
					for (contcol=0; contcol<col; contcol++)	//verifica a esquerda do num mais a esquerda
						if (Matriz[lin][contcol] != 0)
						{
							printf ("N\n");
							
							return 0;
						}
				}
				
				if (col == ncol-1)
					temnum = 0;
			}
		}
	}
	
	printf ("S\n");

	return 0;
}