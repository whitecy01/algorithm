#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>

int main()
{
	int box[1000];
	int n;
	int i, j;
	int sum = 0;
	double compare = 0;
	double answer;
	scanf("%d", &n);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &box[i]);
		if (compare < box[i])
		{
			compare = (double)box[i];
		}
	}

	for ( j = 0; j < n; j++)
	{
		sum += box[j];
	}
	answer = (double) sum / compare * 100 / n;
	
	printf("%.2lf", answer);
}