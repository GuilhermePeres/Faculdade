#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 21

int Empilhar(char* vetor);

int Desempilhar(char* vetor, int total);

int main ()
{
	char vetor[TAM];
	int total;
	
	printf("Digite a expressao:\n");
	
	total = Empilhar(vetor);
	
	printf("A expressao foi empilhada.\n");
	
	printf("\nDesempilhando a expressao para verificar se e valida...\n");
	
	if(Desempilhar(vetor, total) == 0)
	{
		printf("\nA expressao nao e valida pois nao esta balanceada.\n");
	}
	else
	{
		printf("\nA expressao e valida e balanceada pois a pilha esta vazia.\n");
	}
	
	
	printf("%s\n", vetor);
	
	return 0;
}

int Empilhar(char* vetor)
{
	char c;
	int i = 0;
	
	while(1)
	{
		scanf("%c", &c);
		
		if(c == '\n')
			break;
		
		if(c == '(' || c == '[' || c == '{' || c == ')' || c == ']' || c == '}')
		{
			vetor[i] = c;
			i++;
		}
	}
	
	return i;
}

int Desempilhar(char* vetor, int total)
{
	char c;
	int i, j, entrou, cont; 
	i = entrou = cont = 0;
	
	while(1)
	{
		c = vetor[i];
	
		for(j=i; j<total; j++)
		{
			vetor[j] = vetor[j+1];
		}
		
		total--;
		
		if(c == '(' || c == '[' || c == '{')
		{
			entrou = 1;
			
			if(total == 0)
			{
				return 0;
			}
			
			for(j=0; j<total; j++)
			{
				if(vetor[j] != '(' && vetor[j] != '[' && vetor[j] != '{')
				{
					if(cont != 0)
					{
						cont--;
						continue;
					}
					
					if(c == '(' && vetor[j] == ')')
						j=total;
					else if(c == '[' && vetor[j] == ']')
						j=total;
					else if(c == '{' && vetor[j] == '}')
						j=total;
					else
						return 0;
				}
				else
					cont++;	
			}
			cont = 0;
		}
		
		if(total == 0)
		{
			if(entrou != 0)
			{
				return 1;
			}
			else
				return 0;
		}
	}
}
