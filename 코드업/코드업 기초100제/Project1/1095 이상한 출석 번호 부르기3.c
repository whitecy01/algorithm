#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int count , i ,j;
	int random , temp = 10000;

	scanf("%d", &count);

	for ( i = 0; i < count; i++)
	{
		scanf("%d", &random);
		if (temp > random)
		{
			temp = random;
			//printf("temp:%d random:%d\n", temp, random);
		}
	}
	printf("%d", temp);
}