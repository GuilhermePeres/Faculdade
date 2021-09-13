#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sortNum(const void *a, const void *b);
int sortLetra(const void *a, const void *b);

struct Lista {int E; int D;};
struct Lista vetor[2000];
	
struct Igual {int lado; int troca; char letra;};
struct Igual vet[2000];

int main()
{	
	int total, i, j, igualNum, k = 0, trocas, l, tot, jafoiEsq[4000], jafoiDir[4000], foi, auxD, auxE;
		
	scanf("%d", &total);
	
	for(i=0; i<total; i++)
	{
		scanf("%d%d", &vetor[i].E, &vetor[i].D);
	}
	
	for(i=0; i<total; i++)
	{
		igualNum = -1;
		trocas = 0;
		auxE = 0;
		auxD = 0;
		
		for(foi=0; foi<k; foi++)
		{
			if(vetor[i].D == jafoiDir[foi])
			{
				auxD = 1;
			}
			if(vetor[i].E == jafoiEsq[foi])
			{
				auxE = 1;
			}
		}
		
		for(j=i+1; j<total; j++)
		{
			if(vetor[i].E == vetor[j].E)
			{
				igualNum = vetor[j].E;
				trocas++;	
				//printf("O numero %d e igual a %d\n", vetor[i].E, vetor[j].E);			
			}
		}
		
		jafoiEsq[k] = igualNum;
		
		if(igualNum != -1 && auxE != 1)
		{
			vet[k].lado = igualNum;
			vet[k].troca = trocas;
			vet[k].letra = 'E';
			k++;
			//printf("O numero %d esta na posicao %d e na esquerda\n", igualNum, k);	
		}
		
		trocas = 0;
		igualNum = -1;
		
		for(j=i+1; j<total; j++)
		{
			if(vetor[i].D == vetor[j].D)
			{
				igualNum = vetor[j].D;
				trocas++;
				//printf("O numero %d e igual a %d\n", vetor[i].D, vetor[j].D);	
			}
		}
		
		jafoiDir[k] = igualNum;
		
		if(igualNum != -1 && auxD != 1)
		{
			vet[k].lado = igualNum;
			vet[k].troca = trocas;
			vet[k].letra = 'D';
			k++;
			//printf("O numero %d esta na posicao %d e na direita\n", igualNum, k);	
		}
	}
	
	qsort(vet, k, sizeof(struct Igual), sortNum);
	//qsort(vet, k, sizeof(struct Igual), sortLetra);
	
	if(k == 0)
	{
		printf("SEM TROCAS DESTA VEZ\n");
		return 0;
	}
	
	for(i=0; i<k; i++)
	{
		printf("%d %c %d\n", vet[i].lado, vet[i].letra, vet[i].troca);
	}
	
	return 0;
}

int sortNum(const void *a, const void *b)
{
	struct Igual *antes = (struct Igual *)a; 
	struct Igual *depois = (struct Igual *)b;
	
	if(antes->lado != depois->lado)
	{
		if(antes->lado > depois->lado)
			return 1;
		else
			return -1;
	}
	else
	{
		if(antes->letra > depois->letra)
			return  1;
		else if(antes->letra == depois->letra)
			return 0;
		else
			return -1;
	}
}
