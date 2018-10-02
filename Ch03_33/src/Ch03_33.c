/*
 ============================================================================
 Name        : Ch03_33.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : ex 3.33 hollow square of asterisk
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF,0);

	char input[100];
	puts("Please enter the length of side:");
	int side = atoi(fgets(input, 99, stdin));

	int i = 0;
	for (; i <side; i++){

		if (i == 0 || i == side-1){
			for (int j = 0; j<side; j++){
				printf("%s", "*");
			}
		} else {
			for (int j = 0; j < side; j++){
				if (j == 0 || j == side -1){
					printf("%s", "*");
				} else {
					printf("%s", " ");
				}
			}
		}
		puts("");
	}

	return EXIT_SUCCESS;
}
