#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
char str1[1001] = { 0 };
char str2[1001][1001] = { 0 };
char temp[1001] = { 0 };

int main()
{
	int len;

	scanf("%s", str1);
	len = strlen(str1);


	for (int i = 0; i < len; i++) // 접미사 저장
	{
		for (int j = i; j < len; j++)
		{
			str2[i][j - i] = str1[j];
		}
	}

	for (int i = 0; i < len - 1; i++) // 버블 정렬
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (strcmp(str2[j], str2[j + 1]) > 0)
			{
				strcpy(temp, str2[j]); // 인덱스 j번 째를 다 들고 온다? 아니면 각각 하나씩 비교해서 넣는다..?
				strcpy(str2[j], str2[j + 1]);
				strcpy(str2[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < len; i++)
		printf("%s\n", str2[i]);


	return 0;
}
/*
#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	char box[1000];
	int i, q, j, number;
	int n;
	char** compare;
	int count, count2;

	char answer;

	char name_box[1000];

	scanf("%s", box);
	count = strlen(box);

	compare = (char **)malloc(sizeof(char*) * count);
	for (i = 0; i < count; i++)
	{
		compare[i] = (char*)malloc(sizeof(char) * count);
	}

	for ( i = 0; i < count; i++)
	{
		number = i;
		for ( j = 0; j < count; j++)
		{
			if (number <= count )
			{
				compare[i][j] = box[number++];
			}
		}
		printf("\n");
	}

	int w, k = 0;
	for ( i = 0; i < count; i++)
	{
		answer = compare[i][0];
		w = 0;
		k = 0;
		if (answer > compare[i][0])
		{
			while (compare[i][j] != "\0")
			{
				name_box[j] = compare[i][j];
				j++;
			}
			while (compare[i+ 1][w] != "\0")
			{
				compare[i][w] = compare[i + 1][w];
				w++;
			}
			while (name_box[k] != "\0")
			{
				compare[i + 1][k] = name_box[k];
				k++;
			}

		}
	}


	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count; j++)
		{
			printf("%c", compare[i][j]);
		}
		printf("\n");
	}

}*/