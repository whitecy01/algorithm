#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int prime , i, j , e, count = 0, k ,q,  w, l;
	int prime_check = 1, prime_check_1;
	int prime_answer[10000] = {0};
	int s = 1;
	scanf("%d", &prime);

	if (prime == 2)
	{
		printf("wrong number");
		return;
	}
	for (i = 1; i <= prime; i++)
	{
		count = 0;
		for (j = 1; j <= prime; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			if (prime % i == 0)
			{
				if (i == prime)
				{
					continue;
				}
				if (i % 2 == 0 && (prime / i) % 2 == 0)
				{
					printf("wrong number");
					return;
				}
				if (i % 3 == 0 && (prime / i) % 3 == 0)
				{

					printf("wrong number");
					return;
				}
				if (i == 2 || i == 3)
				{
					printf("%d %d", i, prime / i);
					return;
				}
				printf("%d %d", i, prime / i);
				return;
			}
		}
	}

	printf("wrong number");
	return;
	
}