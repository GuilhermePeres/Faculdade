#include <stdio.h>
#include <stdlib.h>

struct regNo{	struct regNo *esq;
				int valor;
				struct regNo *dir;
			};
typedef struct regNo TNo;

TNo *AchaPai(TNo *, int);

void ImprimeArvorePre(TNo *, int, int);
void ImprimeArvoreIn(TNo *, int, int);
void ImprimeArvorePos(TNo *, int, int);

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
		
		printf("Pre.:");
		ImprimeArvorePre(raiz, numeros, 0);
		printf("\n");
		
		printf("In..:");
		ImprimeArvoreIn(raiz, numeros, 0);
		printf("\n");
		
		printf("Post:");
		ImprimeArvorePos(raiz, numeros, 0);
		printf("\n");
		printf("\n");
		
		raiz = NULL;
	}	
	
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

void ImprimeArvorePre(TNo *r, int total, int i)
{
	if (r != NULL)
	{	
		printf(" %d", r->valor);
				
		ImprimeArvorePre(r->esq, total, i);
		ImprimeArvorePre(r->dir, total, i);
	}
}

void ImprimeArvoreIn(TNo *r, int total, int i)
{	
	if (r != NULL)
	{	
		ImprimeArvoreIn(r->esq, total, i);
		
		printf(" %d", r->valor);
					
		ImprimeArvoreIn(r->dir, total, i);
	}
}

void ImprimeArvorePos(TNo *r, int total, int i)
{		
	if (r != NULL)
	{	
		ImprimeArvorePos(r->esq, total, i);
		ImprimeArvorePos(r->dir, total, i);
		
		printf(" %d", r->valor);
	}
}
