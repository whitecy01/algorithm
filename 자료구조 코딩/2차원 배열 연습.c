#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>

int main()
{
	int box1[5][5];
	int i, j, k, e;
	int n;
	//scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d ", &box1[i][j]);
		}

	}
	for (k = 0; k < 5; k++)
	{
		for (e = 0; e < 5; e++)
		{
			printf("%d", box1[k][e]);
		}
		printf("\n");
	}
}