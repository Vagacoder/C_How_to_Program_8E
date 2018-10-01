/*
 ============================================================================
 Name        : Ch03_22.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Simple loop output
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NUMBER 10

int main(void) {

	for(int i = 0; i < NUMBER; i++){
		if (i == 0) {
			printf("%d", i);
		} else{
		printf("   %d", i);
		}
	}
	puts("");
	return EXIT_SUCCESS;
}
