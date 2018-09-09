/*
 ============================================================================
 Name        : Ch03_WhileLoopEx01.c
 Author      : Qirui Hu
 Version     : Sept. 2018
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// example of while loop, to find smallest power of 3, which is larger than 100.
int main(void) {

	int product = 3;
	while(product <= 100){
		product = 3 * product;
	}

	printf("%d", product);
	return EXIT_SUCCESS;
}
