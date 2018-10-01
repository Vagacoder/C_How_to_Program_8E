/*
 ============================================================================
 Name        : Ch03_25.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Tabular output
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROW 5
int main(void) {

	printf("%-8s%-8s%-8s%-8s\n\n", "A", "A+2", "A+4", "A+6");

	int i = 1;
	for (; i <= ROW; i++){
		int base = i*3;
		printf("%-8d%-8d%-8d%-8d\n", base, base +2, base +4, base+6);
	}

	return EXIT_SUCCESS;
}
