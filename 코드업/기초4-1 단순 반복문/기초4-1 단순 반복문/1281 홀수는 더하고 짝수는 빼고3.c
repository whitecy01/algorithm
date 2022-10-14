#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int a, b, i, sum = 0;
	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			sum -= i;
			printf("-%d", i);
		}
		else if (i % 2 == 1)
		{
			sum += i;
			
			if (i == a)
			{
				printf("%d", i);
			}
			else 
			{
				printf("+%d", i);
			}
		}
		//printf("%d ", sum);
	}
	//printf("\n");
	printf("=%d", sum);


}