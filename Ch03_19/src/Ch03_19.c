/*
 ============================================================================
 Name        : Ch03_19.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Interest Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	float interest = 0, principal, rate;
	unsigned int days;
	int done = 0;

	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &principal);
	if (principal < 0) {
		done = 1;
	}

	while (!done) {
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter terms of the loan in days: ");
		scanf("%d", &days);

		interest = principal * rate * days / 365;
		printf("The interest charge is $%.2f\n\n", interest);

		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal < 0) {
			done = 1;
		}

	}

	return EXIT_SUCCESS;
}
