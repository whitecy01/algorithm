#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, i, j, k;
	scanf("%d %d", &n , &k);

	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			if ( i == 1 || j == 1 || (j + i - 1) % k == 0 || i == n|| j == n )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
