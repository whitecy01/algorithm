#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char first, output = 'a';
	scanf("%c", &first);

	while (first >= 'a')
	{
		printf("%c ", output);
		output++;
		first--;

	}
}