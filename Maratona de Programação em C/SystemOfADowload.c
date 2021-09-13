#include<stdio.h>

int main()
{
	int c, i, num1, num2;
	
	scanf("%d", &c);
	
	for(i=0; i<c; i++)
	{
		scanf("%d%d", &num1, &num2);
		
		if(num1 + num2 == 0)
		{
			printf("PROXYCITY\n");
		}
		else if(num1 + num2 == 1)
		{
			printf("P.Y.N.G.\n");
		}
		else if(num1 + num2 == 2)
		{
			printf("DNSUEY!\n");
		}
		else if(num1 + num2 == 3)
		{
			printf("SERVERS\n");
		}
		else if(num1 + num2 == 4)
		{
			printf("HOST!\n");
		}
		else if(num1 + num2 == 5)
		{
			printf("CRIPTONIZE\n");
		}
		else if(num1 + num2 == 6)
		{
			printf("OFFLINE DAY\n");
		}
		else if(num1 + num2 == 7)
		{
			printf("SALT\n");
		}
		else if(num1 + num2 == 8)
		{
			printf("ANSWER!\n");
		}
		else if(num1 + num2 == 9)
		{
			printf("RAR?\n");
		}
		else if(num1 + num2 == 10)
		{
			printf("WIFI ANTENNAS\n");
		}
	}
	
	return 0;
}
