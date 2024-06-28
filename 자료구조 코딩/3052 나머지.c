#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>

int main()
{

	int box[11];
	int i, j, q;
	int answer[11];
	int count = 0;
	int result = 0;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &box[i]);
		answer[i] = box[i] % 42;
	}

	for ( j = 0; j < 10; j++)
	{
		count = 0;
		for ( q = j + 1; q < 10; q++)
		{
			if (answer[j] == answer[q])
			{
				count++;
			}
		}
		if (count == 0)
		{
			result++;
		}
	}
	printf("%d", result);

}