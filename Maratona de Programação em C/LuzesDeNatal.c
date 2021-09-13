#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 64

int main()
{
   long long int n, bina[TAM], i, j, soma1, soma2, tot, t;
   soma1 = soma2 = 0;
   
   scanf("%lld", &tot);
   
   for(t=0; t<tot; t++)
   {
		scanf("%lld", &n);
		
		while(n > 0)
		{
	    	if(n % 2 == 0)
	    	{
	        	bina[i] = 0;
	       	}
	      	else
			{
				bina[i] = 1;
			}
	    	n = n / 2;
	    	i++;
		}
		
		//	for(j=0; j<TAM; j++)
		//	{
		//		printf("%d", bina[j]);
		//	}
		
		for(j=0; j<i; j++)
		{
	       if(bina[j] == 1)
	       {
	    		soma1++;
		   }
		   else
		   {
		   		if(soma2 < soma1)
		   			soma2 = soma1;
		   			
		   		soma1 = 0;
		   }
		}
		
		if(soma2 < soma1)
		   	soma2 = soma1;
		   			
	   printf("%lld\n", soma2);
	   
	   soma2=0;
	   soma1=0;
	   i = 0;
	}
   return 0;
}
