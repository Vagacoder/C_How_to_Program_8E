/*
 * ConditionalOperator.c
 *
 *  Created on: Sept 2018
 *      Author: Vagacoder
 */

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	int grade;
	puts("Please enter the grade (0-100):");
	scanf("%d", &grade);

// #1 if else block
//	if (grade >= 60){
//		puts("Passed!");
//	} else {
//		puts("Failed!");
//	}

// #2 conditional operator
//	puts(grade >= 60 ? "Passed!" : "Failed!");

// #3 conditional operator + executable expression
	grade >= 60 ? puts("Passed!") : puts("Failed!");
	return 0;
}
