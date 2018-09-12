/*
 ============================================================================
 Name        : Ch03_18.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : ex 3.18 Sales COmmisiion Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	float base_salary = 200.00, sale, salary;
	int done = 0;

	do {
		printf("Enter sale in dollars (-1 to end): ");
		scanf("%f", &sale);
		if (sale < 0){
			done = 1;
		} else {
			salary = base_salary + sale * 0.09;
			printf("Salary is: $%.2f\n", salary);
		}
		puts("");
	} while (!done);

	return EXIT_SUCCESS;
}
