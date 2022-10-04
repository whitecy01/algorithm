#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade , compare;
	scanf("%d", &grade);

	 compare = grade % 10;
	 
	 if (grade == 11 || grade == 12 || grade == 13)
	 {
		 printf("%dth", grade);
		 return;
	 }

	 if (compare == 1)
	 {
		 printf("%dst", grade);
	 }
	 else if (compare == 2 )
	 {
		 printf("%dnd", grade);
	 }
	 else if (compare == 3)
	 {
		 printf("%drd", grade);
	 }
	 else
	 {
		printf("%dth", grade);
	 }


}