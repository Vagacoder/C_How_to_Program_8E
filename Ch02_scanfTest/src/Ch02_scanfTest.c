/*
 ============================================================================
 Name        : Ch02_scanfTest.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char buffer[100];
	char input[100];
	int a;
	int b;
	scanf("%d %d", &a, &b);
	printf("a is %d, b is %d\n", a ,b);
	return EXIT_SUCCESS;
}
