#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, second, third, temp, temp1, four;
	scanf("%2d%2d%2d %d", &first, &second, &third , &four);

	if (four == 1 || four == 2)
	{
		 temp = 1900 + first;
		 temp1 = 2012 - temp;
		 printf("%d", temp1 + 1);
	}
	else
	{

		temp = 2000 + first;
		temp1 =2012 - temp;
		printf("%d", temp1 + 1);
	}

}