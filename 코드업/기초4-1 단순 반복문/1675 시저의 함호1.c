#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	char english;

	while (scanf("%c", &english) != EOF)
	{
		if (english == 'a')
		{
			printf("x");
			continue;
		}
		if (english == 'b')
		{
			printf("y");
			continue;
		}
		if (english == 'c')
		{
			printf("z");
			continue;
		}

		if (english == 'A')
		{
			printf("X");
			continue;
		}
		if (english == 'B')
		{
			printf("Y");
			continue;
		}
		if (english == 'C')
		{
			printf("Z");
			continue;
		}

		if ((english >= 97 && english <= 122) || (english >= 65 && english <= 90))
		{
			printf("%c", english - 3);
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