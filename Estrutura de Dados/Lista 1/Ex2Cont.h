/*	
	Exercício 2 (Arquivo.h).
*/

#define TRUE	1
#define FALSE	0
#define TAM 1000

struct Lista {char NomeCidade[31]; int Populacao; float Area; float PIB; float IDH; struct Lista *prox; struct Lista *anterior;};
struct Lista listinha[TAM], aux;

typedef struct {struct Lista *inicio, *final;} Descr;

void ImprimeLista(Descr, char *);
void ImprimeListaFinal(Descr, char *);

void InicializaLista(Descr *lst);

int IncluiNo(Descr *, char *, int, float, float, float);
int ExcluiNo(Descr *, int);
int contador;
