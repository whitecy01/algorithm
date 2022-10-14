#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int number, i, total = 1, check;
	int first, middle, end;
	scanf("%d", &number);

	for (i = 1; i <= number; i++)
	{
		scanf("%d", &check);
		if (i == 1)
		{
			first = check;
		}
		if (i == number)
		{
			end = check;
		}

		if (number / 2 + 1 == i )
		{
			middle = check;
		}
	}
	printf("%d %d %d", first, middle, end);
}