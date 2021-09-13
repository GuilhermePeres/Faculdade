#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arvore{	struct Arvore *esq;
				char valor;
				struct Arvore *dir;
			};
typedef struct Arvore No;

No *AchaPai(No *, char);

void ImprimeArvorePre(No *);
void ImprimeArvoreIn(No *);
void ImprimeArvorePos(No *);
void PesquisaArvore(No *, char);

int controlador = 0;
int contPre = 0;
int contIn = 0;
int contPos = 0;

int main(void)
{	No *raiz = NULL, *aux, *pai;
	int casos, i, numeros, j, num;
	char string[10], letra;
	
	while(scanf("%s", &string) != EOF)
	{	
		if(strcmp(string, "I") == 0)
		{
			scanf(" %c", &letra);
			
			aux = (No *) malloc(sizeof(No));
			aux->valor = letra;
			aux->dir = NULL;
			aux->esq = NULL;
		
			/* Fazendo o encadeamento do novo noh */
			pai = AchaPai(raiz, letra);
			
			if (pai == NULL)
				raiz = aux;
			else
				if (letra <= pai->valor)
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
			scanf(" %c", &letra);
			PesquisaArvore(raiz, letra);
			
			if(controlador == 0)		
				printf("%c nao existe\n", letra);
			else
				printf("%c existe\n", letra);
		}
		
		controlador = 0;
				
		//raiz = NULL;
	}	
	
	return 0;
}

No *AchaPai(No *r, char n)
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
		if(contPre == 0)
		{
			printf("%c", r->valor);
			contPre++;
		}
		else
			printf(" %c", r->valor);
				
		ImprimeArvorePre(r->esq);
		ImprimeArvorePre(r->dir);
	}
}

void ImprimeArvoreIn(No *r)
{	
	if (r != NULL)
	{	
		ImprimeArvoreIn(r->esq);
		
		if(contIn == 0)
		{	
			printf("%c", r->valor);
			contIn++;
		}
		else
			printf(" %c", r->valor);
					
		ImprimeArvoreIn(r->dir);
	}
}

void ImprimeArvorePos(No *r)
{		
	if (r != NULL)
	{	
		ImprimeArvorePos(r->esq);
		ImprimeArvorePos(r->dir);
		
		if(contPos == 0)
		{
			printf("%c", r->valor);
			contPos++;
		}
		else
			printf(" %c", r->valor);
	}
}

void PesquisaArvore(No *r, char letra)
{		
	if (r != NULL)
	{	
		PesquisaArvore(r->esq, letra);
		PesquisaArvore(r->dir, letra);
		
		if(r->valor == letra)
		{
			controlador = 1;
		}
	}
}
