#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int two[11];
	int i, j = 0;
	
	for (i = 0; i < 10; i++)
	{
		for ( j = 0; j <= i; j++)
		{
			two[i] = 2 * two[i - 1];
		}
		if (i == 0)
		{
			two[i] = 1;
		}
		printf("%d ", two[i]);
	}

}