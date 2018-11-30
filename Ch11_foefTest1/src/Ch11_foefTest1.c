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
#include <string.h>

int main(void) {
	char buffer[100];
	FILE *inFile;

	if ((inFile = fopen("test.txt", "r")) == NULL) {
		puts("File could not be opened");
	} else {

		// Here is testing fscanf()
		puts("Testing fscanf()...");
		// traditional while loop for reading file
		// will lose the last line
		fscanf(inFile, "%s", buffer);
		while (!feof(inFile)) {
			printf("%s\n", buffer);
			fscanf(inFile, "%s", buffer);
		}
		printf("after failed reading, buffer is %s\n", buffer);

		rewind(inFile);
		puts("");

		// a better while loop with additional checking
		while (!feof(inFile)) {
			int read = fscanf(inFile, "%s", buffer);

			if (read > 0) {
				printf("%s\n", buffer);
			}
		}
		printf("after failed reading, buffer is %s\n", buffer);

		rewind(inFile);
		puts("");

		int count = 0;

		while (1) {
			int readNumber = fscanf(inFile, "%s", buffer);
			printf("read number %d\n", readNumber);
			if (readNumber <= 0) {
				break;
			}
			++count;
			printf("%s\n", buffer);
		}
		printf("total line is %d\n", count);

		rewind(inFile);
		puts("");

		// Here is testing fgetc()
		puts("Testing fgetc()...");
		count = 0;
		while (1) {
			int c = fgetc(inFile);
			if (feof(inFile)) {
				break;
			}
			++count;
			printf("%c", c);
		}
		puts("");
		printf("total char is %d\n", count);

		rewind(inFile);
		puts("");

		// Here is testing fgets()
		puts("Testing fgets()...");
		count = 0;
		while (1) {
			char* line;
			line = fgets(buffer, 100, inFile);
			if (feof(inFile)) {
				break;
			}
			++count;
			printf("%s", line);
		}
		printf("total line is %d\n", count);

		rewind(inFile);
		puts("");

		count = 0;
		while (!feof(inFile)) {
			char* line;
			line = fgets(buffer, 100, inFile);
			++count;
			printf("%s", line);
		}
		puts("");
		printf("total line is %d\n", count);

		rewind(inFile);
		puts("");

		count = 0;
		while (!feof(inFile)) {
			char* line;
			line = fgets(buffer, 100, inFile);
			if (line == NULL) {
				break;
			}
			++count;
			printf("%s", line);
		}
		puts("");
		printf("total line is %d\n", count);

		rewind(inFile);
		puts("");

		count = 0;
		while (!feof(inFile)) {
			fgets(buffer, 100, inFile);
			if (feof(inFile) && buffer[strlen(buffer) - 1] == '\n') {
				break;
			}
			++count;
			printf("%s", buffer);
		}
		puts("");
		printf("total line is %d\n", count);
	}

	fclose(inFile);
}
