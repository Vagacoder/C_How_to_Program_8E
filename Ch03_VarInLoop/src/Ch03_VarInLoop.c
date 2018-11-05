/*
 ============================================================================
 Name        : Ch03_VarInLoop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Test var inside the loop
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;
	puts("No malloc.");
	while(i<10){
		int a = (int) random();
		printf("the %dth is %15d and its address is %p\n", i, a, &a);
		++i;
	}

	puts("\nWith malloc.");
	i = 0;
	while(i<10){
		int* a = (int*) malloc(sizeof(int));
		*a = (int) random();
		printf("the %dth is %15d and its address is %p\n", i, *a, a);
		++i;
	}

	return EXIT_SUCCESS;
}
