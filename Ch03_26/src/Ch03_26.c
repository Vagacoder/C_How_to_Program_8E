/*
 ============================================================================
 Name        : Ch03_26.c
 Author      : Vagacoder
 Version     :
 Copyright   :
 Description : ex 3.26 find the two largest number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int max1 = 0, max2 = 0, counter = 0;
	char input[101];
	puts("Please enter 10 integers, or ENTER to finish.");
	fgets(input, 100, stdin);

	// line below is using Unix\Linux new line char
	//while (input[0] != '\n' && counter < MAX) {

	// line below is using Windows new line char
	while (input[0] != '\r' && counter < MAX) {
		int number = atoi(input);
		counter++;
		if (counter == 1 || number > max1) {
			max2 = max1;
			max1 = number;
		} else if ((number < max1) && (number > max2)) {
			max2 = number;
		}

		fgets(input, 100, stdin);
	}

	if (counter > 0) {
		printf("The largest number is %d.\n", max1);
		printf("The 2nd largest number is %d.\n", max2);
	} else {
		puts("No input!");
	}
	return EXIT_SUCCESS;
}
