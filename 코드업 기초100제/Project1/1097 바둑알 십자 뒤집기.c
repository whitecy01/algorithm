#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int count, i, j, k, q;
	int x, y ,x1 ;
	int box[21][21] = { 0};


	for ( i = 1; i <= 19; i++)
	{
		for ( j = 1; j <= 19; j++)
		{
			scanf("%d ", &box[i][j]);
		}
	}
	
	scanf("%d", &count);
	for ( i = 0; i < count; i++)
	{
		scanf("%d %d", &x, &y);
		for ( x1 = 1; x1 <= 19; x1++)
		{
			for (j = y; j <= y; j++)
			{
				if (box[x1][j] == 1)
				{
					box[x1][j] = 0;
				}
				else
				{
					box[x1][j] = 1;
				}
			}
		}
		for (k = x; k <= x; k++)
		{
			for (q = 1; q <= 19; q++)
			{
				if (box[x][q] == 1)
				{
					box[x][q] = 0;
				}
				else
				{
					box[x][q] = 1;
				}
			}
		}
		/*
		for (j = 1; j <= 19; j++)
		{
			if (box[j][y] == 0)
			{
				box[j][y] = 1;
			}
			else
			{
				box[x][j] = 0;
			}
		}
		*/
	}
	
	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}


}