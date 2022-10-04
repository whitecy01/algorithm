#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	scanf("%d", &a);

	if (50 <= a && 70 >= a || a % 6 == 0)
	{
		printf("win");
	}
	else
		printf("lose");
}