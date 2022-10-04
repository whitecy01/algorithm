#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);

	if (a < 10)
	{
		printf("small");
	}
	else
		printf("big");
}