/*
 * Ch2.19 and Ch2.23
 * inputs three different integers, do Arithmetic,
 * and find Largest Value and Smallest Value
 */

#include <stdio.h>

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);

	//input 3 integers
	int a, b, c;
	puts("Please enter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);

	// arithmetic
	int sum = a + b + c;
	float average = sum / 3;
	int product = a * b * c;

	// algorithm for Ch2.23
	// find largest and smallest value
	int small, large;
	if (a >= b) {
		if (b >= c){
			large = a;
			small = c;
		} else if (c >= a){
			large = c;
			small = b;
		} else {
			large = a;
			small = b;
		}
	} else { // b >= a
		if (c >= b) {
			large = c;
			small = a;
		} else if (a >= c){
			large = b;
			small = c;
		} else {
			large = b;
			small = a;
		}
	}

	printf("Sum is %d\n", sum);
	printf("Average is %f\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", small);
	printf("Largest is %d\n", large);
	return 0;
}
