#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, d, n , i , sum = 0;

	scanf("%d %d %d", &a, &d, &n);

	sum = a;
	for ( i = 1; i < n; i++)
	{
		
		sum += d;
	}
	printf("%d", sum);


}