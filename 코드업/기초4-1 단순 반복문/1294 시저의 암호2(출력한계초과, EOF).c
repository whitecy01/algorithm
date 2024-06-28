#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//int i, j, max, min;
	char english;
	while (scanf("%c", &english) != EOF)
	{
		

		if (english == 'x')
		{
			printf("a");
			continue;
		}
		if (english == 'y')
		{
			printf("b");
			continue;
		}
		if (english == 'z')
		{
			printf("c");
			continue;
		}

		if (english == 'X')
		{
			printf("A");
			continue;
		}
		if (english == 'Y')
		{
			printf("B");
			continue;
		}
		if (english == 'Z')
		{
			printf("C");
			continue;
		}

		if ((english >= 97 && english <= 122) || (english >= 65 && english <= 90))
		{
			printf("%c", english + 3);
			continue;
		}
		if (english == 32)
		{
			printf("%c", english);
			continue;
		}
		else
		{
			return;
		}
		
	}

}