#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number_1, i, check , count = 0;

	scanf("%d", &number_1);

	for ( i = 1; i <= number_1; i++)
	{
		check = i % 10;
		if (check == 1)
		{
			count++;
		}
	}
	printf("%d", count);

}