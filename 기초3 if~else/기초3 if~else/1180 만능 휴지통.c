#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int trash, sum;
	int temp, temp1;

	scanf("%d", &trash);

	temp = trash / 10;
	temp1 = trash % 10;

	temp1 = temp1 * 10;
	sum = temp1 + temp;
	sum = sum * 2;
	
	if (sum >= 100) 
	{
		 sum = sum - 100;
	}

	if (sum <= 50)
	{
		printf("%d\n", sum);
		printf("GOOD");
	}
	else
	{
		 //sum = sum - 100;
		printf("%d\n", sum);
		printf("OH MY GOD");
	}
	

}