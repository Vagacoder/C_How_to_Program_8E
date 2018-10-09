// Fig. 8.6: fig08_06.c
// Using function strtod
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char *string = "51.2% are admitted"; // initialize string
	char *stringPtr; // create char pointer

	double d = strtod(string, &stringPtr);

	printf("The string \"%s\" is converted to the\n", string);
	printf("double value %.2f and the string \"%s\"\n", d, stringPtr);
	printf("the stringPtr value or newString address is %p\n", stringPtr);
	printf("1st char of new string is %c\n", *stringPtr);
	printf("2nd char of new string is %c\n", *(stringPtr + 1));
	printf("3rd char of new string is %c\n", *(stringPtr + 2));
	printf("4th char of new string is %c\n", *(stringPtr + 3));
	printf("5th char of new string is %c\n", *(stringPtr + 4));

	puts("");
	char *str1 = "0x64 is a new value ";
	long d1 = strtol(str1, NULL, 0);
	printf("Hex \"%s\" is converted to %d\n", str1, d1);

	char *str2 = "014 is a new value ";
	long d2 = strtol(str2, NULL, 0);
	printf("Octal \"%s\" is converted to %d\n", str2, d2);

	char *str3 = "-164 is a new value ";
	long d3 = strtol(str3, NULL, 0);
	printf("Decimal \"%s\" is converted to %d\n", str3, d3);
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
