#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number, i, total = 1;

	scanf("%d", &number);
	
	for ( i = 1; i <= number; i++)
	{
		total *= i;
	}
	printf("%d", total);
}