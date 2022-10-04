#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade, sum, class1, number;

	scanf("%d %d %d", &grade, &class1, &number);

	printf("%1d%02d%03d", grade, class1, number);
}