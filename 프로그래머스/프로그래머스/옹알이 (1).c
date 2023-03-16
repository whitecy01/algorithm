#include <stdio.h>
#pragma warning(disable:4996)

int solution(const char* babbling[], int babbling_len) {
	int i, j, answer = 0;
	for ( i = 0; i < babbling_len; i++)
	{
		for ( i = 0; i < babbling_len; i++)
		{
			if (babbling[i][j] == "aya" || babbling[i][j] == "ye" || babbling[i][j] == "woo" || babbling[i][j] == "ma")
			{
				answer++;
			}
		}


	}

	return answer;
}

int main() {
	char box[100];

	scanf("%s", box);
	

	printf("%d", solution(box, 3));
}