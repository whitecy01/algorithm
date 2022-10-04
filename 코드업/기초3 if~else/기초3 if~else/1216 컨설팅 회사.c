#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	int temp1;

	scanf("%d %d %d", &a , &b , &c);

	if (b > c)
	{
		temp1 = b - c;
	}
	else if (c > b)
	{
		//temp1 = c - b;
	
		temp1 = b - c;
		if (b < 0)
		{
			temp1 = b - c;

		}
	}
	//printf("%d\n", temp1);

	if (a > temp1)
	{
		printf("do not advertise");
	}
	else if (a < temp1)
	{
		printf("advertise");
	}
	else if (a == temp1)
	{
		printf("does not matter");
	}

}