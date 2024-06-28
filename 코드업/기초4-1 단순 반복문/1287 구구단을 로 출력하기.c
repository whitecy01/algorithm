#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i,j,  max, min;
	char star = '*';
	scanf("%d", &max);
	for ( i = 1; i <= 9; i++)
	{
		for ( j = 1; j <= max * i;  j++)
		{
			printf("*");
		}
		printf("\n");
	}


}