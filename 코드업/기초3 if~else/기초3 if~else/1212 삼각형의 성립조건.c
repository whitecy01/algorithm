#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//int  ch, ve, milk, egg, sa;
	//int ch = 400, ve = 340, milk = 170, egg = 100, sa = 70 ;
	int a, b, c, temp = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && a == c)
	{
		printf("yes");
	}

	if (a > b)
	{
		if (a > c)
		{
			temp = a;
			//printf("%d", temp);
			//return;
		}
	}
	else if (a < b)
	{
		//printf("de");
		if (b > c)
		{
			temp = b;
			//printf("%d", temp);
			//return; 
		}
		else if (c > b )
		{
			temp = c;
			//printf("%d", temp);
			//return;
		}
	}

	
	if (b > a)
	{
		if (b > c)
			temp = b;
		//return;
	}


	if (c > a)
	{
		if (c > b)
		{
			temp = c; 
			//return;
		}
	}
	
	


	if (temp == c)
	{
		if (a + b > temp)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else if (temp == b)
	{

		if (a + c > temp)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else if (temp == a)
	{

		if (b+ c> temp)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}

	
	
	
}