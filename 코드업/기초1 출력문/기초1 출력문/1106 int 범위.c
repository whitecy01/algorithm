#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int min_a = 0x80000000;
	int max_b = 0x7fffffff;

	printf("%d %d", min_a, max_b);
	return 0;
}