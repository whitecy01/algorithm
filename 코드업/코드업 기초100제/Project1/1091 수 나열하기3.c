#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	long long int a, m, d, n, i, sum = 0;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	sum = a;
	for (i = 1; i < n; i++)
	{

		sum = sum * m + d;
	}
	printf("%lld", sum);


}