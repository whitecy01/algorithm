#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int first, number , i , number_2, sum= 0;
	char math;
	
	scanf("%d", &first);
	while (1)
	{
		scanf("%c", &math);
		if (math == '=')
		{
			printf("%d", sum);
			return;
		}

		scanf("%d", &number_2);

		if (math == '+')
		{
			sum = first + number_2;
			first = sum;
		}
		else if (math == '-')
		{
			sum = first - number_2;
			first = sum;
		}
		else if (math == '/')
		{
			sum = first / number_2;
			first = sum;
		}
		else if (math == '*')
		{
			sum = first * number_2;
			first = sum;
		}
		
	
		
	}
	
}