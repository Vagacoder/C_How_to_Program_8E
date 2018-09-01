/*
 * Ch2.26
 * Multiples.c reads in two integers and determines and prints whether
 * the first is a multiple of the second.
 */

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	// input 2 integers
	int a, b;
	puts("Please enter 2 integers: ");
	scanf("%d %d", &a, &b);

	// determine whether first integer is multiple of second integer.
	if (a%b == 0) {
		printf("%d is a multiple of %d", a, b);
	} else {
		printf("%d is NOT a multiple of %d", a, b);
	}

	return 0;
}

