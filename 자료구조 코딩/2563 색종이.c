#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int box[101][101] = {0};
	int i, j, k;
	int n;
	int a, b;
	int sum = 0;
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		for ( j = a; j < a + 10; j++)
		{
			for ( k = b; k < b + 10; k++)
			{
				if (box[j][k] != 1)
				{
					box[j][k] = 1;
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
}