#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b , &c);
	//printf("%d", (a > b ? c > b ? b : (a > c  ? a : c) : c ));
	printf("%d", (a < b ? a : b) < c ? (a < b ?  a : b) : c);
}