/*
 ============================================================================
 Name        : Ch02_FormatSpecifier.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : printf, and format specifier
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 1, b = 2, c = 3;

	printf("Input integers are\na: %d\nb: %d\nc: %d\n", a, b, c);
	printf("a is %.3d\n", a);    // %.nd fill the leading zeros
	printf("a is %-.3d\n", a);    // "-" does not work for %.nd
	printf("a is %3d\n", a);
	printf("a is %-3d\n", a);
	puts("");

	char c1 = 'A';
	char c2[BUFSIZ] = "B";
	char c3 = "C";
	printf("c1 is %c\n", c1);
	printf("c2 string is %c\n", c2);
	printf("c2 is %s\n", c2);
	printf("c3 is %c\n", c3);
	// printf("c3 string is %s\n", c3); // this line will crash in execution.

	char c4[] = "Testing";
	printf("The length of c4 is %d\n", strlen(c4));
	char c5[8] = { 'T', 'e', 's', 't', 'i', 'n', 'g', '\0' };
	printf("The length of c4 is %d\n", strlen(c5));
	return EXIT_SUCCESS;
}
