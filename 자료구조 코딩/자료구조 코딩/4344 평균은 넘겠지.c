#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	int i, j, k;
	int student;
	//int box[1001];
	double sum = 0;
	double result = 0;
	int count = 0;
	double finall;

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &student);
		sum = 0;
		count = 0;
		result = 0;
		int box[1001] = {0};
		
		for ( j = 0; j < student; j++)
		{
			scanf("%d", &box[j]);
			sum +=(double) box[j];
		}
		result = sum / student;

		for ( k = 0; k < student; k++)
		{
			if (result < box[k])
			{
				count++;
			}
		}
		//finall = count * 100 / n;
		printf("%.3lf%%\n", (double)count * 100 / student);
	}
}