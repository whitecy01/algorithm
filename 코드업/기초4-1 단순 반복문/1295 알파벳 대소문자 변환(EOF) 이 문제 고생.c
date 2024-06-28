#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	
	//char english[1000] = "";
	//char english1[1000] = "";
	//int i , j , q;
	//scanf("%s", english);
	//for ( i = 0; english[i] != '\0'; i++)
	//{
	//	scanf("%c", &english[i]);
	//}

	/*
	for ( j = 0;  english[j] != '\0'; j++)
	{
		if (english[j] >= 97 && english[j] <= 122)
		{
			english1[j] = english[j] - 32;
		}
		else if (english[j] >= 65 && english[j] <= 90)
		{
			english1[j] = english[j] + 32;
		}
		else
		{
			english1[j] = english[j];
		}
	}
	printf("%s", english1);
	
	
	*/
	//for ( q = 0;  english[q] != '\0'; q++)
	//{
	//	printf("%c", english[q]);
	//}
	
	char c;

	while (scanf("%c", &c) != EOF)
	{
		if (c >= 65 && c <= 90)
			printf("%c", c + 32);
		else if (c >= 97 && c <= 122)
			printf("%c", c - 32);
		else
			printf("%c", c);
	}
	return 0;

	/*
	while (scanf("%c", &english) != EOF)
	{
		if (english >= 97 && english <= 122)
		{
			printf("%c", english - 32);
		}
		else if (english >= 65 && english <= 90)
		{
			printf("%c", english + 32);
		}
		//else if (!((english >= 97 && english <= 122) || (english >= 65 && english <= 90)))
		//{
		//	printf("%c", english );
		//}
		//(english >= 48 && english <= 57)
		else
		{
			return;
			//printf("%c", english);
		}
	}
	*/
	/*
	while (scanf("&c", &english) != EOF)
	{
		if (english >= 97 && english <= 122)
		{
			printf("%c", english - 32);
		}
		else if ((english >= 65 && english <= 90))
		{
			printf("%c", english + 32);
		}
		else
		{
			printf("%c", english);
		}

	}
	*/
}