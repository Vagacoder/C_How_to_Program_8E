// Fig. 6.4: fig06_04.c
// Initializing the elements of an array with an initializer list.
#include <stdio.h>

void printArrayLength(int[]);

// function main begins program execution
int main(void) {
	// use initializer list to initialize array n
	int n[5] = { 32, 27, 64, 18, 95 };
	int m[] = { 183, 563, 702, 205, 427, 696, 324 };

	printf("%s%13s\n", "Element", "Value");

	// output contents of array in tabular format
	for (size_t i = 0; i < 5; ++i) {
		printf("%7lu%13d\n", i, n[i]);
	}

	// how to find the size of array
	printf("The length of array n is %lu.\n", sizeof(n) / sizeof(int));
	printf("The length of array n is %lu.\n", sizeof(n) / sizeof(n[0]));
	printArrayLength(n);
	puts("");
	printf("The length of array m is %lu.\n", sizeof(m) / sizeof(int));
	printf("The length of array m is %lu.\n", sizeof(m) / sizeof(m[0]));
	printArrayLength(m);
	puts("");

}

void printArrayLength(int inputArray[]) {
	printf("In function, sizeof array is %lu (actually the size of pointer).\n",
			sizeof(inputArray));
	printf(
			"In function, sizeof array is %lu. (size of pointer / size of int)\n",
			sizeof(inputArray) / sizeof(int));
	printf(
			"In function, sizeof array is %lu. (size of pointer / size of 1st element)\n",
			sizeof(inputArray) / sizeof(inputArray[0]));
}

/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
