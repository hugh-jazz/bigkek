/*
 ============================================================================
 Name        : lecture-03.c
 Author      : mr
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("What is the field width?\n");
	scanf("%d", &width);

	printf("The number is: %*d.\n", width, number);
	printf("Now enter both width and precision\n");

	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f.\n", width, precision, weight);

	return 0;
}