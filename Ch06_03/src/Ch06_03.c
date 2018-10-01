/*
 ============================================================================
 Name        : Ch06_03.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
	double fractions[SIZE] = {0};
	fractions[4] = 1;
	fractions[9] = 1.667;
	fractions[7] = 3.333;
	printf("%.2lf %.2lf", fractions[6], fractions[9]);

	for (size_t x=0; x < SIZE; ++x ){
		printf("%");
	}

	return EXIT_SUCCESS;
}
