#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b , &c , &d);
	
	//모
	if (a == 0 && b == 0 && c == 0 && d == 0)
		printf("모");
	else if (a == 1 && b == 0 && c == 0 && d == 0)//도
		printf("도");
	else if (a == 0 && b == 1 && c == 0 && d == 0)//도
		printf("도");
	else if (a == 0 && b == 0 && c == 1 && d == 0)//도
		printf("도");
	else if (a == 0 && b == 0 && c == 0 && d == 1)//도
		printf("도");
	else if (a == 1 && b == 1 && c == 0 && d == 0)//개
		printf("개");
	else if (a == 1 && b == 0 && c == 1 && d == 0)//개
		printf("개");
	else if (a == 1 && b == 0 && c == 0 && d == 1)//개
		printf("개");
	else if (a == 0 && b == 1 && c == 1 && d == 0)//개
		printf("개");

	else if (a == 1 && b == 1 && c == 1 && d == 0)//걸
		printf("걸");
	else if (a == 1 && b == 0 && c == 1 && d == 1)//걸
		printf("걸");
	else if (a == 1 && b == 1 && c == 0 && d == 1)//걸
		printf("걸");
	else if (a == 1 && b == 0 && c == 1 && d == 1)//걸
		printf("걸");
	else if (a == 0 && b == 1 && c == 1 && d == 1)//걸
		printf("걸");
	else
	{
		printf("윷");
	}
	

}