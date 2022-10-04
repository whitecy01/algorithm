#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	float a;
	scanf("%f", &a);

	if (30 <= a && 40 >= a || 60 <= a && 70 >= a  )
	{
		printf("win");
	}
	else
		printf("lose");
}