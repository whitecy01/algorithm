#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number_1, i, check, count = 0;

	scanf("%d", &number_1);

	for ( i = 0; i < number_1; i++)
	{
		scanf("%d", &check);
		if (check > count)
		{
			count = check;
		}
	}
	printf("%d", count);
}