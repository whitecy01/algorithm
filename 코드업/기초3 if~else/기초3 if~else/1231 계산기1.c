#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	
	char math;

	scanf("%d%c%d", &a, &math, &b);

	if (math == '+')
	{
		printf("%d", a + b);
	}
	else if (math == '-')
	{
		printf("%d", a - b);
	}
	else if (math == '*')
	{
		printf("%d", a * b);
	}
	else if (math == '/')
	{
		printf("%.2lf", (double)a / b);
	}



}