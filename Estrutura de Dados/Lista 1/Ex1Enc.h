/*
	Exercício 1 (Arquivo.h).
*/

#define TRUE	1
#define FALSE	0

struct Lista {char NomeCidade[31]; int Populacao; float Area; float PIB; float IDH; struct Lista *prox; struct Lista *anterior;};

typedef struct {struct Lista *inicio, *final;} Descr;

void ImprimeLista(Descr, char *);
void ImprimeListaFinal(Descr lst, char *);
void InicializaLista(Descr *);
int IncluiNo(Descr *, char *, int, float, float, float);
int ExcluiNo(Descr *, int);
