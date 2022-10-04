#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("even");
	}
	else
		printf("odd");

}