/*
 * Ch2.29
 * Value of a Character,
 *
 */

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	// find the ASCII value of characters
	printf("%c value is %d\n", 'A', 'A');
	printf("%c value is %d\n", 'B', 'B');
	printf("%c value is %d\n", 'C', 'C');
	printf("%c value is %d\n", 'a', 'a');
	printf("%c value is %d\n", 'b', 'b');
	printf("%c value is %d\n", 'c', 'c');
	printf("%c value is %d\n", '0', '0');
	printf("%c value is %d\n", '1', '1');
	printf("%c value is %d\n", '2', '2');
	printf("%c value is %d\n", '$', '$');
	printf("%c value is %d\n", '*', '*');
	printf("%c value is %d\n", '+', '+');
	printf("%c value is %d\n", '/', '/');

	return 0;
}
