#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int hour , min;
	int temp, temp1;
	scanf("%d %d", &hour , &min);

	temp = min - 30;
	if (temp >= 0)
	{
		printf("%d %d", hour, temp);
	}
	else if (temp < 0)
	{
		temp1 = 60 + temp;
		if (hour == 0)
		{
			hour = hour + 23;
			printf("%d %d", hour, temp1);
			return; 
		}
		printf("%d %d", --hour, temp1);

	}
	
}