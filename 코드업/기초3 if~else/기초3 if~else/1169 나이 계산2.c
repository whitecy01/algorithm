#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, second, third, temp, temp1, four, count;
	scanf("%d", &first);

	temp = 2012 - first;
	temp++;

	if (temp <= 1999)
	{

		temp1 = temp % 100;
		second = temp1 / 10;

		second = second * 10;
		count = temp % 10;

		four = second + count;
		printf("%d 1", four);

	}
	else
	{
		temp1 = temp % 100;
		second = temp1 / 10;

		second = second * 10;
		count = temp % 10;

		four = second + count;
		printf("%d 3", four);

	}
	
	
}