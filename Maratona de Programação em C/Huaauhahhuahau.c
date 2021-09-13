#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n, i, tot, j, met;
	char c[51], vogal[51], invert[51], metade1[51], metade2[51], aux;
	i = 0;
	
	gets(c);
	
	for(n=0; n<strlen(c); n++)
	{
		if(c[n] == 'a' || c[n] == 'e' || c[n] == 'i' || c[n] == 'o' || c[n] == 'u')
		{
			vogal[i] = c[n];
			i++;
		}
	}
	
	aux=i;
	
	for(j=0; j<i; j++)
	{
		aux--;
		invert[j] = vogal[aux];
	}
	

    /* if(i%2 == 0)
    {
    	met = i/2;
	}
	else
	{
		met=(i-1/2);
		i++;
	}*/

    
    met=i/2;

    for(j=0; j<met; j++)
	{					
        metade1[j] = vogal[j];
    }
    
    for(j=0; j<met; j++)
	{ 			
        metade2[j] = invert[j];
    }
    
    metade1[met]='\0';    
    metade2[met]='\0'; 

    if(strcmp(metade1, metade2) == 0)
	{ 
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}
