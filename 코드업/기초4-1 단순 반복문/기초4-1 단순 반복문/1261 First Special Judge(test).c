#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a, b  , sum = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if (a % 5 == 0)
		{
			printf("%d", a);
			return;
		}

	}
	printf("0");


}