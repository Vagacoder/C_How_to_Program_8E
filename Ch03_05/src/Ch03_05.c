/*
 ============================================================================
 Name        : Ch03_5.c
 Author      : Vagacoder
 Version     :
 Copyright   : Your copyright notice
 Description : ex 3.5
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
