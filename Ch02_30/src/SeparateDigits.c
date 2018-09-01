/*
 * Ch2.30
 * SeparateDigits.c, inputs one five-digit number, separates
 * the number into its individual digits and prints the digits
 *  separated from one another by three spaces each.
 *
 */

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	int a;
	puts("Please enter an integer: ");
	scanf("%d", &a);

	while (a > 9){
		printf("%d   ", a%10);
		a = a/10;
	}

	printf("%d\n", a);

	return 0;
}

