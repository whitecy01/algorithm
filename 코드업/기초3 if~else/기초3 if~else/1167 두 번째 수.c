#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, second, third , temp , temp1;
	scanf("%d %d %d", &first , &second , &third );

	if (first < second)
	{
		if (first > third)
		{
			temp = first;
			first = third;
			third = temp;
		}
	}
	else if (first > second)
	{
		temp = first;
		first = second;
		second = temp;
	}

	if (second > first)
	{
		if (second > third)
		{
			temp1 = second;
			second = third;
			third = temp1;
		}
	}
	 if (second < first)
	{
		temp1 = first;
		first = second;
		second = temp1;
	}

	printf("%d", second);

}