#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int year, month, day, sum, answer;
	scanf("%d %d %d", &year, &month, &day);

	sum = year - month + day;
	answer = sum % 10;

	if (answer == 0)
	{
		printf("대박");
	}
	else
	{
		printf("그럭저럭");
	}


	
}