#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int* solution(int denum1, int num1, int denum2, int num2) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(sizeof(int) * 2);

	int count1 = 0, count2 = 0;
	if (num1 == num2) //분모가 같을 때
	{
		answer[0] = denum1 + denum2;
		answer[1] = num1;
		
	}
	else if(0 == num1 % 2 && 0 == num2 % 2)
	{
		printf("ddd");
		while (1)
		{
			count1 = num2 * num1 / 2;
			count2 = num1 * num2 / 2;
			//printf("%d %d", count1, count2);
			denum2 = denum2 * num1 / 2;
			denum1 = denum1 * num2 / 2;
			if (count1 == count2)
			{
				answer[0] = denum1 + denum2;
				answer[1] = count1;
				break;
			}
		}
	}
	else if(0 == num1 % 3 && 0 == num2 % 3)
	{
		
		while (1)
		{
			  count1 = num2 * num1 / 3;
			  count2 = num1 * num2 / 3;
			  //printf("%d %d", count1, count2);
			  denum2 = denum2 * num1 / 3;
			  denum1 = denum1 * num2 / 3;
			  if (count1 == count2)
			  {
				  answer[0] = denum1 + denum2;
				  answer[1] = count1;
				  break;
			  }
		}

	}
	else //완전히 다를 때
	{
		answer[0] = denum1 * num2 + denum2 * num1;
		answer[1] = num1 * num2;
			
	}
	
	while ((0 == answer[0] % 2 && 0 == answer[1] % 2) || (0 == answer[0] % 3 && 0 == answer[1] % 3))
	{
	
		if ((0 == answer[0] % 2 && 0 == answer[1] % 2))
		{
			answer[0] = answer[0] / 2;
			answer[1] = answer[1] / 2;
		}
		else if (0 == answer[0] % 3 && 0 == answer[1] % 3)
		{
			answer[0] = answer[0] / 3;
			answer[1] = answer[1] / 3;
		}
		
	}
	if (answer[0] % answer[1] == 0)
		{
		answer[0] = answer[0] / answer[1];
		answer[1] = answer[1] / answer[0];
		
		}
	else if (answer[1] % answer[0] == 0)
		{
		answer[1] = answer[1] / answer[0];
		answer[0] = answer[0] / answer[1];
		
		}

	return answer;
}

int main()
{
	int* malloc1;
	int i;
	malloc1 = solution(3 , 15 ,2 ,15);
	for ( i = 0; i < 2; i++)
	{
		printf("%d ", malloc1[i]);
	}

}