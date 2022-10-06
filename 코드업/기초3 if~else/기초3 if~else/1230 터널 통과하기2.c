#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, i;
	int box[3];

	for ( i = 0; i < 3; i++)
	{
		scanf("%d", &a);

		if (a <= 170)
		{
			printf("CRASH %d", a);
			return;
		}
	}

	printf("PASS");
	



}