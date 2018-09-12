/*
 ============================================================================
 Name        : Ch03_20.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Salary Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	float hours, rate, salary = 0;
	int done = 0;

	printf("%s", "Enter # of hours worked (-1 to end): ");
	scanf("%f", &hours);
	if (hours < 0) {
		done = 1;
	}

	while (!done) {
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);

		if (hours <= 40) {
			salary = hours * rate;
		} else {
			salary = 40 * rate + (hours - 40) * rate * 1.5;
		}

		printf("Salary is $%.2f\n\n", salary);

		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%f", &hours);
		if (hours < 0) {
			done = 1;
		}

	}

	return EXIT_SUCCESS;
}
