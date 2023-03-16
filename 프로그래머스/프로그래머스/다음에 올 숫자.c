#include <stdio.h>
#pragma warning(disable:4996)

int solution(const char* babbling[], size_t babbling_len) {
	int i, answer = 0;
	for (i = 0; i < babbling_len; i++)
	{
		if (babbling[i] == 'aya' || babbling[i] == 'ye' || babbling[i] == 'woo' || babbling[i] == 'ma')
		{
			answer++;
		}

	}

	return answer;
}

int main() {
	char box[100];

	scanf("%s", box);
	
	printf("%s", box);
}