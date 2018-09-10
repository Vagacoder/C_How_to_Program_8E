/*
 * RandTester.c
 *
 *  Created on: Sep 10, 2018
 *      Author: Vagacoder
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int j = 0;

	printf("%d\n", RAND_MAX);
	puts("");

	while (j <= 10){

		unsigned int i = rand();
		printf("%d\n", i);
		j++;
	}

	return 0;
}
