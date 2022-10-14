#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number, number_1,  i, count = 0, total = 1, temp, temp1;

	scanf("%d %d", &number, &number_1);
	temp = number_1;
	temp1 = number;

	if (number_1 == 0)
	{
		printf("1");
		return;
	}
	for (i = 1; i < temp; i++)
	{
		//printf("%d %d %d\n", i, number, temp1);
		number *= temp1;
		//printf("%d %d %d\n", i, number, temp1);
		
	}

	printf("%d", number);
}