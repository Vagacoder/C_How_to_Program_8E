/*
 * Ch2.16, Ch2.17 and Ch2.18
 * This program that asks the user to enter two numbers, obtains them from
 *  the user and prints their sum, product, difference, quotient and remainder.
 */
#include <stdio.h>

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);

	// Ch2.16
	int a, b;
	puts("Please enter 2 integers: ");
	scanf("%d %d", &a, &b);

	printf("The sum is %d.\n", a + b);
	printf("The product is %d.\n", a * b);
	printf("The difference is %d.\n", a - b);
	printf("The quotation is %d.\n", a / b);
	printf("The remainder is %d.\n", a % b);

	puts("");

	// Ch2.17
	printf("1 2 3 4\n");
	printf("%d %d %d %d\n", 1, 2, 3, 4);
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 \n");
	puts("");

	// Ch2.18
	// use variable from Ch2.16
	if (a > b){
		printf("%d is larger.\n", a);
	} else if (a < b){
		printf("%d is larger.\n", b);
	} else {
		printf("%s", "They are equal.\n");
	}

	return 0;
}
