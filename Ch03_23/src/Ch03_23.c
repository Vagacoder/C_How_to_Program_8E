/*
 ============================================================================
 Name        : Ch03_23.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Find largest number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int max = 0, counter = 0;
	char input[101];
	puts("Please enter 10 integers, or ENTER to finish.");
	fgets(input, 100, stdin);
	while (input[0] != '\n' && counter < MAX){
		int number = atoi(input);
		counter ++;
		if (counter == 1 || number > max){
			max = number;
		}
		fgets(input, 100, stdin);
	}

	if (counter >0){
	printf("The largest number is %d.\n", max);}
	else {
		puts("No input!");
	}
	return EXIT_SUCCESS;
}
