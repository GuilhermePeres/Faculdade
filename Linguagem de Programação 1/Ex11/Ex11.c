#include <stdio.h>

// exercício 11 da Lista 1 - Funções

int main ()
{
	float nota1, nota2, nota3, media, maior, menor, meio;
	
	//leitura de dados
	
	printf ("Digite a nota da primeira prova:\n");
	
	scanf ("%f", &nota1);
	
	printf ("Digite a nota da segunda prova:\n");
	
	scanf ("%f", &nota2);
	
	printf ("Digite a nota da terceira prova:\n");
	
	scanf ("%f", &nota3);
	
	//fazendo as médias
	
	media = (nota1 + nota2 + nota3)/3;
	
	printf ("A media das 3 provas e de: %.2f\n", media);
	
	if (nota1 > nota2)
	{
		maior = nota1;
		meio = nota2;
	}
	else
	{
		maior = nota2;
		meio = nota1;
	}
	
	if (nota3 > maior)
	{
		menor = meio;
		meio = maior;
		maior = nota3;
	}
	else if (nota3 > meio)
	{
		menor = meio;
		meio = nota3;
	}
	else
	{
		menor = nota3;
	}
	
	media = (maior + meio) / 2;
	
	printf ("A media das duas notas mais altas e de: %.2f\n", media);
	
	media = (maior + menor) /2;
	
	printf ("A media da nota mais alta com a nota mais baixa e de: %.2f\n", media);
	
	return 0;	
}