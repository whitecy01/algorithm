#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	float a;
	scanf("%f", &a);

	if (50 <= a && 60 >= a)
	{
		printf("win");
	}
	else
		printf("lose");

}