#include <stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>


//동적 할당으로 풀어보자
int main()
{
	int n, x;
	int box[10000];
	int i, j;
	int max, low;
	scanf("%d", &n);

	int* arr;
	arr = (int *)malloc(sizeof(int) * n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = *arr;//이 부분이 arr 배열의 첫 번째 값을 넣는다는 말?
	low = *arr;
	//printf("%d %d", max, low);
	for ( j = 0; j < n; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
		if (arr[j] <  low)
		{
			low = arr[j];
		}
	}
	printf("%d %d",  low, max);
	free(arr);
	
}