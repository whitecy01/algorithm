#include <stdio.h>
#pragma warning(disable:4996)

double solution(int arr[], size_t arr_len) {
	
	double sum = 0 ,answer = 0;
	int i = 0 , count;

	count = arr_len;
	while (arr_len > 0)
	{
		sum += arr[i];
		i++;
		arr_len--;
	}
	answer = sum / count;
	return answer;
}

int main()
{
	int arr[4] = { 1,2,3,4 };

	printf("%lf", solution(arr, 4));

}