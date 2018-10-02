/*
 ============================================================================
 Name        : Ch03_34.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : Palindrome tester for 5 digits number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define digit 5

int isPalindrome(int a);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	char input[101];
	puts("Please enter an integer of 5 digits:");
	int number = atoi(fgets(input, 100, stdin));

	if (number > 99999 || number < 10000) {
		printf("%s", "Wrong input!");
	} else {
		int result = isPalindrome(number);
		if (result != 0) {
			printf("%d is a palindrome!\n", number);
		} else {
			printf("%d is NOT a palindrome!\n", number);
		}
	}
	return EXIT_SUCCESS;
}

int isPalindrome(int a) {

	int num1, num2, num4, num5;
	num1 = a % 10;
	num2 = a / 10 % 10;
	num4 = a / 1000 % 10;
	num5 = a / 10000 % 10;
	if (num1 == num5 && num2 == num4) {
		return 1;
	} else {
		return 0;
	}
}
