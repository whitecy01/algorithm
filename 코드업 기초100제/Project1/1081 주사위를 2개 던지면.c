#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, second , i , j;

	scanf("%d %d", &first, &second);

	for ( i = 1; i <= first; i++)
	{
		for ( j = 1; j <= second; j++)
		{
			printf("%d", i);
			printf(" %d\n", j);
		}
	}
}