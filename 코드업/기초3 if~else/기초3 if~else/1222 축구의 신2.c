#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int time, score_1, score_2, i;

	scanf("%d %d %d", &time, &score_1, &score_2);

	for ( i = time; i < 90; i = i + 5)
	{
		score_1++;
	}

	if (score_1 == score_2)
	{
		printf("same");
	}
	else if (score_1 > score_2)
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}


}