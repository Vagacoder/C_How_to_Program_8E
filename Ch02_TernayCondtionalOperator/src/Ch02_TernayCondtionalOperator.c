/*
 ============================================================================
 Name        : Ch02_TernayCondtionalOperator.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : replace if-else using ternary conditinal operator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1 = 13;
	//int num1 = 14;

	// 1, if-else
	if (num1 %7 == 0){
		printf("%d is divisible by 7.", num1);
	} else {
		printf("%d is not divisible by 7.", num1);
	}

	puts("");

	// 2, ternary condtional operator
	printf("%d is %sdivisible by 7.", num1, num1 %7 ==0? "":"not ");
	return EXIT_SUCCESS;
}
