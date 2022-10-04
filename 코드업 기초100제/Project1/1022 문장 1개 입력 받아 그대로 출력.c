#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char x[2000];

	fgets(x, 2000, stdin);
	printf("%s", x);
}