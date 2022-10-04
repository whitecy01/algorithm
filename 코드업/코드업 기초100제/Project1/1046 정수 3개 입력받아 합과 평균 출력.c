#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b + c);
	printf("%.1lf", (double)(a + b + c)/ 3);

}