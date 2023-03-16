#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>


//구조체를 함수로 선언하는 부분을 알아보자 
typedef struct complex
{
	float imaginary;
	float real;
} complex;


complex complex_add(complex a, complex b) {
	complex temp;

	temp.real = a.real + b.real;
	temp.imaginary = a.imaginary + b.imaginary;
	return temp;
}

int main()
{
	complex c1;
	complex c2;

}