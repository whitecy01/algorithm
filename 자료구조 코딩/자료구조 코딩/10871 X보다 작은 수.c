#include <stdio.h>
#pragma warning(disable:4996)
//#include <stdlib.h>
int main()
{
	int n, x;
	int box[10000];
	int i, j;
	scanf("%d %d", &n, &x);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &box[i]);
	}

	for (j = 0; j < n; j++)
	{
		if (x > box[j])
		{
			printf("%d ", box[j]);
		}
	}
	//exit(0);
}