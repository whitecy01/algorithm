#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	char box[100];
	int i, j;
	char answer;
	int count = 0;
	int result = 0;
	int box1[100];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		result = 0;
		count = 0;
		scanf("%s", box);
		for ( j = 0; j < strlen(box); j++)
		{
			if (box[j] == 'O')
			{
				count++;
				result += count;
			}
			else if (box[j] == 'X')
			{
				count = 0;
			}
		}
		box1[i] = result;
		//printf("%d\n", result);
	}

	//이렇게 하니 런타임 에러
	for ( j = 0; j < n; j++)
	{
		printf("%d\n", box1[j]);
	}


	/*
	int n;
	int box[80];
	int i, j;
	char answer;
	int count = 0;
	int result= 0;
	scanf("%d", &n);
	//n = getchar();
	for ( i = 0; i <= n; i++)
	{
		result = 0;
		while (getchar() != '\n')
		{
			scanf("%c", &answer);
			//answer = getchar();
			if (answer == 'O')
			{
				count++;
				result += count;
			}
			else if (answer == 'X')
			{
				count = 0;
			}
			//if (answer == '\n')
			//{
			//	break;
			//}
		}
		box[i] = result;
	}

	for ( j = 0; j < n; j++)
	{
		printf("%d\n", box[j]);
	}
	*/
}