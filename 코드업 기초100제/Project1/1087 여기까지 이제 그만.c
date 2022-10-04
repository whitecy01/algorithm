#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, first , sum = 0;

	scanf("%d", &first);

	for ( i = 1; i <= first; i++)
	{
		if (sum < first)
		{
			sum += i;
		}
	}
	printf("%d", sum);

	

}