#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a, b = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		b += i;
	}
	printf("%d", b);



}