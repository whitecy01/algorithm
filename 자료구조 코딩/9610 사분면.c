#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0 , AXIS = 0;
	int n;
	int i , j;
	int a, b;

	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		if (a > 0 && b > 0)
		{
			Q1++;
		}
		else if (a > 0 && b < 0)
		{
			Q4++;
		}
		else if (a < 0 && b > 0)
		{
			Q2++;
		}
		else if (a < 0 && b < 0)
		{
			Q3++;
		}
		else
		{
			AXIS++;
		}
	}

	printf("Q1: %d\n" , Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d\n", AXIS);

}