/*
 ============================================================================
 Name        : Ch03_16.c
 Author      : Vagcoder
 Version     :
 Copyright   : Your copyright notice
 Description : ex 3.16 Gas Mileage
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	float gas = 0, gas_total = 0;
	unsigned int mile = 0, mileage = 0;
	int done = 0;

	// primer reading of gallone, since it requires if gallon input is -1, program ends.
	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%f", &gas);
	if (gas < 0) {
		done = 1;
	}

	while (!done) {

		gas_total += gas;
		printf("%s", "Enter the miles driven: ");
		scanf("%u", &mile);
		mileage += mile;
		printf("The mile/gallon for this tank was %f\n\n", mile / gas);

		printf("%s", "Enter the gallons used (-1 to end): ");
		scanf("%f", &gas);
		if (gas < 0) {
			done = 1;
		}

	}

	// prevent zero division
	if (gas_total != 0) {
		printf("The overall average miles/gallon was %f", mileage / gas_total);
	} else {
		printf("The overall average miles/gallon was 0");
	}

	return EXIT_SUCCESS;
}
