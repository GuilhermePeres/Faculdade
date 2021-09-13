#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 21
#define TRUE	1
#define FALSE	0

struct Lista1 {char palavra1[TAM]; struct Lista1 *prox1;};
struct Lista2 {char palavra2[TAM]; struct Lista2 *prox2;};

typedef struct {struct Lista1 *inicio1, *final1;} Descr1;
typedef struct {struct Lista2 *inicio2, *final2;} Descr2;

void ImprimeLista1(Descr1, char *);
void ImprimeLista2(Descr2, char *);

void InicializaLista1(Descr1 *);
void InicializaLista2(Descr2 *);

int IncluiNo1(Descr1 *, char palavra[TAM]);
int IncluiNo2(Descr2 *, char palavra[TAM]);

int Uniao(Descr1 *, Descr2 *);

int Iguais(Descr1 *, Descr2 *);

int Diferenca1e2(Descr1 *, Descr2 *);
int Diferenca2e1(Descr1 *, Descr2 *);

int main(void)
{	char palavra[TAM];
	Descr1 listinha1;
	Descr2 listinha2;
	
	int total1 = 0;
	int total2 = 0;

	/* Inicializando os descritores da lista */
	InicializaLista1(&listinha1);
	InicializaLista2(&listinha2);
	
	while (TRUE)
	{	printf("Informe as palavras da primeira lista:\n(para encerrar informe '*')\n");
		scanf("%s", &palavra);
		
		if(strcmp(palavra, "*") == 0)
		{
			break;
		}
		
		total1++;

		if (IncluiNo1(&listinha1, palavra) == FALSE)
		{	puts("Memoria insuficiente");
			return 2;
		}
	}
	
	while (TRUE)
	{	printf("Informe as palavras da segunda lista:\n(para encerrar informe '*')\n");
		scanf("%s", &palavra);
		
		if(strcmp(palavra, "*") == 0)
		{
			break;
		}
		
		total2++;

		if (IncluiNo2(&listinha2, palavra) == FALSE)
		{	puts("Memoria insuficiente");
			return 2;
		}
	}
	
	/* imprimindo os valores da lista */
	ImprimeLista1(listinha1, "Conteudo da primeira lista:");
	ImprimeLista2(listinha2, "Conteudo da segunda lista:");
	
	/*Exibindo uniao*/
	printf("\nExibindo a uniao das duas listas:\n");	
	Uniao(&listinha1, &listinha2);
	
	/*Exibindo a interscção*/
	printf("\nExibindo a interseccao das duas listas:\n");
	Iguais(&listinha1, &listinha2);
	printf("\nExibindo a diferenca do conjunto 1 - conjunto 2\n");
	Diferenca1e2(&listinha1, &listinha2);
	
	/*Exibindo as diferenças*/
	printf("\nExibindo a diferenca do conjunto 2 - conjunto 1\n");
	Diferenca2e1(&listinha1, &listinha2);
	
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

int IncluiNo1(Descr1 *lst, char palavra[TAM])
{	struct Lista1 *aux;
	
	/* criando uma variavel struct Lista dinamicamente */
	aux = (struct Lista1 *) malloc(sizeof(struct Lista1));

	if(aux == NULL)
		return FALSE;
		
	/* preenchendo os campos da variavel criada dinamicamente */
	
	strcpy(aux->palavra1, palavra);

	/* fazendo o encadeamento do novo noh na lista */
	if(lst->inicio1 == NULL)
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

int IncluiNo2(Descr2 *lst, char palavra[TAM])
{	struct Lista2 *aux;
	
	/* criando uma variavel struct Lista dinamicamente */
	aux = (struct Lista2 *) malloc(sizeof(struct Lista2));

	if(aux == NULL)
		return FALSE;
		
	/* preenchendo os campos da variavel criada dinamicamente */
	
	strcpy(aux->palavra2, palavra);

	/* fazendo o encadeamento do novo noh na lista */
	if(lst->inicio2 == NULL)
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

	printf("\n\n%s\n", cabec);
	aux = lst.inicio1;

	while (aux != NULL)
	{	printf("%s\n", aux->palavra1);		
		aux = aux->prox1;
	}
}

void ImprimeLista2(Descr2 lst, char *cabec)
{	struct Lista2 *aux;

	printf("\n\n%s\n", cabec);
	aux = lst.inicio2;

	while (aux != NULL)
	{	printf("%s\n", aux->palavra2);
		aux = aux->prox2;
	}
}

int Uniao(Descr1 *lst1, Descr2 *lst2)
{	struct Lista1 *aux1;
	struct Lista2 *aux2;
	int num;
	
	aux1 = lst1->inicio1;
	
	while(aux1 != NULL)
	{
		printf("%s\n", aux1->palavra1);
		aux1 = aux1->prox1;
	}
	
	aux2 = lst2->inicio2;
	
	while(aux2 != NULL)
	{	
		num = 0;
			
		aux1 = lst1->inicio1;
		
		while(aux1 != NULL)
		{
			if(strcmp(aux1->palavra1, aux2->palavra2) == 0)
			{
				num = 1;
			}
			
			aux1 = aux1->prox1;
		}
		
		if(num == 0)
		{
			printf("%s\n", aux2->palavra2);
		}
		
		aux2 = aux2->prox2;
	}
	
	return TRUE;		
}

int Iguais(Descr1 *lst1, Descr2 *lst2)
{
	struct Lista1 *aux1;
	struct Lista2 *aux2;
	int num;
	
	aux2 = lst2->inicio2;
	
	while(aux2 != NULL)
	{	
		num = 0;
			
		aux1 = lst1->inicio1;
		
		while(aux1 != NULL)
		{
			if(strcmp(aux1->palavra1, aux2->palavra2) == 0)
			{
				num = 1;
			}
			
			aux1 = aux1->prox1;
		}
		
		if(num == 1)
		{
			printf("%s\n", aux2->palavra2);
		}
		
		aux2 = aux2->prox2;
	}
	
	return TRUE;		
}

int Diferenca1e2(Descr1 *lst1, Descr2 *lst2)
{
	struct Lista1 *aux1;
	struct Lista2 *aux2;
	int num;
	
	aux1 = lst1->inicio1;
	
	while(aux1 != NULL)
	{	
		num = 0;
			
		aux2 = lst2->inicio2;
		
		while(aux2 != NULL)
		{
			if(strcmp(aux2->palavra2, aux1->palavra1) == 0)
			{
				num = 1;
			}
			
			aux2 = aux2->prox2;
		}
		
		if(num == 0)
		{
			printf("%s\n", aux1->palavra1);
		}
		
		aux1 = aux1->prox1;
	}
	
	return TRUE;
}

int Diferenca2e1(Descr1 *lst1, Descr2 *lst2)
{
	struct Lista1 *aux1;
	struct Lista2 *aux2;
	int num;
	
	aux2 = lst2->inicio2;
	
	while(aux2 != NULL)
	{	
		num = 0;
			
		aux1 = lst1->inicio1;
		
		while(aux1 != NULL)
		{
			if(strcmp(aux1->palavra1, aux2->palavra2) == 0)
			{
				num = 1;
			}
			
			aux1 = aux1->prox1;
		}
		
		if(num == 0)
		{
			printf("%s\n", aux2->palavra2);
		}
		
		aux2 = aux2->prox2;
	}
	
	return TRUE;
}
