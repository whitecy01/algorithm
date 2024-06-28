#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int i, a, b, sum = 0;
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b % 5 == 0)
		{
			sum += b;
		}
		
	}
	printf("%d", sum);


}