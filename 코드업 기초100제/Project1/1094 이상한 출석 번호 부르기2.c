#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int count , i , j;
	int random;
	int aw_number[10000];

	scanf("%d", &count);
	for ( i = 0; i < count; i++)
	{
		
		scanf("%d", &random);
		aw_number[i] = random;
		
	}
	//i = i - 1;

	while (i != 0)
	{
		i--;
		printf("%d ", aw_number[i]);
		
	}
}