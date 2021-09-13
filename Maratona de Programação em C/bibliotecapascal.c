#include<stdio.h>

int main()
{
	int lin, col, vetor[501][101], i, j, presente, no, controle, yes;
	
	yes = no = 0;
		
	while(scanf("%d%d", &col, &lin))
	{
		if(col == 0 && lin == 0)
			return 0;
			
		for(j=0; j<col; j++)
		{
			for(i=0; i<lin; i++)
			{
				scanf("%d", &presente);
				
				if(presente == 0)
					no = 1;
			}
			if(no == 0)
				yes = 1;
				
			no = 0;
		}
		
		if(yes == 1)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
			
		yes = 0;
	}
}
