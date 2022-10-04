#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i , sum = 0;

	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		sum += i;
		if(n <= sum)
		{
			break;
		}
	}
	printf("%d", i);
}