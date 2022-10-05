#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	double cm, weight, fat;
	//int standard, sum_weight;
	double standard1, fat1 ;
	int sum;
	scanf("%lf %lf", &cm, &weight);

	//sum_weight = (int)weight;//sum_weight = 80  weight = 80.0
	//printf("%d %lf\n", sum_weight, weight);
	//standard = (int)(((int)cm - 100) * 0.9);
	//fat = (double)((sum_weight - standard) * 100 / standard);


	//이게 맞네
	//전부 double로 해보자
	standard1 = (cm - 100) * 0.9;
	fat1 = (weight - standard1) * 100 / standard1;
	//fat1 = ceil(fat1 * 100);

	//sum = (int)fat1;
	//printf("%lf %lf %d\n", standard1, fat1, sum);

	if (fat1 <= 10)
	{
		printf("정상");
	}
	else if (fat1 > 10 && fat1 <= 20 )
	{
		printf("과체중");
	}
	else 
	{
		printf("비만");
	}

}