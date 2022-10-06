#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double length, weight, standard, fat;
	
	scanf("%lf %lf", &length, &weight);

	if (length < 150)
	{
		standard = length - 100;
	}
	else if (length >= 150 && length < 160)
	{
		standard = (length - 150) / 2 + 50;
	}
	else
	{
		standard = (length - 100) * 0.9;
	}
	//printf("%lf\n", standard);

	fat = (weight - standard) * 100 / standard;
	//printf("%lf\n", fat);
	if (fat <= 10)
	{
		printf("정상");
	}
	else if (fat > 10 && fat <= 20)
	{
		printf("과체중");
	}
	else
	{
		printf("비만");
	}


}