/* 
	Programa carrega uma lista encadeada de inteiros, a imprime e depois pesquisa um valor e o exclui, caso ele
	exista na lista
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regLista {int valor; struct regLista *prox;};

void ultimo(struct regLista *, char *);

void ImprimeLista(struct regLista *, char *);

int main(void)
{	int numero, qtde;
	struct regLista *inicio, *aux, *ant;
	
	qtde = 0;
	
	/* inicializando a variável inicio com um endereco vazio */
	inicio = NULL;

	while (1)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero < 0)
			break;
		
		/* criando uma variável struct regLista dinamicamente */
		aux = (struct regLista *) malloc(sizeof(struct regLista));

		/* preenchendo os campos da variável criada dinamicamente */
		aux->valor = numero;
		aux->prox = NULL;
	
		/* fazendo o encadeamento do novo nó na lista */
		if (inicio == NULL)
			inicio = aux;
		else
			ant->prox = aux;

		ant = aux;
		
		qtde ++;
	} 
	
	printf("ultimo %d", ultimo);
	
	numero = 0;
	
	/* imprimindo os valores da lista */
	ImprimeLista(inicio, "Conteudo da lista:");
	
	while (numero >= 0)
	{		
		printf("Informe o numero a excluir:\n");
		scanf("%d", &numero);
		
		ant = NULL;
		aux = inicio;
		while (aux != NULL && aux->valor != numero)
		{	ant = aux;
			aux = aux->prox;
		}
		
		if (aux == NULL)
			printf("Valor %d nao encontrado na lista\n", numero);
		else
		{	if (ant == NULL)
				inicio = aux->prox;
			else
			{
				ant->prox = aux->prox;
				printf("Quantidade: %d", qtde--);
			}
			free(aux);
			
			/* imprimindo os valores da lista apos a exclusao*/
			ImprimeLista(inicio, "Novo conteudo da lista:");
			ultimo(ultimo, "ultimo:");
		}
	}
	return 0;
}

void ImprimeLista(struct regLista *lista, char *cabec)
{	struct regLista *aux;
	int maior = 0;
	int menor;
	int cont = 0;
	float medio = 0;
	
	printf("\n\n\n%s\n", cabec);
	aux = lista;
	menor = aux->valor;
	while (aux != NULL)
	{
		printf("%5d\n", aux->valor);
		
		medio = medio + aux->valor;
		cont++;
		
		if (aux->valor > maior)
		{
			maior = aux->valor;
		}
		
		if (aux->valor < menor)
		{
			menor = aux->valor;
		}		
		
		aux = aux->prox;
	}
	medio = medio/cont;
	printf("Maior = %i", maior);
	printf("Menor = %i", menor);
	printf("Medio = %f", medio);
}

void ultimo(struct regLista *lista, char *cabec)
{	struct regLista *aux;
	int b;

	printf("\n\n\n%s\n", cabec);
	aux = lista;
	while (aux != NULL)
	{
		printf("%5d\n", aux->valor);
		b = aux->valor;
		aux = aux->prox;
	}
	printf("ultimo: %d", b);
}
