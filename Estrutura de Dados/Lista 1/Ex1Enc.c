#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Ex1Enc.h"

void InicializaLista(Descr *lst)
{	lst->inicio = NULL;
	lst->final = NULL;
}

int IncluiNo(Descr *lst, char Nome[31], int Pop, float AreaTerri, float Pib, float Idh)
{	struct Lista *aux;
	
	/* criando uma variavel struct Lista dinamicamente */
	aux = (struct Lista *) malloc(sizeof(struct Lista));

	if (aux == NULL)
		return FALSE;
		
	/* preenchendo os campos da variavel criada dinamicamente */
	strcpy(aux->NomeCidade, Nome);
	aux->Populacao = Pop;
	aux->Area = AreaTerri;
	aux->PIB = Pib;
	aux->IDH = Idh;
	aux->prox = NULL;
	
	/* fazendo o encadeamento do novo noh na lista */
	if (lst->inicio == NULL)
	{
		lst->inicio = aux;
		lst->inicio->anterior = NULL; //nova linha
	}
	else
	{
		lst->final->prox = aux;
	}
	
	if(lst->final == NULL)
	{
		lst->final = aux;
		aux->anterior = NULL;
	}
	else
	{
		lst->final->anterior = aux->anterior;
	}

	/* atualizando os descritores da lista */
	aux->anterior = lst->final;
	lst->final = aux;
	lst->final->prox = NULL;

	return TRUE;
}

void ImprimeLista(Descr lst, char *cabec)
{	struct Lista *aux;

	printf("\n\n\n%s\n", cabec);
	aux = lst.inicio;

	while (aux != NULL)
	{	printf("%s\n", aux->NomeCidade);
		printf("%d\n", aux->Populacao);
		printf("%f\n", aux->Area);
		printf("%f\n", aux->PIB);
		printf("%f\n", aux->IDH);
		
		aux = aux->prox;
	}
}

void ImprimeListaFinal(Descr lst, char *cabec)
{
	struct Lista *aux;

	printf("\n\n\n%s\n", cabec);
	aux = lst.final;

	while (aux != NULL)
	{	printf("%s\n", aux->NomeCidade);
		printf("%d\n", aux->Populacao);
		printf("%f\n", aux->Area);
		printf("%f\n", aux->PIB);
		printf("%f\n", aux->IDH);
		
		aux = aux->anterior;
	}
}

int ExcluiNo(Descr *lst, int idh)
{	struct Lista *aux, *ant;
	int n = 0;

	while(1)
	{		
		ant = NULL;
		aux = lst->inicio;
		while (aux != NULL && aux->IDH < idh)
		{	ant = aux;
			aux = aux->prox;
		}
		
		if (aux == NULL)
		{
			if(n == 0)
			{
				return FALSE;
			}
			else
				return TRUE;
		}	
		else
		{	
			n = 1;
		
			/* acertando o encadeamento */
			if (ant == NULL)
				lst->inicio = aux->prox;
			else
				ant->prox = aux->prox;
				
			/* atualizando os outros descritores */				
			if (aux == lst->final)
					lst->final = ant;
				
			free(aux);
		}
	}
}
