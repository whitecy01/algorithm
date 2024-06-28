#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	double a;
	int b, percent;
	int i;
	double sum = 0;
	double sum1 = 0;
	
	scanf("%lf", &a);
	scanf("%d", &b);
	
	
	sum1 = a;
	for ( i = 0; i < b; i++)
	{
		scanf("%d", &percent);
		
		if (percent > 0)
		{
			sum = sum1 / 100 * percent;//1000  = 10000 * 10 
			sum1 = sum1 + sum;// 11000 = 1000 + 10000
		}
		else if (percent < 0)
		{
			sum = sum1 / 100 * -percent;
			sum1 = sum1 - sum;
		}
		//printf("%lf\n", sum1);
	}
	
	if (sum1 - a < 0)
	{
		printf("%.0lf\n", sum1 - a);
		printf("bad");
	}
	else if (sum1 - a > 0)
	{
		printf("%.0lf\n", sum1 - a);
		printf("good");
	}
	else if (sum1 - a == 0)
	{
		printf("%.0lf\n", sum1 - a);
		printf("same");
	}


	

}