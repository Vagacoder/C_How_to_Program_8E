/*
 * Ch2.31
 * TableofSquareCube.c, calculates the squares and cubes of
 * the numbers from 0 to 10 and uses tabs to print.
 */

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	// set basal number
	int a = 0;

	// print head of table
	printf("number  square  cube\n");
	// print table
	while (a <= 10){
		printf("%-8d%-8d%-8d\n", a, a * a, a * a *a);
		a++;
	}

	return 0;
}
