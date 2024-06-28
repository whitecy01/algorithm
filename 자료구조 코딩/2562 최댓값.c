#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
int main()
{
	int n, x;
	int i, j;
	int* arr;
	int count;
	int compare = 0;
	
	arr = (int *)malloc(sizeof(int) * 9);
	for ( i = 1; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
		if (compare < arr[i])
		{
			compare = arr[i];
			count = i;
		}
	}
	printf("%d\n%d", compare, count);
	
	free(arr);
}