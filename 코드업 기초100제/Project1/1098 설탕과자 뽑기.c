#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int  i, j, e, first, second;
	int x, y, h ,w, n ,stick , l, temp, d;
	int box[21][21] = { 0 };

	scanf("%d %d", &h, &w);
	for ( i = 1; i <= h; i++) // 배열 만들기
	{
		for ( j = 1; j <= w; j++)
		{
			box[i][j] = 0;
		}
	}

	scanf("%d", &n);//막대의 개수 
	for ( stick = 0; stick < n; stick++)//막대 개수 n만큼 넣어주기
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);//막대 길이
		if (d == 1)//가로 세로 판별
		{
			for (e = 1; e <= l; e++)//막대 길이 만큼 돌리기
			{
				for (first = x ; first < x + l; first++) // x,y길이 만큼 넣어주기
				{
					box[first][y] = 1;
					
				}
			}
		}
		else if(d == 0)
		{
			
			//for (e = 1; e <= l; e++)//막대 길이 만큼 돌리기
			//{
				for ( first = x; first <= x ; first++) // x,y길이 만큼 넣어주기
				{
					for ( second = 0; second < l; second++)
					{
						box[first][y++] = 1;
						
						//printf("%d ", second);
					}
				}
			//}
		}
		
	}


	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}


}