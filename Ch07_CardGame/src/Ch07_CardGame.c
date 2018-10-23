/*
 ============================================================================
 Name        : Ch07_CardGame.c
 Author      : Vagacoder
 Version     :
 Copyright   : 
 Description : ex ch7.12 - 7.16 card game, based on figure 7.24
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5

// prototypes
// shuffle whole card deck
void shuffle(unsigned int wDeck[][FACES]);
// print the whole card deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);
// get a five-card poker hand
void getAHand(unsigned int wHand[][2]);
// deal a five-card poker hand
void dealAHand(unsigned int wHand[][2],const char *wFace[], const char *wSuit[]);

int main(void) {
	setvbuf(stdout,NULL, _IONBF,0);
	// initialize an array of whole deck
	unsigned int deck[SUITS][FACES] = { 0 };
	// seed random-number generator
	srand(time(NULL));
	// shuffle the deck
	shuffle(deck);

	// initialize suit array
	const char *suit[SUITS] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	// initialize face array
	const char *face[FACES] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
			"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	// print the whole deck
	deal(deck, face, suit);

	puts("\nPlaying.......");

	unsigned int hand1[HAND][2] = { 0 };
	getAHand(hand1);
	dealAHand(hand1, face, suit);
	unsigned int hand2[HAND][2] = { 0 };
	getAHand(hand2);
	dealAHand(hand2, face, suit);

	return EXIT_SUCCESS;
}

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES]) {
	// for each of the cards, choose slot of deck randomly
	for (size_t card = 1; card <= CARDS; ++card) {
		size_t row; // row number
		size_t column; // column number

		// choose new random location until unoccupied slot found
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (wDeck[row][column] != 0); // end do...while

		// place card number in chosen slot of deck
		wDeck[row][column] = card;
	}
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]) {
	// deal each of the cards
	for (size_t card = 1; card <= CARDS; ++card) {
		// loop through rows of wDeck
		for (size_t row = 0; row < SUITS; ++row) {
			// loop through columns of wDeck for current row
			for (size_t column = 0; column < FACES; ++column) {
				// if slot contains current card, display card
				if (wDeck[row][column] == card) {
					printf("%5s of %-8s%c", wFace[column], wSuit[row],
							card % 2 == 0 ? '\n' : '\t'); // 2-column format
				}
			}
		}
	}
}

// get a five-card poker hand
void getAHand(unsigned int wHand[][2]) {
	for (int i = 0; i < HAND; ++i) {
		wHand[i][0] = rand() % SUITS;
		wHand[i][1] = rand() % FACES;
	}

}

// deal a five-card poker hand
void dealAHand(unsigned int wHand[][2],const char *wFace[], const char *wSuit[]) {
	for (int i = 0; i < HAND; ++i) {
		printf("%5s of %-8s\n", wFace[wHand[i][0]], wSuit[wHand[i][1]]);
	}
}
