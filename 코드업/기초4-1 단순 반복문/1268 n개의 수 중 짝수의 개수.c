#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a, b, sum = 0;
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b % 2 == 0)
		{
			sum++;
		}

	}
	printf("%d", sum);


}