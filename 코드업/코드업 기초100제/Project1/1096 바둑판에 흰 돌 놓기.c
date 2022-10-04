#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int count , i , j , k;
	int x, y;
	int box[22][22] = { 0 };


	scanf("%d", &count);
	for ( k = 0; k < count; k++)
	{
		scanf("%d %d", &x, &y);
		box[--x][--y] = 1;
	}

	for (i = 0; i < 19; i++)
	{
		for (j = 0; j < 19; j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}
}