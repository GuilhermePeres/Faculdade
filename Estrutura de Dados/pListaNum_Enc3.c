/* 
	Programa carrega uma lista ENCADEADA de inteiros, a imprime e depois pesquisa um valor e o exclui, caso ele exista na lista
	Usa conjunto de descritores nao estruturado
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regLista {int valor; struct regLista *prox;};

void ImprimeLista(struct regLista *, struct regLista *, int, char *);

void IniciarLista(struct regLista *, struct regLista *, int);

int main(void)
{	int numero, qtde;
	struct regLista *inicio, *final, *aux, *ant;

	/* Inicializando os descritores da lista */
	IniciarLista(inicio, final, qtde);

	while (1)
	{	printf("Informe o numero:\n");
		scanf("%d", &numero);

		if (numero == -999)
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
			final->prox = aux;

		/* atualizando os descritores da lista */
		qtde = qtde + 1;
		final = aux;
	}
	
	/* imprimindo os valores da lista */
	ImprimeLista(inicio, final, qtde, "Conteudo da lista:");
	
	while (1)
	{	printf("Informe o numero a excluir (ou -999 para encerrar):\n");
		scanf("%d", &numero);

		if (numero == -999)
			break;
			
		ant = NULL;
		aux = inicio;
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
				inicio = aux->prox;
			else
				ant->prox = aux->prox;
			
			/* atualizando os outros descritores */
			qtde = qtde - 1;
			
			if (aux == final)
				final = ant;
			
			free(aux);
	
			/* imprimindo os valores da lista apos a exclusao*/
			ImprimeLista(inicio, final, qtde, "Novo conteudo da lista:");
		}
	}

	return 0;
}

void ImprimeLista(struct regLista *lista, struct regLista *final, int qtde, char *cabec)
{	struct regLista *aux;
	int maior, menor, soma;

	printf("\n\n\n%s\n", cabec);
	aux = lista;
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
	
	printf("\nMaior: %d   Menor: %d    Media: %.2f\n", maior, menor, soma / (float)qtde);
}

void IniciarLista(struct regLista *inicio, struct regLista *final, int qtde)
{
	inicio = NULL;
	final = NULL;
	qtde = 0;
}
