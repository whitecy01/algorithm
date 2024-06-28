#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num1, int num2) {
	int answer = 0;
	return  ((float)num1 / num2)  * 1000 ;
}

int main() {
	printf("%d\n", solution(3, 2));
	printf("%f\n", ((float)3 / 2));
	printf("%d\n", 3 / 2 );
}