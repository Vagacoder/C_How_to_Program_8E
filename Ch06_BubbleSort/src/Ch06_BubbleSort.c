/*
 ============================================================================
 Name        : Ch06_BubbleSort.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : Bubble sorting
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void bubbleSort(int a[], size_t size);
void bubbleSort1(int a[], size_t size);

int main(void) {
	int a[] = { 8, 4, 10, 5, 32, 19, 6, 91 };

	bubbleSort1(a, SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%-3d", a[i]);
	}

	puts("");

	return EXIT_SUCCESS;
}

void bubbleSort(int a[], size_t size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++)
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}
}
void bubbleSort1(int a[], size_t size) {
	int done = 0;
	while (!done) {
		done = 1;
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				done = 0;
			}
		}
	}
}
