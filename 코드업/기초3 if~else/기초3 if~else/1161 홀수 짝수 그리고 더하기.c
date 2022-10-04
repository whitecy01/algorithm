#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a , b;
	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		printf("Â¦¼ö");
		if (b % 2 == 0)
		{
			printf("+Â¦¼ö=");
			if ((a + b) % 2 == 0)
			{
				printf("Â¦¼ö");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("È¦¼ö");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+È¦¼ö=");
			if ((a + b) % 2 == 0)
			{
				printf("Â¦¼ö");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("È¦¼ö");
			}
		}
	}
	else if (a % 2 == 1)
	{
		printf("È¦¼ö");
		if (b % 2 == 0)
		{
			printf("+Â¦¼ö=");
			if ((a + b) % 2 == 0)
			{
				printf("Â¦¼ö");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("È¦¼ö");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+È¦¼ö=");
			if ((a + b) % 2 == 0)
			{
				printf("Â¦¼ö");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("È¦¼ö");
			}
		}
	}
}