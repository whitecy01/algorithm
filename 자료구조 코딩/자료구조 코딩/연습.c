#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int C;
	int N;
	int a[1000];
	int sum = 0, count = 0;
	double avg;
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[j]);
			sum += a[j];
		}
		avg = (double)sum / N;
		for (int k = 0; k < N; k++)
		{
			if (a[k] > avg)
				count++;
		}
		printf("%.3f%%\n", (double)count / N * 100);
		count = 0, sum = 0, avg = 0;
	}

	return 0;
}