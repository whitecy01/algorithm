#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	float num1, num2, num3, num4;
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

	float a, b;

	a = (float)(num1 / num2);
	b = (float)(num3 / num4);

	//printf("%f %f", a, b);
	if (a > b) { printf(">"); }
	else if (a == b) { printf("="); }
	else { printf("<"); }

	/*
	int i ,a ,b , c ,d;

	scanf("%d %d %d %d", &a , &b, &c , &d );

	*/


	/*
	for ( i = b; i < d;  i = i * b)
	{
		if (b != d)
		{
			a = a * b;
			b = b * b;
		}
		if (b == d)
		{
			if (a > b)
			{
				printf(">");
				return;
			}
			else if (a < b)
			{
				printf("<");
				return;
			}
			else
			{
				printf("=");
				return;
			}
		}
	}
	*/
	//printf("%d %d %d %d", a, b, c, d);

	
	/*
	while (1)
	{
		if (b != d)
		{
			a = a * b;
			b = b * b;
		}
		//printf("%d %d %d %d\n", a, b, c, d);
		if (b == d)
		{
			if (a > b)
			{
				printf(">");
				break;
				return;
			}
			else if (a < b)
			{
				printf("<");
				break;
				return;
			}
			else
			{
				printf("=");
				break;
				return;
			}
		}
	}
	//printf("%d %d %d %d\n", a, b, c, d);
	*/
}