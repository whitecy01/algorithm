#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int time, goal, i;
	scanf("%d %d", &time , &goal);

	for ( i = time; i < 90; i = i + 5)
	{
		goal++;
	}

	printf("%d", goal);

}