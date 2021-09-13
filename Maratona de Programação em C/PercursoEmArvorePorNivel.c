#include <stdio.h>
#include <stdlib.h>

struct regNo{	struct regNo *esq;
				int valor;
				struct regNo *dir;
			};
typedef struct regNo TNo;

TNo *AchaPai(TNo *, int);
void ImprimeArvore(TNo *);
//void ImprimeArvoreEsq(TNo *, int);
int ContaNos(TNo *);
int SomaNos(TNo *);
int ContaPares(TNo *);

int main(void)
{	TNo *raiz = NULL, *aux, *pai;
	int casos, i, numeros, j, num;
	
	scanf("%d", &casos);
	
	for(i=0; i<casos; i++)
	{	
		scanf("%d", &numeros);
		
		for(j=0; j<numeros; j++)
		{
			scanf("%d", &num);
			
			aux = (TNo *) malloc(sizeof(TNo));
			aux->valor = num;
			aux->dir = NULL;
			aux->esq = NULL;
		
			/* Fazendo o encadeamento do novo noh */
			pai = AchaPai(raiz, num);
			
			if (pai == NULL)
				raiz = aux;
			else
				if (num <= pai->valor)
					pai->esq = aux;
				else
					pai->dir = aux;
		}
		printf("Case %d:\n", i+1);
		ImprimeArvore(raiz);
		raiz = NULL;
	}
	
	//printf("\n\nA arvore possui %d elementos:\n", ContaNos(raiz));
	
	return 0;
}

TNo *AchaPai(TNo *r, int n)
{	
	if (r == NULL)
		return NULL;
	else
		if (n <= r->valor)
		/* n é descendente do lado esquerdo de r */
			if (r->esq == NULL)
				return r;
			else
				return AchaPai(r->esq, n);
		else
		/* n é descendente do lado direito de r */
			if (r->dir == NULL)
				return r;
			else
				return AchaPai(r->dir, n);
}

/*int ContaNos(TNo *r)
{	if (r == NULL)
		return 0;
	else
		return 1 + ContaNos(r->esq) + ContaNos(r->dir);
}*/

void ImprimeArvore(TNo *r)
{		
	if (r != NULL)
	{	
		ImprimeArvore(r->esq);
		ImprimeArvore(r->dir);
		printf("%d ", r->valor);
	}
}

/*void ImprimeArvoreEsq(TNo *r, int n)
{
	if (r != NULL)
	{
		printf("%d\n", r->valor);
		
		ImprimeArvoreDir(r->dir, n + 1);
	}
}*/
