#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int one, two, three;
	int temp;
	scanf("%d %d %d", &one, &two, &three);
	// 8 7 6
	// 5 8 2
	
	if (one > three)// 8이 6과 비교해서 자리 바꾸기 
	{
		temp = one;
		one = three;
		three = temp;
	}

	if (two > three)
	{
		temp = two;
		two = three;
		three = temp;
	}
	if (one > two)
	{
		temp = one;
		one = two;
		two = temp;
	}
	printf("%d %d %d", one, two, three);
}