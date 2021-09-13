#include <stdio.h>

int main ()

{
	int par[5], impar[5], c, num, t, t2, c2;
	
	t = 0;
	t2 = 0;
	
	for (c=0; c<15; c++)
	{
		scanf ("%i", &num);
		
		{
			if (num %2 != 0 && num != 0)	//verifica se o número é impar
			{
				impar[t] = num;
				t++;
				if (t == 5)		//verifica se o vetor está cheio
				{
					for (t=0; t<5; t++)
						printf ("impar[%i] = %i\n", t, impar[t]);		//imprime o vetor cheio
					
					t = 0;	//limpa para iniciar o vetor do zero
				}
				//if (c == 15 && t != 0)
					//for (c=0; c<=t; c++)			//imprime oq sobrou
						//printf ("impar[%i] = %i\n", c, impar[c]);
			}
			else	//eentra para o valor par
			{
				par[t2] = num;	
				t2++;
				if (t2 == 5)	//verifica de o vetor está cheio
				{
					for (t2=0; t2<5; t2++)
						printf ("par[%i] = %i\n", t2, par[t2]);		//imprime o vetor cheio
				
					t2 = 0;		//limpa para iniciar o vetor do zero
				}
				//if (c == 15 && t != 0)
					//for (c2=0; c2<=t2; c++)			//imprime oq sobrou
						//printf ("impar[%i] = %i\n", c, impar[c]);
			}
		 
		}
	}
	

	
		if (t != 0)	//verifica se sobrou valores no vetor
			for (c=0; c<t; c++)	//imprime oq sobrou
				printf ("impar[%i] = %i\n", c, impar[c]);

		if (t2 != 0)	//verifica se soboru valores no vetor
			for (c=0; c<t2; c++) //imprime oq sobrou
				printf ("par[%i] = %i\n", c, par[c]);
		
	
		//printf ("t=%i - t2=%i - c=%i - c2=%i", t, t2, c, c2);
	return 0;
}