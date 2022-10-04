#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char d[30], i;

	scanf("%s", d);
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'\n", d[i]);
	}
}