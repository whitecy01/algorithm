#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i,max, min;
	int temp = -1000000;
	int temp1 = 1000000;
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &max);

		if (max > temp)
		{
			temp = max;
		}
		if (max < temp1)
		{
			temp1 = max;
		}
	}

	printf("%d\n%d", temp, temp1);
	

}