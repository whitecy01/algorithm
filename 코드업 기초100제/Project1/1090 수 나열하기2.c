#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	long long int a, d, n, i, sum = 0;

	scanf("%lld %lld %lld", &a, &d, &n);

	sum = a;              
	for (i = 1; i < n; i++)
	{

		sum *= d;
	}
	printf("%lld", sum);


}