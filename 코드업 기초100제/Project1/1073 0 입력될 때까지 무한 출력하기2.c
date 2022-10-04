#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a = 1;
	
	while (a != 0)
	{
		scanf("%d", &a);

		if (a != 0)
		{
			printf("%d\n", a);
		}
	}
}