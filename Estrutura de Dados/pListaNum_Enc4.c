/* 
	Programa carrega uma lista ENCADEADA de inteiros, a imprime e depois pesquisa um valor e o exclui, caso ele exista na lista
	Usa conjunto de descritores estruturado e subrotinas
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regLista {int valor; struct regLista *prox;};

typedef struct {struct regLista *inicio, *final; int qtde;} TDescr;

void ImprimeLista(TDescr, char *);
void InicializaLista(TDescr *);

int main(void)
{	int numero;
	struct regLista *aux, *ant;
	TDescr lista;

	/* Inicializando os descritores da lista */
	InicializaLista(&lista);
	
	while (1)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero == -999)
			break;
		
		/* criando uma variável struct regLista dinamicamente */
		aux = (struct regLista *) malloc(sizeof(struct regLista));

		if (aux == NULL)
		{	puts("Memoria insuficiente");
			return 2;
		}
		
		/* preenchendo os campos da variável criada dinamicamente */
		aux->valor = numero;
		aux->prox = NULL;
	
		/* fazendo o encadeamento do novo nó na lista */
		if (lista.inicio == NULL)
			lista.inicio = aux;
		else
			lista.final->prox = aux;

		/* atualizando os descritores da lista */
		lista.qtde = lista.qtde + 1;
		lista.final = aux;
	}
	
	/* imprimindo os valores da lista */
	ImprimeLista(lista, "Conteudo da lista:");
	
	while (1)
	{	printf("Informe o numero a excluir (ou -999 para encerrar):\n");
		scanf("%d", &numero);

		if (numero == -999)
			break;
			
		ant = NULL;
		aux = lista.inicio;
		while (aux != NULL && aux->valor != numero)
		{	ant = aux;
			aux = aux->prox;
		}
	
		if (aux == NULL)
			printf("Valor %d nao encontrado na lista\n", numero);
		else
		{	puts("Valor existe na lista e sera DESTRUIDO!!!!!");
			
			/* acertando o encadeamento */
			if (ant == NULL)
				lista.inicio = aux->prox;
			else
				ant->prox = aux->prox;
			
			/* atualizando os outros descritores */
			lista.qtde = lista.qtde - 1;
			
			if (aux == lista.final)
				lista.final = ant;
			
			free(aux);
	
			/* imprimindo os valores da lista apos a exclusao*/
			ImprimeLista(lista, "Novo conteudo da lista:");
		}
	}

	return 0;
}

void InicializaLista(TDescr *lst)
{	lst->inicio = NULL;
	lst->final = NULL;
	lst->qtde = 0;
}

void ImprimeLista(TDescr lst, char *cabec)
{	struct regLista *aux;
	int maior, menor, soma;

	printf("\n\n\n%s\n", cabec);
	aux = lst.inicio;
	soma = 0;
	if (aux != NULL)
	{	maior = aux->valor;
		menor = aux->valor;
	}
	while (aux != NULL)
	{	printf("%5d\n", aux->valor);

		soma = soma + aux->valor;
		if (aux->valor > maior)
			maior = aux->valor;
		
		if (aux->valor < menor)
			menor = aux->valor;
		
		aux = aux->prox;
	}
	
	printf("\nMaior: %d   Menor: %d    Media: %.2f\n", maior, menor, soma / (float)lst.qtde);
}
