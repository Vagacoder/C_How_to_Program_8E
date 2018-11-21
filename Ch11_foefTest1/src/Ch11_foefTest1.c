/*
 ============================================================================
 Name        : Ch11_foefTest1.c
 Author      : Vagacoder
 Version     :
 Copyright   : C how to program 8E
 Description : test feof()
 ============================================================================
 */

/*
 PLEASE NOTE THAT: test.txt (1), last line has some information, while test.txt (2)
 last line has no information

 ----------------
 test.txt (1)
 1 Line1\n
 2 Line2\n
 3 Line3
 ----------------
 test.txt (2)
 1 Line1\n
 2 Line2\n
 3

 ----------------
 when fscanf() read the line3 in both files, feof() will return TRUE (1).
 BUT if you ignore last read of fscanf(), you will lose the last line in
 test.txt (1)

 */



#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char buffer[100];
	FILE *inFile;

	if ((inFile = fopen("test.txt", "r")) == NULL) {
		puts("File could not be opened");
	} else {

		// traditional while loop for reading file
		// will lose the last line
		fscanf(inFile, "%s", buffer);
		while(!feof(inFile)){
			printf("%s\n", buffer);
			fscanf(inFile, "%s", buffer);
		}

		rewind(inFile);
		puts("");

		// a better while loop with additional checking
		while(!feof(inFile)){
			fscanf(inFile, "%s", buffer);
			if(strlen(buffer) > 0){
				printf("%s\n", buffer);
			}
		}
	}


	fclose(inFile);
}
