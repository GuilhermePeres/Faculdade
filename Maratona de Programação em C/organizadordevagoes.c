#include <stdio.h>

int main ()
{
    int Vet[50], Tam, Casos, i, j, troca, cont, Fim, aux, continua;

    scanf ("%i", &Casos);

    for (i=0; i<Casos; i++)
    {
        scanf("%i", &Tam);

        for (j=0; j<Tam; j++)
        {
            scanf ("%i", &Vet[j]);
        }

        Fim = Tam;
        do{
            for(cont=0; cont<Fim-1; cont++)
            {
                if(Vet[cont] > Vet[cont+1])
                {
                    aux = Vet[cont];
                    Vet[cont] = Vet[cont+1];
                    Vet[cont+1] = aux;
                    continua = i;
                    troca++;
                }
            }
            Fim--;
        }while(continua != 0);

        printf ("Optimal train swapping takes %i swaps.\n", troca);
    }
	return 0;
}
