#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade, sum , class1, number;

	scanf("%d %d %d" , &grade, &class1 ,&number);

	grade = grade * 1000;
	class1 = class1 * 100;

	sum = grade + class1 + number;
	printf("%d", sum);
}