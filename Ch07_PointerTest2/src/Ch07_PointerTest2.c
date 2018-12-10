/*
 ============================================================================
 Name        : Ch07_PointerTest2.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : Pointer test, pass by value or reference
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void movePtr(char* ptr);

int main(void) {

	char* ptr1 = "Hello world!";
	printf("Outside function, Before, pointer location is %c\n", *ptr1);
	movePtr(ptr1);
	printf("Outside function, After, pointer location is %c\n", *ptr1);
	//ptr1++;
	printf("Outside function, After and *++, pointer location is %c\n", *++ptr1);
	printf("Outside function, After and * ++, pointer location is %c\n", *ptr1++);
	printf("Outside function, After and after * ++, pointer location is %c\n", *ptr1);

	puts("\nAnother test....");

	char ptr2[] = "Hello world!";
	printf("Outside function, Before, pointer location is %c\n", *ptr2);
	movePtr(ptr2);
	printf("Outside function, After, pointer location is %c\n", *ptr2);
	// printf("Outside function, After and ++, pointer location is %c\n", (*ptr2++));

	printf("Outside function, After, and +1 pointer location is %c\n", *(ptr2+1));

	return EXIT_SUCCESS;
}

void movePtr(char* ptr){
	printf("Inside function, Before, pointer location is %c\n", *ptr);
	ptr++;
	printf("Inside function, After, pointer location is %c\n", *ptr);
}
