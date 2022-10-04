#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	unsigned int first, second;
	int	i, j;

	scanf("%x", &first);

	for (i = 1; i < 16; i++)
	{
		printf("%X*%X=%X\n", first, i, first * i);
	}
}