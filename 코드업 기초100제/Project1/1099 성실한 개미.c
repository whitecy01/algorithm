#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int box[12][12] = {0}, i, j , q ,w;
	int ant, a = 2, b = 2;

	for ( i = 1; i <= 10; i++)
	{
		for ( j = 1; j <= 10; j++)
		{
			scanf("%d", &box[i][j]);
		}
	}
	
	//printf("\n");
	ant = 9;
	

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (box[i][j] == 2 || box[i][j] == 1 || box[i][j] == 0)
			{
				break;
			}
			else if(box[i][j] != 2)
			{
				for (i = 1; i <= 10; i++)
				{
					for (j = 1; j <= 10; j++)
					{
						printf("%d ", box[i][j]);
					}
					printf("\n");
				}
				return;
			}
		}
	}

	for ( q = 2; q <= 10; q++)
	{
			
		for (w = 2; w <= 10; w++)
		{
			if (q == 10 || w == 10)
			{
				break;
			}
			if (box[q][w] != 2)
			{
				box[q][w] = ant;
				if (box[q][w + 1] != 1)
				{
					continue;
				}
				else if (box[q][w + 1] == 1)
				{
					if (box[q + 1][w] != 1)
					{
						q++;
					}
					else
					{
						break;
					}
					w--;
				}
			}
			else
			{
				break;
			}
		}
		if (box[q][w] == 2)
		{
			box[q][w] = ant;
			break;
		}
			
	}
	

	
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}


	
}