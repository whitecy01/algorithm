#include <stdio.h>

int factorial(int n)
{
	if (n <= 1) return (1);
	else return (n * factorial(n - 1));
}

int main()
{
	int s;

	s = factorial(3);
	printf("%d", s);
}