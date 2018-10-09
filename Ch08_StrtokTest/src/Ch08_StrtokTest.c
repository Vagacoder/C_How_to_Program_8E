/*
 ============================================================================
 Name        : Ch08_StrtokTest.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : strtok tester
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str1[] = "We are studying computer science.";

	char* ptr1 = str1;
	// string pointer in printf does not need *
	printf("%s\n", ptr1);
	puts("");

	// get first token
	char* ptr = strtok(str1, " ");
	printf("first call is %s\n", ptr);

	// get second token
	ptr = strtok(NULL, " ");
	printf("second call is %s\n", ptr);

	// get third token
	ptr = strtok(NULL, " ");
	printf("third call is %s\n", ptr);

	// get forth token
	ptr = strtok(NULL, " ");
	printf("forth call is %s\n", ptr);

	// get fifth token
	ptr = strtok(NULL, " ");
	printf("fifth call is %s\n", ptr);

	// get sixth token, beyond the range of string return NULL
	ptr = strtok(NULL, " ");
	printf("sixth call is %s\n", ptr);

	// input string is modified by strtok!
	printf("%s\n", ptr1);
	printf("%s\n", str1);
	return EXIT_SUCCESS;
}
