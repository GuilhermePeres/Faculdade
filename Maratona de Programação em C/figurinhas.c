#include<stdio.h>

int mdc(int, int);

int main()
{
	int N, i, F1, F2, result;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
	{
		scanf("%d%d", &F1, &F2);
		
		result = mdc(F1, F2);
		
		printf("%d\n", result);
	}
	return 0;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}
