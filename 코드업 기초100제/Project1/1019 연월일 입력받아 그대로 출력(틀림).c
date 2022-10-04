#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//이건 내가 한 거 출력부분을 잘못 봄
	//int a, b, c;

	//char d, e;

	//scanf("%d%c%d%c%d",&a,&d,&b,&e,&c);
	//printf("%d%c%d%c%d", a, d, b, e, c);

	int a, b, c;
	scanf("%d.%d.%d", &a, &b, &c);
	printf("%04d.%02d.%02d", a, b, c);

	// . 이 부분은 print부분으로 들어가기 때문에 안에 해줄 필요 없음


}