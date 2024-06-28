#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int  a, b;
	int input, i;
	scanf("%d %d", &a , &b);

	for (i = a; i <= b; i++)
	{
		printf("%d ", i);
	}

	if (a > b)
	{
		for (i = b; i <= a; i++)
		{
			printf("%d ", i);
		}
	}




}