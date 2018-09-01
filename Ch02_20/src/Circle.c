/*
 * Ch2.20
 * Circle.c, reads in the radius of a circle and prints
 * the circle¡¯s diameter, circumference and area.
 */

#include <stdio.h>

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);

	// set constant pi
	float pi = 3.14159;

	// read the radius of circle
	float radius;
	puts("Please enter the radius of circle: ");
	scanf("%f", &radius);

	float diameter = radius * 2;
	float circumference = 2 * pi * radius;
	float area = pi * radius * radius;

	printf("The diameter is %.2f\n", diameter);
	printf("The circumference is %.2f\n", circumference);
	printf("The area is %.2f\n", area);
	printf( "*\n**\n***\n****\n*****\n" );

	return 0;
}

