/*
 * main.c
 *
 *  Created on: Nov 26, 2018
 *      Author: qhu
 */
#include <stdio.h>
#include <stdlib.h>


int main(void){

	printf("%s", "This is CR\rNewline\n\n");
	printf("%s", "This is LF\nNewline\n\n");
	printf("%s", "This is CRLF\r\nNewline\n\n");
	printf("%s", "This is LFCR\n\rNewline\n\n");


	return EXIT_SUCCESS;
}


