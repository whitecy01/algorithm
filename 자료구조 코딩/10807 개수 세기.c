#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int number , i, j;
	int box[100];
	int search, count = 0;
	scanf("%d", &number);

	for ( i = 0; i < number; i++)
	{
		scanf("%d", &box[i]);
	}

	scanf("%d", &search);

	for ( j = 0; j < number; j++)
	{
		if (search == box[j])
		{
			count++;
		}
	}

	printf("%d", count);
}