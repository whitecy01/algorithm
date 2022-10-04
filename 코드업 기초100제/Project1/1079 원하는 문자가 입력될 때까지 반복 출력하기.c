#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char input;

	while (1) {
		scanf("%c ", &input);
		printf("%c\n", input);
		if (input == 'q')
			break;
	}
	/*
	scanf("%c", &input);
	if (input != 'q')
	{
		printf("%c", input);
		printf("\n");
	}
	if (input == 'q')
	{
		printf("%c", input);
		return;

	}
	while (input != 'q')
	{
		scanf(" %c", &input);
		printf("%c", input);
		printf("\n");
	}
	*/
}
