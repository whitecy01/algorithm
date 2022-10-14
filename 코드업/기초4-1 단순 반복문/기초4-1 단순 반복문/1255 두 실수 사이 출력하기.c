#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double a, b;
	double i, sum;
	scanf("%lf %lf", &a, &b);
	//sum = b - a;

	//printf("%f", sum);

	for (i = a; i <= b; i = i + 0.01)
	{
		
		printf("%.2lf ", i);
	}
	





}