/*
 ============================================================================
 Name        : Ch03_6.c
 Author      : Vagacoder
 Version     :
 Copyright   : Your copyright notice
 Description : ex 3.6, power function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	unsigned int x, y;
	puts("Please enter first integer:");
	scanf("%u", &x);

	puts("Please enter second integer:");
	scanf("%u", &y);

	unsigned int i = 1, power = 1;

	while (i <= y) {
		power *= x;    // this could be overflow, how could I check it?
		i++;
	}

	printf("The power is: %u", power);
	return EXIT_SUCCESS;
}
