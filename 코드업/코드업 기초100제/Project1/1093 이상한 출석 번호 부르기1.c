#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i , k , a = 1, count, j , compare , count1;
	int number[100];
	int number2[100] = {0};

	for ( i = 0; i < 23; i++)
	{
		number[i] = a;
		a++;
	}

	
	scanf("%d", &count);
	//count1 = 0;
	for ( j = 0; j < count; j++)
	{
		count1 = 0;
		scanf("%d", &compare);
		for ( k = 0; k < i; k++)
		{
			if (number[k] == compare)
			{
				count1++;
				number2[k] += count1;
			}
			//number[k] = count1;
			
		}

	}

	for ( i = 0; i < 23; i++)
	{
		printf("%d ", number2[i]);
	}
	
}