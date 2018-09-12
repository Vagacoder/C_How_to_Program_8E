/*
 ============================================================================
 Name        : Ch03_17.c
 Author      : Vagacoder
 Version     :
 Copyright   : Your copyright notice
 Description : ex 3.17 Credit Limit Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	float balance, charge, credit, credit_limit;
	int account, done = 0;

	printf("%s", "Enter account number (-1 to end): ");
	scanf("%d", &account);

	if (account < 0) {
		done = 1;
	}

	while (!done) {
		printf("%s", "Enter beginning balance: ");
		scanf("%f", &balance);
		printf("%s", "Enter total charges: ");
		scanf("%f", &charge);
		printf("%s", "Enter total credits: ");
		scanf("%f", &credit);
		printf("%s", "Enter credit limit: ");
		scanf("%f", &credit_limit);

		balance += charge - credit;
		if (balance > credit_limit) {
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2f\n", credit_limit);
			printf("Balance:\t%.2f\n", balance);
			printf("%s", "Credit Limit Exceeded!!\n");
		}

		puts("");

		printf("%s", "Enter account number (-1 to end): ");
		scanf("%d", &account);

		if (account < 0) {
			done = 1;
		}
	}

	puts("Done!");
	return EXIT_SUCCESS;
}
