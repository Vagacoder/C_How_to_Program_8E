/*
 ============================================================================
 Name        : Ch03_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum, x;
	x = 1;
	sum = 0;
	while (x <= 10) {
		sum += x;
		x++;
	}
	printf("The sum is: %d\n", sum);

	return EXIT_SUCCESS;
}
