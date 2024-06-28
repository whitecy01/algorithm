#include <stdio.h>

int factorial(double x , int n)
{
	//printf("%\n", x);
	if (n == 0) return 1;
	else if ((n % 2 == 0))
		return factorial(x * x, n / 2);
	else return x * factorial(x*x, (n - 1) / 2);
}

int main()
{
	int s;


	printf("%d", factorial(2 , 10));
}