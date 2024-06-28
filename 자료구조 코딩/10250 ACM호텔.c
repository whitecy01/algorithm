#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int t, h, w, n, i;

	scanf("%d", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		if (n % h == 0) printf("%d%02d\n", h, n / h);
		else printf("%d%02d\n", n % h, n / h + 1);
	}
	return 0;
}
/*
int main()
{
	int T;
	int H, W, N;
	int hotel[100][100];
	int i, j, k;
	int count = 0;

	scanf("%d", &T);

	for ( i = 0; i < T; i++)
	{
		count = 0;
		scanf("%d %d %d", &H, &W, &N);
		for ( j = 0; j < H; j++)
		{
			if ()
			{

			}
			hotel[j][0]= count++;
		}
	}
	
}*/