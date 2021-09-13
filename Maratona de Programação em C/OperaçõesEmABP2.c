#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arvore{	struct Arvore *esq;
				int valor;
				struct Arvore *dir;
			};
typedef struct Arvore No;

No *AchaPai(No *, int);
No *MaiorDireita(No *);

void ImprimeArvorePre(No *);
void ImprimeArvoreIn(No *);
void ImprimeArvorePos(No *);
void PesquisaArvore(No *, int);
void RemoverNo(No *, int);

int controlador = 0;
int contPre = 0;
int contIn = 0;
int contPos = 0;

int main(void)
{	No *raiz = NULL, *aux, *pai;
	int casos, i, numeros, j, num, k;
	char string[10], letra;
	
	k = 0;
	
	while(scanf("%s", &string) != EOF)
	{	
		if(strcmp(string, "I") == 0)
		{
			scanf("%d", &num);
			
			aux = (No *) malloc(sizeof(No));
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
		else if(strcmp(string, "INFIXA") == 0)
		{
			ImprimeArvoreIn(raiz);
			printf("\n");
			contIn = 0;			
		}
		else if(strcmp(string, "PREFIXA") == 0)
		{
			ImprimeArvorePre(raiz);
			printf("\n");
			contPre = 0;	
		}
		else if(strcmp(string, "POSFIXA") == 0)
		{
			ImprimeArvorePos(raiz);
			printf("\n");
			contPos = 0;
		}
		else if(strcmp(string, "P") == 0)
		{
			scanf("%d", &num);
			PesquisaArvore(raiz, num);
			
			if(controlador == 0)		
				printf("%d nao existe\n", num);
			else
				printf("%d existe\n", num);
		}
		else if(strcmp(string, "R") == 0)
		{
			scanf("%d", &num);
		
			RemoverNo(raiz, num);
		}
		
		controlador = 0;
				
		//raiz = NULL;
	}	
	
	return 0;
}

No *AchaPai(No *r, int n)
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

void ImprimeArvorePre(No *r)
{
	if (r != NULL)
	{	
		if(contPre == 0 && r->valor != 0)
		{
			printf("%d", r->valor);
			contPre++;
		}
		else if(r->valor != 0)
		{
			printf(" %d", r->valor);
		}
				
		ImprimeArvorePre(r->esq);
		ImprimeArvorePre(r->dir);
	}
}

void ImprimeArvoreIn(No *r)
{	
	if (r != NULL)
	{	
		ImprimeArvoreIn(r->esq);
		
		if(contIn == 0 && r->valor != 0)
		{	
			printf("%d", r->valor);
			contIn++;
		}
		else if(r->valor != 0)
		{
			printf(" %d", r->valor);
		}
					
		ImprimeArvoreIn(r->dir);
	}
}

void ImprimeArvorePos(No *r)
{		
	if (r != NULL)
	{	
		ImprimeArvorePos(r->esq);
		ImprimeArvorePos(r->dir);
		
		if(contPos == 0 && r->valor != 0)
		{
			printf("%d", r->valor);
			contPos++;
		}
		else if(r->valor != 0)
		{
			printf(" %d", r->valor);
		}
	}
}

void PesquisaArvore(No *r, int valor)
{		
	if (r != NULL)
	{	
		PesquisaArvore(r->esq, valor);
		PesquisaArvore(r->dir, valor);
		
		if(r->valor == valor)
		{
			controlador = 1;
		}
	}
}

void RemoverNo(No *r, int valor)
{
	if (r != NULL)
	{
		if(valor < r->valor)
		{
			RemoverNo(r->esq, valor);
		//	printf("\nif(letra < r->valor)\n");
		}
		else if(valor > r->valor)
		{
			RemoverNo(r->dir, valor);
		//	printf("\nelse if(letra > r->valor)\n");
		}
		else
		{
			r->valor = 0;
			/*
			No *aux;
			aux = r;
		//	printf("\nNo *aux = r;\n");
			
			if(r->esq == NULL && r->dir == NULL)
			{
				r->valor = 'a';
			}
			else if(r->esq == NULL)
			{
				//printf("\nelse if(r->esq == NULL)\n");
				r = r->dir;
			}
			else if(r->dir == NULL)
			{
				//printf("\nelse if(r->dir == NULL)\n");
				r = r->esq;
			}
			else
			{
				//printf("\nelse\n");
				aux = MaiorDireita(r->esq);
				aux->esq = r->esq;
				aux->dir = r->dir;
				
				r->esq = r->dir = NULL;
				
				r = aux;
			}
			*/
		}
	}
}

No *MaiorDireita(No *no)
{
	if(no->dir != NULL)
	{
		return MaiorDireita(no->dir);
	}
	else
	{
		No *aux = no;
		
		if(no->esq != NULL)
		{
			no = no->esq;
		}
		else
		{
			no = NULL;
		}
		
		return aux;
	}
}
