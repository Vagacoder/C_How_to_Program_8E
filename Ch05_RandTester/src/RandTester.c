/*
 * RandTester.c
 *
 *  Created on: Sep 10, 2018
 *      Author: Vagacoder
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int j = 0;

	// show the range of rand() (from 0 to RAND_MAX)
	printf("RAND_MAX is %d\n", RAND_MAX);
	printf("RAND_MIN is %d\n", 0);

	// show the directly input HEX number
	printf("0xBEEF is %d\n", 0xBEEF);
	puts("");

	// show 10 random number(range from 0 to RAND_MAX; range from 0 to 5 and range from 1 to 6)
	while (j <= 10) {
		unsigned int i = rand();
		printf("random number is %d\n", i);
		printf("random number 0-5 is %d\n", i % 6);
		printf("random number 1-6 is %d\n", i % 6 + 1);
		puts("");
		j++;
	}

	return 0;
}
