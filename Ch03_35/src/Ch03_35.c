/*
 ============================================================================
 Name        : Ch03_35.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : ex 3.35 convert binary number to decimal number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	char input[101];
	puts("Please enter an binary number (only 0 or 1):");
	int number = atoi(fgets(input, 100, stdin));

	int result = 0;
	int count = 0;
	while (number > 0){
		int digit = number%10;
		result +=digit * pow(2, count);
		number /=10;
		count++;
	}

	printf("The decimal for %d is %d.\n", number, result);
	return EXIT_SUCCESS;
}
