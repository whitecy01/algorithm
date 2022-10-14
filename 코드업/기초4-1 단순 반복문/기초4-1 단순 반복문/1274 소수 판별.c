#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number, i , count = 0;

	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("prime");
	}
	else 
	{
		printf("not prime");
	}
}