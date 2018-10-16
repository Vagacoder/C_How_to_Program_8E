/*
 ============================================================================
 Name        : Ch08_StringPointerTest.c
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

	char word[20];
	puts("Enter a word:");
	scanf("%19s", word);
	printf("%s\n", word);

	puts("\nEnter a word again:");
	scanf("%19s", &word);
	printf("%s\n", word);

	return EXIT_SUCCESS;
}
