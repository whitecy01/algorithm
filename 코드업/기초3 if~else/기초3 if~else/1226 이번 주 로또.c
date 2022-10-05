#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	//int cor1, cor2, cor3, cor4, cor5, cor6, cor7;
	//int br1, br2, br3, br4, br5, br6;
	int box_co[7] , i , j;
	int box_br[6], k , q , count = 0, c, s;
	//scanf("%d %d %d %d %d %d %d", &cor1, &cor2, &cor3, &cor4, &cor5, &cor6, &cor7);
	//scanf("%d %d %d %d %d %d", &br1, &br2, &br3, &br4, &br5, &br6);

	for ( i = 0; i < 7; i++)
	{
		scanf("%d", &box_co[i]);
	}
	for (j = 0; j < 6; j++)
	{
		scanf("%d", &box_br[j]);
	}

	for ( k = 0; k < 6; k++)
	{
		for ( q = 0; q < 6; q++)
		{
			if (box_co[k] == box_br[q])
			{
				count++;
			}
		}
	}

	//printf("%d", count);


	if (count == 2)
	{
		printf("0");
	}
	else if (count == 3)
	{
		printf("5");
	}
	else if (count == 4)
	{
		printf("4");
	}
	else if (count == 5)
	{
		//printf("Dea1");
		for ( c = 6; c <= 6; c++)
		{
			for ( s = 0; s < 6; s++)
			{
				//printf("Dea");
				if (box_co[c] == box_br[s])
				{
					count++;
					if (count == 6)
					{
						printf("2");
						return;
					}
				}
			
			}
		}
		if (count == 5)
		{
			printf("3");
		}
		
	}
	else if (count == 6)
	{
		printf("1");
	}
	/*
	if (cor1 == br1 && cor2 == br2 && cor3 == br3 && cor4 == br4 &&
		cor5 == br5 && cor6 == br6)//1µî
	{
		printf("1");
		return;
	}
	else if()
	*/
}