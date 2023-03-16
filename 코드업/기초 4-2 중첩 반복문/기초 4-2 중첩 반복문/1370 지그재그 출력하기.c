#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int h, i, j, k , e, s, q;
	scanf("%d %d", &h, &k);

	for ( q = 0; q < k; q++)
	{
		for (i = 1; i <= h; i++)
		{
			for (e = h + 1; e <= h + i - 1; e++)
			{
				printf(" ");
			}
			
				printf("*");
			
			printf("\n");

			
		}
		for (i = h; i > 1 ; i--)
		{

			//3 2 
			//0 1 (1) 

			//전체가 감소하면 작은 부분도 감소하면서 코드를 짜주는 것이 좋다?
			// 작은 부분은 작아지는 i를 이용 
			for (s = 0  ; s <  i - 2  ; s++)
			{
				printf(" ");
			}
			
				printf("*");
			
			
			printf("\n");
		}
		//printf("\n");
	}
	
}
