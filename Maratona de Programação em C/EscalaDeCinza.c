#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int i, casos, num1, num2, num3;
	float result;
	char c[5];
	char eye[] = "eye";
	char mean[] = "mean";
	char max[] = "max";
	char min[] = "min";
		
	
	scanf("%i", &casos);
	
	for(i=0; i<casos; i++)
	{	
		scanf("%s", &c);
		
		scanf("%i%i%i", &num1, &num2, &num3);
			
		if(strcmp(c, eye) == 0)
		{
			result = 0.30*num1 + 0.59*num2 + 0.11*num3;
			result = floor(result);
			printf("Caso #%i: %.0f\n", i+1, result);
		}	
		else if(strcmp(c, mean) == 0)
		{
			result = (num1 + num2 + num3) / 3;
			result = floor(result);
			printf("Caso #%i: %.0f\n", i+1, result);
		}
		else if(strcmp(c, max) == 0)
		{
			if(num1 >= num2 && num1 >= num3)
			{
				result = num1;
			}
			else if(num2 >= num1 && num2 >= num3)
			{
				result = num2;
			}
			else
			{
				result = num3;
			}
			
			printf("Caso #%i: %.0f\n", i+1, result);
		}
		else if(strcmp(c, min) == 0)
		{
			if(num1 <= num2 && num1 <= num3)
			{
				result = num1;
			}
			else if(num2 <= num1 && num2 <= num3)
			{
				result = num2;
			}
			else
			{
				result = num3;
			}
			
			printf("Caso #%i: %.0f\n", i+1, result);			
		}
	}
	
	return 0;
}
