#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, number, k, q, h, c, w;
	int s, g, y, e, l, u;
	scanf("%d", &number);

	for ( i = 0; i < number / 2; i++)
	{
		if (i == 0)
		{
			for ( s = 0; s < number; s++)
			{
				printf("*");
				
			}
			printf("\n");
			continue;
		}

		for ( j = 0; j <= 0; j++)
		{
			printf("*");
		}

		for (q = 1; q <= i - 1; q++)
		{
			printf(" ");
		}
		for ( k = i ; k <= i; k++)
		{
			printf("*");
			//printf("%d", k);
		
		}
		//printf("%d", k);
		//중간 공백
		for ( e = k + 1; e < number - k + 1  ; e++)
		{
			//printf("%d", e);
			printf(" ");
			//printf("%d", e);
		}

		for (l = number - 1; l >= number - 1; l--)
		{
			printf("*");
			//printf("%d", l);
		}
		for ( h = number; h > number - i + 1; h--)
		{
			printf(" ");
		}

		//마지막 채워주기
		for (q = number; q >= number ; q--)
		{
			printf("*");
		}
		//for ( y = number - 1; y <= number - 1; y++)
		//{
		//	printf("*");
		//}

		// i == 1 일 때
		//for (q = i + 1; q <  ; q++)
		//{
		//	printf(" ");
		//}

		printf("\n");

		
	}
	int r, ls, nex, fac;
	if (number % 2 == 1)
	{
		for ( u = number / 2 ; u <= number / 2; u++)
		{
			for ( r = 0; r <= 0; r++)
			{
				printf("*");
			}
			for ( nex = 1; nex < number / 2; nex++)
			{
				printf(" ");
			}
			for ( ls = number / 2; ls <= number / 2 ; ls++)
			{
				printf("*");
			}
			for ( fac = nex + 1; fac < number - 1; fac++)
			{
				printf(" ");
			}
			for (r = number - 1; r <= number - 1; r++)
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
	

	// i = 0; i < number / 2; i++)
	for (i = number/ 2 - 1 ; i >= 0; i--)
	{

	
		if (i == 0)
		{
			for (s = 0; s < number; s++)
			{
				printf("*");

			}
			printf("\n");
			continue;
		}
		for (j = 0; j <= 0; j++)
		{
			printf("*");
		}

		for (q = 1; q <= i - 1; q++)
		{
			printf(" ");
		}
		for (k = i; k <= i; k++)
		{
			printf("*");
			//printf("%d", k);

		}
		//printf("%d", k);
		//중간 공백
		for (e = k + 1; e < number - k + 1; e++)
		{
			//printf("%d", e);
			printf(" ");
			//printf("%d", e);
		}

		for (l = number - 1; l >= number - 1; l--)
		{
			printf("*");
			//printf("%d", l);
		}
		for (h = number; h > number - i + 1; h--)
		{
			printf(" ");
		}

		//마지막 채워주기
		for (q = number; q >= number; q--)
		{
			printf("*");
		}
		//for ( y = number - 1; y <= number - 1; y++)
		//{
		//	printf("*");
		//}

		// i == 1 일 때
		//for (q = i + 1; q <  ; q++)
		//{
		//	printf(" ");
		//}

		printf("\n");


	}

	/*
	for ( w = 0; w < number/ 2 ; w++)
	{
		for ( y = 0; y <= 0; y++)
		{
			printf("*");
		}
		
		for ( c = i- 1; c > w; c--)
		{
			printf("-");
		}
		for ( g = i; g >= i ; g--)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	
}