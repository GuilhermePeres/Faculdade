#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);
int mdc(int, int);

int main(void)
{	TRac X, Y, R;
	int num, i;
	char tipo, lixo;

	scanf("%i", &num);

	for(i=0; i<num; i++)
	{
		scanf("%d", &X.num);
		scanf(" %c", &lixo);
		scanf("%d", &X.den);
		
		scanf(" %c", &tipo);
		
		scanf("%d", &Y.num);
		scanf(" %c", &lixo);
		scanf("%d", &Y.den);
	
		if(tipo == '+')
		{
			R = SomaRac(X, Y);	
			printf("%d/%d = ",	R.num, R.den);
			
			R = SimplRac(R);
			printf("%d/%d\n", R.num, R.den);
		}
		else if(tipo == '-')
		{
			R = SubtraiRac(X, Y);	
			printf("%d/%d = ", R.num, R.den);
			
			R = SimplRac(R);
			printf("%d/%d\n", R.num, R.den);
		}
		else if(tipo == '*')
		{
			R = MultRac(X, Y);	
			printf("%d/%d = ", R.num, R.den);
			
			R = SimplRac(R);
			printf("%d/%d\n", R.num, R.den);
		}
		else if(tipo == '/')
		{
			R = DivRac(X, Y);	
			printf("%d/%d = ", R.num, R.den);
					
			R = SimplRac(R);
			printf("%d/%d\n", R.num, R.den);
		}
	}
	
	return 0;
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

TRac SimplRac(TRac n1)
{	TRac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

