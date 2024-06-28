#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, start, div, sum, number, start_box;

	scanf("%d %d %d %d", &start, &div ,&sum, &number);
	start_box = start;
	for (i = 1; i < number; i++)
	{
		start_box = start * div + sum;
		start = start_box;

	}
	printf("%d", start);


}