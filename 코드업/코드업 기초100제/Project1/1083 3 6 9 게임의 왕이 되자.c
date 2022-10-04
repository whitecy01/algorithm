#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int game , i;

	scanf("%d", &game);

	for ( i = 1; i <= game; i++)
	{
		if (i % 3 == 0)
		{
			printf("X ");
		}
		else
		{
			printf("%d ", i);
		}
		
	}
}