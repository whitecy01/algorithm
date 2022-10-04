#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, first, sum = 0;

	scanf("%d", &first);

	for (i = 1; i <= first; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}
		printf("%d ", i);
	}



}