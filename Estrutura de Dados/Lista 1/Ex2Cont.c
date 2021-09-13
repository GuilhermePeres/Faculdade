#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Ex2Cont.h"

#define TRUE	1
#define FALSE	0
#define TAM 1000

int IncluiNo(Descr *lst, char Nome[31], int Pop, float AreaTerri, float Pib, float Idh)
{	
	strcpy(listinha[contador].NomeCidade, Nome);
	listinha[contador].Populacao = Pop;
	listinha[contador].Area = AreaTerri;
	listinha[contador].PIB = Pib;
	listinha[contador].IDH = Idh;
	
	contador++;
	
	return TRUE;
}

void ImprimeLista(Descr control, char *cabec)
{	
	int j;
	
	printf("\n\n\n%s\n", cabec);
	
	for(j=0; j<contador; j++)
	{
		printf("%s\n", listinha[j].NomeCidade);
		printf("%d\n", listinha[j].Populacao);
		printf("%f\n", listinha[j].Area);
		printf("%f\n", listinha[j].PIB);
		printf("%f\n", listinha[j].IDH);	
	}
}

void ImprimeListaFinal(Descr control, char *cabec)
{
	int j;
	
	printf("\n\n\n%s\n", cabec);
	
	for(j=contador-1; j>=0; j--)
	{
		printf("%s\n", listinha[j].NomeCidade);
		printf("%d\n", listinha[j].Populacao);
		printf("%f\n", listinha[j].Area);
		printf("%f\n", listinha[j].PIB);
		printf("%f\n", listinha[j].IDH);	
	}
}

int ExcluiNo(Descr *lst, int idh)
{	
	int i, j, cont;
	
	cont = 0;
	
	for(j=0; j<contador; j++)
	{
		if(listinha[j].IDH >= idh)
		{
			cont++;
			for(i=j; i<contador; i++)
			{
				strcpy(listinha[i].NomeCidade, listinha[i+1].NomeCidade);
				listinha[i].Populacao = listinha[i+1].Populacao;
				listinha[i].Area = listinha[i+1].Area;
				listinha[i].PIB = listinha[i+1].PIB;
				listinha[i].IDH = listinha[i+1].IDH;		
			}
			j--;
		}
    }
    
    contador = contador - cont;
    
    if(cont != 0)
    	return TRUE;
    else
    	return FALSE;
}

void InicializaLista(Descr *lst)
{}
