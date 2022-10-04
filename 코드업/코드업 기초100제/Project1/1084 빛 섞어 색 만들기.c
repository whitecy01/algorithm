#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, second, third , i, j ,k, count = 0;

	scanf("%d %d %d", &first, &second, &third);

	for ( i = 0; i < first; i++)
	{
		for ( j = 0; j < second; j++)
		{
			for ( k = 0; k < third; k++)
			{
				printf("%d %d %d\n", i, j, k);
				count++;
			}
		}
	}
	printf("%d", count);

}