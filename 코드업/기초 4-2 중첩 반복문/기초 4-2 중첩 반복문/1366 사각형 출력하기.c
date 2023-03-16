#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, number, second, s;
	int first;//(1) 왼쪽 벽 j가 1일때
	int left_em;//(2) 왼쪽`
	int star; //(3) 왼쪽 벽 start
	int middle_em; //(4)중간 왼쪽 공백
	int middle_star; //(5) 중간   가로 start
	int middle_right_em;//(6) 중간 오른쪽 공백
	int middle_right_star;//(7) 중간 오른쪽 start
	int right_em; //(8) 오른쪽 공백 
	int right_star;
	scanf("%d", &number);

		for (j = 1; j <= number; j++)
		{
			printf("*");
		}
		printf("\n");
	

	for (i = 1; i < number / 2; i++)
	{
		
		//(1)
		for (first = 1; first <= 1; first++)//왼쪽 j가 1일 때
		{
			printf("*");
		}
		//(2)
		for (left_em = 2; left_em <= i; left_em++)//왼쪽 공백
		{
			printf(" ");
		}

		//(3)왼쪽 벽 star 
		for (star = number / 2; star <= number / 2; star++)
		{
			printf("*");
		}

		//(4) 중간 왼쪽 공백 
		for (middle_em = i + 1; middle_em < number / 2; middle_em++)
		{
			printf(" ");
		}

		//(5) 중간 가로 star
		for (middle_star = number / 2; middle_star <= number / 2; middle_star++)
		{
			printf("*");
		}

		//(6) 중간 오른쪽 공백
		for (middle_right_em = number / 2; middle_right_em > i + 1; middle_right_em--)
		{
			printf(" ");
		}

		//(7) 중간 오른쪽 star
		for (middle_right_star = number - 1; middle_right_star <= number - 1; middle_right_star++)
		{
			printf("*");
		}

		//(8) 중간 오른쪽 공백
		for (right_em = number / 2 + 1; right_em < number / 2 + i; right_em++)
		{
			printf(" ");
		}

		//(9) 오른쪽 벽 star
		for (right_star = number / 2; right_star <= number / 2; right_star++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (s = 1; s <= number; s++)
	{
		printf("*");
	}
	printf("\n");

	//printf("%d", i);
	//(i = 1; i < number / 2; i++)
	for (i = number / 2  - 1 ; i > 0; i--)
	{

		//(1)
		for (first = 1; first <= 1; first++)//왼쪽 j가 1일 때
		{
			printf("*");
		}
		//(2)
		for (left_em = 2; left_em <= i; left_em++)//왼쪽 공백
		{
			printf(" ");
		}

		//(3)왼쪽 벽 star 
		for (star = number / 2; star <= number / 2; star++)
		{
			printf("*");
		}
		
		//(4) 중간 왼쪽 공백 
		for (middle_em = i + 1; middle_em < number / 2; middle_em++)
		{
			printf(" ");
		}

		//(5) 중간 가로 star
		for (middle_star = number / 2; middle_star <= number / 2; middle_star++)
		{
			printf("*");
		}

		//(6) 중간 오른쪽 공백
		for (middle_right_em = number / 2; middle_right_em > i + 1; middle_right_em--)
		{
			printf(" ");
		}

		//(7) 중간 오른쪽 star
		for (middle_right_star = number - 1; middle_right_star <= number - 1; middle_right_star++)
		{
			printf("*");
		}

		//(8) 중간 오른쪽 공백
		for (right_em = number / 2 + 1; right_em < number / 2 + i; right_em++)
		{
			printf(" ");
		}

		//(9) 오른쪽 벽 star
		for (right_star = number / 2; right_star <= number / 2; right_star++)
		{
			printf("*");
		}
		//printf("\n");
		printf("\n");
	}

	for (j = 1; j <= number; j++)
	{
		printf("*");
	}

}
