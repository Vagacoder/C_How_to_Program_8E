/*
 * tester01.c
 *
 *  Created on: 2018Äê9ÔÂ1ÈÕ
 *      Author: Skuller
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	int num1 = 14;

	// 1, if-else
	if (num1 % 7 == 0) {
		printf("%d is divisible by 7.", num1);
	} else {
		printf("%d is not divisible by 7.", num1);
	}

	puts("");

	// 2, ternary conditional operator
	printf("%d is %sdivisible by 7.", num1, (num1 % 7 == 0) ? "" : "not ");

	// 3, not correct
	// printf("%d is %sdivisible by 7.", (num%7 == 0) ? (num1, "") : (num1 "not "));

	return EXIT_SUCCESS;
}

