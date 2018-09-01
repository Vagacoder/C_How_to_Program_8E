/*
 * Ch2.24
 * OddorEven.c reads an integer and determines and prints whether
 * it¡¯s odd or even.
 *
 */

#include <stdio.h>

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);

	// read an integer
	int a;
	puts("Please an integer:");
	scanf("%d", &a);

	// determine whether it is an even or odd number.
	if(a%2 == 0){
		printf("%d is an even number.\n", a);
	} else {
		printf("%d is a odd number.\n", a);
	}

	return 0;
}
