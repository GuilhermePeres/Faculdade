#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE	1
#define FALSE	0

struct Lista1 {int Num1; struct Lista1 *prox1;};
struct Lista2 {int Num2; struct Lista2 *prox2;};

typedef struct {struct Lista1 *inicio1, *final1;} Descr1;
typedef struct {struct Lista2 *inicio2, *final2;} Descr2;

void ImprimeLista1(Descr1, char *);
void ImprimeLista2(Descr2, char *);

void InicializaLista1(Descr1 *);
void InicializaLista2(Descr2 *);

int IncluiNo1(Descr1 *, int);
int IncluiNo2(Descr2 *, int);

int Exclui(Descr1 *, Descr2 *);

int main(void)
{	int numero;
	Descr1 listinha1;
	Descr2 listinha2;
	
	int total1 = 0;
	int total2 = 0;

	/* Inicializando os descritores da lista */
	InicializaLista1(&listinha1);
	InicializaLista2(&listinha2);
	
	while (TRUE)
	{	printf("Informe os numeros da primeira lista:\n(para encerrar informe '-999')\n");
		scanf("%d", &numero);
		
		if(numero == -999)
		{
			break;
		}
		
		total1++;

		if (IncluiNo1(&listinha1, numero) == FALSE)
		{	puts("Memoria insuficiente");
			return 2;
		}
	}
	
	while (TRUE)
	{	printf("Informe os numeros da segunda lista:\n(para encerrar informe '-999')\n");
		scanf("%d", &numero);
		
		if(numero == -999)
		{
			break;
		}
		
		total2++;

		if (IncluiNo2(&listinha2, numero) == FALSE)
		{	puts("Memoria insuficiente");
			return 2;
		}
	}
	
	/* imprimindo os valores da lista */
	ImprimeLista1(listinha1, "Conteudo da primeira lista:");
	ImprimeLista2(listinha2, "Conteudo da segunda lista:");
	
	/*Excluindo os valores repetidos na segunda lista*/	
	Exclui(&listinha1, &listinha2);
	
	ImprimeLista1(listinha1, "Conteudo da primeira lista:");
	ImprimeLista2(listinha2, "Conteudo da segunda lista:");
	
	return 0;
}

void InicializaLista1(Descr1 *lst)
{	lst->inicio1 = NULL;
	lst->final1 = NULL;
}

void InicializaLista2(Descr2 *lst)
{	lst->inicio2 = NULL;
	lst->final2 = NULL;
}

int IncluiNo1(Descr1 *lst, int num)
{	struct Lista1 *aux;
	
	/* criando uma variavel struct Lista dinamicamente */
	aux = (struct Lista1 *) malloc(sizeof(struct Lista1));

	if (aux == NULL)
		return FALSE;
		
	/* preenchendo os campos da variavel criada dinamicamente */
	
	aux->Num1 = num;
	
	/* fazendo o encadeamento do novo noh na lista */
	if (lst->inicio1 == NULL)
	{
		lst->inicio1 = aux;
	}
	else
	{
		lst->final1->prox1 = aux;
	}
	
	if(lst->final1 == NULL)
	{
		lst->final1 = aux;
	}

	/* atualizando os descritores da lista */
	lst->final1 = aux;
	lst->final1->prox1 = NULL;

	return TRUE;
}

int IncluiNo2(Descr2 *lst, int num)
{	struct Lista2 *aux;
	
	/* criando uma variavel struct Lista dinamicamente */
	aux = (struct Lista2 *) malloc(sizeof(struct Lista2));

	if (aux == NULL)
		return FALSE;
		
	/* preenchendo os campos da variavel criada dinamicamente */
	
	aux->Num2 = num;
	
	/* fazendo o encadeamento do novo noh na lista */
	if (lst->inicio2 == NULL)
	{
		lst->inicio2 = aux;
	}
	else
	{
		lst->final2->prox2 = aux;
	}
	
	if(lst->final2 == NULL)
	{
		lst->final2 = aux;
	}

	/* atualizando os descritores da lista */
	lst->final2 = aux;
	lst->final2->prox2 = NULL;

	return TRUE;
}

void ImprimeLista1(Descr1 lst, char *cabec)
{	struct Lista1 *aux;

	printf("\n\n\n%s\n", cabec);
	aux = lst.inicio1;

	while (aux != NULL)
	{	printf("%i\n", aux->Num1);		
		aux = aux->prox1;
	}
}

void ImprimeLista2(Descr2 lst, char *cabec)
{	struct Lista2 *aux;

	printf("\n\n\n%s\n", cabec);
	aux = lst.inicio2;

	while (aux != NULL)
	{	printf("%d\n", aux->Num2);
		aux = aux->prox2;
	}
}

int Exclui(Descr1 *lst1, Descr2 *lst2)
{	struct Lista1 *aux1, *ant1;
	struct Lista2 *aux2, *ant2;
	ant1 = NULL;
	aux1 = lst1->inicio1;
	
	while(aux1 != NULL)
	{				
		ant2 = NULL;
		aux2 = lst2->inicio2;
		
		while (aux2->prox2 != NULL && aux1->Num1 != aux2->Num2)
		{	
			ant2 = aux2;
			aux2 = aux2->prox2;
		}
		if(aux1->Num1 == aux2->Num2)
		{	
			/* acertando o encadeamento */
			if (ant2 == NULL)
				lst2->inicio2 = aux2->prox2;
			else									
				ant2->prox2 = aux2->prox2;
			
			/* atualizando os outros descritores */				
			if (aux2 == lst2->final2)
				lst2->final2 = ant2;
			
			free(aux2);	
		}
		ant1 = aux1;
		aux1 = aux1->prox1;
	}
	return TRUE;		
}
