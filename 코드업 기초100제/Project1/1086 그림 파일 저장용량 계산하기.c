#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	long long int w, h, b;

	scanf("%lld %lld %lld", &w, &h, &b);
	printf("%.2f MB", (float)(w * h * b) / (8 * 1024 * 1024));

}