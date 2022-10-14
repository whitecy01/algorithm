#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int a, b, i , sum = 0;
	scanf("%d %d", &a , &b);

	for ( i = a; i <=  b; i++)
	{
		if (i % 2 == 0)
		{
			sum -= i;
		}
		else if (i % 2 == 1)
		{
			sum += i;
		}
		//printf("%d ", sum);
	}
	//printf("\n");
	printf("%d", sum);
	

}