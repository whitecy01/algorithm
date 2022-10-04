#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int trash, sum;
	//int temp, temp1;
	scanf("%d", &trash);
	if (trash > 0 )
	{
		printf("양수");
	}
	else if (trash < 0)
	{
		printf("음수");
	}
	else
	{
		printf("0");
	}


}