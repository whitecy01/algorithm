#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, n;
	scanf("%d", &n);

reload:
	scanf("%d", &a);
	printf("%d\n", a);

	if (--n != 0) goto reload;


}