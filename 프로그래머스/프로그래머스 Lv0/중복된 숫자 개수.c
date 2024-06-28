#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int array[], size_t array_len, int n) {
	int i, answer = 0;
	for (i = 0; i < array_len; i++)
	{
		if (array[i] == n)
		{
			answer++;
		}
	}
	return answer;
}