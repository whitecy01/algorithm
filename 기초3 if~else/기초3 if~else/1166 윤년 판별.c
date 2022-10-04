#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int time, i;
	scanf("%d", &time);

	if (time % 400 == 0 )
	{
		printf("Leap");
	}
	else if (time % 4 == 0 && time % 100 != 0)
	{
		printf("Leap");
	}
	else
	{
		printf("Normal");
	}


}