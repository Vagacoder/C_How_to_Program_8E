/*
 * tester01.c
 *
 *  Created on: 2018Äê9ÔÂ1ÈÕ
 *      Author: Skuller
 */

#include <stdio.h>

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int a, b, c;
	puts("Please enter three integers: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Input integers are\na: %d\nb: %d\nc: %d\n", a, b, c);


}

