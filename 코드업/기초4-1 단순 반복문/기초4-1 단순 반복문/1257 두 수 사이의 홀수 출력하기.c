#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a , b;
	scanf("%d %d", &a, &b);
	for (i = a; i <= b ; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}






}