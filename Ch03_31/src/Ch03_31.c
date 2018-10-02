/*
 ============================================================================
 Name        : Ch03_31.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : ex 3.31 Dangling Else
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 5, y = 8;
	/*
	 a)
	 @@@@@
	 $$$$$
	 &&&&&
	 */
	if (y == 8)
		if (x == 5)
			puts("@@@@@");
		else
			puts("#####");
	puts("$$$$$");
	puts("&&&&&\n");

	/*
	 b)
	 @@@@@
	 */
	if (y == 8)
		if (x == 5)
			puts("@@@@@");
		else {
			puts("#####");
			puts("$$$$$");
			puts("&&&&&\n");
		}
	puts("");
	/*
	 c)
	 @@@@@
	 &&&&&
	 */

	if (y == 8)
		if (x == 5)
			puts("@@@@@");
		else {
			puts("#####");
			puts("$$$$$");
		}
	puts("&&&&&\n");

	/*
	 d)
	 #####
	 $$$$$
	 &&&&&
	 */
	x = 5, y = 7;
	if (y == 8) {
		if (x == 5)
			puts("@@@@@");
	} else
		puts("#####");
	puts("$$$$$");
	puts("&&&&&\n");

	return EXIT_SUCCESS;
}
