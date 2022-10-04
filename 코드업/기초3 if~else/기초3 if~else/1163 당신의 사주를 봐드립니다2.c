#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int year, month, day, sum, answer , i;
	scanf("%d %d %d", &year, &month, &day);

	sum = year + month + day;

	for ( i = 0; i < 3; i++)
	{
		answer = sum % 10;
		sum = sum / 10;
	}
	//printf("%d %d\n", answer, sum);
	

	if (answer % 2 == 0)
	{
		printf("대박");
	}
	else
	{
		printf("그럭저럭");
	}



}