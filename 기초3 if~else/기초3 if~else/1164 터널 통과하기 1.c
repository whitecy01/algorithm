#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int year, month, day, sum, answer, i;
	scanf("%d %d %d", &year, &month, &day);

	
	if ( year > 170 && month > 170 && day > 170)
	{
		printf("PASS");
	}
	else
	{
		printf("CRASH");
	}


}