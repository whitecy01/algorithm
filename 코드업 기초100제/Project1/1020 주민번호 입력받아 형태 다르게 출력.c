#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//int a, b, c, d, e, f, g, h, i, j, k, l, m;

	//scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m);
	//printf("%d%d%d%d%d%d-%d%d%d%d%d%d%d", a, b, c, d, e, f, g, h, i, j, k, l, m);

	int a, b;
	
	scanf("%d-%d", &a, &b);
	printf("%06d%07d", a,  b); 
}