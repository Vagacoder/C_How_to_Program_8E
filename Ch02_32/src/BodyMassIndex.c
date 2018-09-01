/*
 * Ch2.32
 * BodyMassIndex.c, a BMI calculator application that reads the
 * user¡¯s weight in pounds and height in inches, then calculates
 *  and displays the user¡¯s body mass index.
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	int option;
	float BMI, weight, height;

	puts("Enter 1 for pound and inch, enter 2 for kg and meter:");
	scanf("%d", &option);

	if (option == 1) {
		puts("Please enter your weight in pounds:");
		scanf("%f", &weight);

		puts("Please enter your height in inches:");
		scanf("%f", &height);

		BMI = weight * 703 / height / height;
	}

	else if (option == 2) {
		puts("Please enter your weight in kgs:");
		scanf("%f", &weight);

		puts("Please enter your height in meters:");
		scanf("%f", &height);

		BMI = weight / height / height;
	}

	else {
		puts("wrong choice.");
		return 0;
	}
	puts("BMI VALUES");
	puts("Underweight: less than 18.5");
	puts("Normal: between 18.5 and 24.9");
	puts("Overweight: between 25 and 29.9");
	puts("Obese: 30 or greater");

	printf("Your BMI is %f\n", BMI);

	return 0;
}
