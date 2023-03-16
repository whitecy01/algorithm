#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

typedef struct box {
	int x;
	char s[20];
}box1;
int main()
{
	box1* p;
	p = (int *)malloc(sizeof(box1));
	if (p == NULL)
	{
		exit(1);
	}
	p->x = 100;
	strcpy(p->s, "just testing");
}