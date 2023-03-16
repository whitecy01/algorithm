#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
int main()
{
	int n;
	int i, j, k, w, s;
	int box[31];
	int box1[31];
	int answer[31];
	int count = 0;
	for ( w = 1; w <= 30; w++)
	{
		box1[w] = w;
	}

	for ( i = 1; i <= 28; i++)
	{
		scanf("%d", &box[i]);
	}

	/*
	for (w = 1; w <= 30; w++)
	{
		printf("%d ", box1[w]);
	}
	printf("\n");
	for (i = 1; i <= 28; i++)
	{
		printf("%d ", box[i]);
	}

	*/

	for ( j = 1; j <= 30; j++)
	{
		count = 0;
		for ( k = 1; k <= 28; k++)
		{
			//printf("%d %d ", box[k], box1[j]);
			if (box[k] == box1[j])
			{
				count++;
			}
			//printf("%d", count);
		}
		if (count == 0)
		{
			printf("%d\n", box1[j]);
		}
	}

	//for ( i = 1; i <= 30; i++)
	//{
	//	printf("%d ", answer[i]);
	//}
}