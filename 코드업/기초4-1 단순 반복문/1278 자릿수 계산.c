#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number, i, count = 1;
	scanf("%d", &number);

	while (number >= 10)
	{
		number = number / 10;
		count++;
	}
	printf("%d", count);
}