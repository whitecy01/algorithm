#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
void solution(const char* babbling[], int babbling_len) {
	int i, j, q, answer = 0;
	char temp[100] = { "aya", "ye", "woo", "ma" };
	/*
	for(i = 0; i < babbling_len; i++)
	{
		for(j = 0; j < babbling_len; j++)
		{
			for(q = 0; q < babbling_len; q++)
			{
				if (strcmp(babbling[i] , &temp[j][q]) == 0)
				{
				 answer++;
				}
			}
		}
	}
	*/

	for (i = 0; i < babbling_len; i++)
	{
		for (j = 0; j < babbling_len; j++)
		{
			if (strcmp(babbling[i], &temp[j]) == 0)
			{
				babbling = '0';
			}
			//else if () {

			//}

		}
	}

	for ( q = 0; q < babbling_len; q++)
	{
		printf("%s", babbling);
	}
	/*
   for (i = 0; i < babbling_len; i++)
   {
	 temp = babbling[i];
	 if(temp == 'aya'){
		 answer++;
	 }
   } */

	//return answer;


}

int main() {
	char box[100][100]  = { "aya", "yee", "u", "maa", "wyeoo" };
	int i, count;
	
	
	count = strlen(box);
	solution(box, count);


}