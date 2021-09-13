#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char c[1001];
	int n, i, tot, abre, fecha, j;
	
	scanf("%d", &n);
	getchar();
	
	for(i=0; i<n; i++)
	{	
		abre = 0;
		fecha = 0;
		tot = 0;
			
		gets(c);
		
		for(j=0; j<strlen(c); j++)
		{	
			if(c[j] == '<'){
				abre++;
			}
			else if(c[j] == '>'){
				if(abre > 0)
				{
					abre--;
					tot++;	
				}
			}
		}
		printf("%d\n", tot);
	}
	return 0;
}
