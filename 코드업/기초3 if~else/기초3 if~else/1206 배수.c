#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d;
	
	scanf("%d %d", &a, &b);
	if (b % a == 0)
	{
		printf("%d*%d=%d", a, b / a, b);
	}
	else if (a % b == 0)
	{
		printf("%d*%d=%d", b, a / b , a);
	}
	else
	{
		printf("none");
	}
}