#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>



void insert(int array[],int loc, int value ) {
	int i;
	for ( i = loc; i < n; i--)
	{
		array[i + 1] = array[i];
	}
	array[loc] = value;
	items++;
	return;
}

int main()
{



}