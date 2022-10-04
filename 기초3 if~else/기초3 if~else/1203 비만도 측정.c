#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade;
	scanf("%d", &grade);

	if (grade <= 10)
	{
		printf("정상");
	}
	else if (grade <= 20)
	{
		printf("과체중");
	}
	else
	{
		printf("비만");
	}


}