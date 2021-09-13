#include <stdio.h>
#include <math.h>

int main ()

{
	double a, b, c, hipotenusa, cateto1, cateto2;
	
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	if (a > b && a > c)
	{
		hipotenusa = a;
		
		if (b < c)
		{
			cateto1 = b;
			cateto2 = c;
		}
		else
		{
			cateto1 = c;
			cateto2 = b;
		}
	}	
	else
		if (b > a && b > c)
		{
			hipotenusa = b;
		
			if (a < c)
			{
				cateto1 = a;
				cateto2 = c;
			}
			else
			{
				cateto1 = c;
				cateto2 = a;
			}		
		}
		else
			if (c > a && c > b)
			{
				hipotenusa = c;
				
				if (a < b)
				{
					cateto1 = a;
					cateto2 = b;
				}
				else
				{
					cateto1 = b;
					cateto2 = a;
				}		
			}	
			else
			{
				hipotenusa = a;
				cateto1 = b;
				cateto2 = c;
			}
	
	if (hipotenusa >= cateto1 + cateto2)
	{
		printf ("NAO FORMA TRIANGULO\n");
		return 0;
	}
	
	if (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2))
		printf ("TRIANGULO RETANGULO\n");
		
	if (pow(hipotenusa, 2) > pow(cateto1, 2) + pow(cateto2, 2))
		printf ("TRIANGULO OBTUSANGULO\n");
	
	if (pow(hipotenusa, 2) < pow(cateto1, 2) + pow(cateto2, 2))
		printf ("TRIANGULO ACUTANGULO\n");
	
	if (hipotenusa == cateto1 && cateto1 == cateto2)
		printf ("TRIANGULO EQUILATERO\n");
	else
		if ((hipotenusa == cateto1 && cateto1 != cateto2) || (hipotenusa == cateto2 && cateto2 != cateto1) || (cateto1 == cateto2 && cateto2 != hipotenusa))
			printf ("TRIANGULO ISOSCELES\n");
	
	return 0;
}