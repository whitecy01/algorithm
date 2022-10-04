#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a = 1;
	scanf("%d", &a);
	while (a != 0)
	{
		printf("%d\n", a);
		a--;
	}
}