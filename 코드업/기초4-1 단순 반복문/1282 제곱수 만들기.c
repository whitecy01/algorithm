#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int a, b, j , i, sum = 0, divdie= 0, temp = 0 ,temp1;
	scanf("%d", &a);

	for ( j = 1; j <= a; j++)
	{
		divdie = j * j;
		if (divdie > a)
		{
			break;
		}
		temp = divdie;
		
	}
	//printf("%d %d %d", j, divdie, temp);
	temp1 = a - temp;

	printf("%d %d", temp1, --j);

}