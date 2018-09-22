// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void) {
	// initialize frequency counters to 0
	int frequency[FREQUENCY_SIZE] = { 0 };

	// place the survey responses in the responses array
	int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8,
			6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4,
			8, 6, 8, 10 };

	// for each answer, select value of an element of array responses
	// and use that value as an index in array frequency to
	// determine element to increment
	for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
		++frequency[responses[answer]];
	}

	// display results
	printf("%s%17s\n", "Rating", "Frequency");

	// output the frequencies in a tabular format
	for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
		printf("%6lu%17d\n", rating, frequency[rating]);
	}
	puts("\ntry out of array boundary:");
	printf("-10 is %d\n", frequency[-10]);
	printf("12 is %d\n", frequency[12]);
	printf("13 is %d\n", frequency[13]);
	puts("Modifying....");
	frequency[13] = 100;
	printf("13 after modification: %d\n\n", frequency[13]);
	printf("14 is %d\n", frequency[14]);

	puts("\nThis is reading memory!");
	for (int i = 11; i <= 100; ++i) {
		printf("%d is %d\n", i, frequency[i]);
	}

	puts("\nTesting string boundary:\nHello");
	char str1[] = "Hello";
	printf("Hello[0] is %c\n", str1[0]);
	printf("Hello[5] is %c\n", str1[5]);
	printf("Hello[6] is %c\n", str1[6]);
	printf("Hello[-1] is %c\n", str1[-1]);
	puts("\nRemoving null char from str1.....");
	str1[5] = 'a';
	str1[7] = 'a';
	str1[8] = 'a';
	printf("%s\n", str1);

	char str2[] = "This is" " a test";
	printf("%s\n", str2);
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

