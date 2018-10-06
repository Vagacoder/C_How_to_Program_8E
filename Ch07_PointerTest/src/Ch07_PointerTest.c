/*
 ============================================================================
 Name        : Ch07_PointerTest.upc
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : Pointer test
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x = 10, y = 21, z = 34;
	int *xptr = &x;
	printf("pointer value of %d is %d  or %p.\n", *xptr, xptr, xptr);
	puts("");

	for (int i = 0; i < 10; i++) {
		if (xptr[i] >= 0) {
			printf("the value of index %d is %d.\n", i, xptr[i]);
		} else {
			printf("the value of index %d is %p.\n", i, xptr[i]);
		}
	}
	puts("");
	for (int i = -1; i > -10; i--) {
			if (xptr[i] >= 0) {
				printf("the value of index %d is %d.\n", i, xptr[i]);
			} else {
				printf("the value of index %d is %p.\n", i, xptr[i]);
			}
		}
	puts("");
	puts("Testing array now......");
	int a[] = {34, 47, 59,62};
	int *aptr;
	aptr = a;
	printf("a memory address is %p\n", &a);
	printf("aptr memory address is %p\n", aptr);
	printf("a value is %p\n", a);
	printf("a[0] value is %d\n", a[0]);
	printf("aptr value is %d\n", aptr[0]);
	printf("aptr value is %d\n", *aptr);
	printf("aptr value is %d\n", *(aptr+1));
	printf("++aptr memory address is %p\n", ++aptr);
	printf("aptr value is %d\n", aptr[0]);
	printf("aptr value is %d\n", *aptr);
	printf("++*aptr value is %d\n", ++*aptr);
	printf("*++aptr value is %d\n", *++aptr);
	return 0;
}
