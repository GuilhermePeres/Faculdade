/*	
	Exercício 1 e 2 (Arquivo Cliente).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Ex1Enc.h"
//#include "Ex2Cont.h"

#define TRUE	1
#define FALSE	0

int main(void)
{	char Municipio[31];
	char Nome[31];
	int Pop, numero;
	float AreaTerri;
	float pib;
	float idh;
	Descr listinha;

	/* Inicializando os descritores da lista */
	InicializaLista(&listinha);
	
	while (TRUE)
	{	printf("Informe o nome do municipio:\n(para encerrar informe 'FIM')\n");
		scanf("%s", &Municipio);
		
		if(strcmp(Municipio, "FIM") == 0)
		{
			break;
		}
		
		printf("Informe o nome da cidade:\n");
		scanf("%s", &Nome);
			
		printf("Informe sua populacao:\n");
		scanf("%d", &Pop);
		
		printf("Informe sua area territorial:\n");
		scanf("%f", &AreaTerri);
		
		printf("Informe seu PIB:\n");
		scanf("%f", &pib);
		
		printf("Informe seu IDH:\n");
		scanf("%f", &idh);

		if (IncluiNo(&listinha, Nome, Pop, AreaTerri, pib, idh) == FALSE)
		{	puts("Memoria insuficiente");
			return 2;
		}
	}
	
	/* imprimindo os valores da lista */
	ImprimeLista(listinha, "Conteudo da lista a partir do inicio:");
	ImprimeListaFinal(listinha, "Conteudo da lista a partir do final:");
	
	while (TRUE)
	{	printf("Informe o IDH a excluir:\n(ou um numero negativo para encerrar)\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;
	
		if (ExcluiNo(&listinha, numero) == FALSE)
			printf("Valor %d nao encontrado na lista\n", numero);
		else
		{
			ImprimeLista(listinha, "Novo conteudo da lista a partir do inicio:");
			ImprimeListaFinal(listinha, "Novo conteudo da lista a partir do final:");
		}
	}

	return 0;
}

