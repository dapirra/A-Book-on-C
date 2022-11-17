/* Output:

card:  1 of hearts
card:  2 of hearts
card:  3 of hearts
card:  4 of hearts
card:  5 of hearts
card:  6 of hearts
card:  7 of hearts
card:  8 of hearts
card:  9 of hearts
card: 10 of hearts
card: 11 of hearts
card: 12 of hearts
card: 13 of hearts

Hand number: 504
Flush number: 1
Flush probability: 0.001984


Hand number: 651
Flush number: 2
Flush probability: 0.003072


Hand number: 1224
Flush number: 3
Flush probability: 0.002451


Hand number: 1301
Flush number: 4
Flush probability: 0.003075


Hand number: 1678
Flush number: 5
Flush probability: 0.002980


Hand number: 1696
Flush number: 6
Flush probability: 0.003538


Hand number: 2886
Flush number: 7
Flush probability: 0.002426


Hand number: 3162
Flush number: 8
Flush probability: 0.002530


Hand number: 3537
Flush number: 9
Flush probability: 0.002545


Hand number: 3607
Flush number: 10
Flush probability: 0.002772


Hand number: 4641
Flush number: 11
Flush probability: 0.002370


Hand number: 5219
Flush number: 12
Flush probability: 0.002299


Hand number: 5477
Flush number: 13
Flush probability: 0.002374


Hand number: 5946
Flush number: 14
Flush probability: 0.002355


Hand number: 6436
Flush number: 15
Flush probability: 0.002331


Hand number: 7361
Flush number: 16
Flush probability: 0.002174


Hand number: 7370
Flush number: 17
Flush probability: 0.002307


Hand number: 7707
Flush number: 18
Flush probability: 0.002336


Hand number: 8726
Flush number: 19
Flush probability: 0.002177


Hand number: 8894
Flush number: 20
Flush probability: 0.002249


Hand number: 9604
Flush number: 21
Flush probability: 0.002187


Hand number: 9698
Flush number: 22
Flush probability: 0.002269


Hand number: 10836
Flush number: 23
Flush probability: 0.002123


Hand number: 11205
Flush number: 24
Flush probability: 0.002142


Hand number: 11241
Flush number: 25
Flush probability: 0.002224


Hand number: 11941
Flush number: 26
Flush probability: 0.002177


Hand number: 12529
Flush number: 27
Flush probability: 0.002155


Hand number: 12616
Flush number: 28
Flush probability: 0.002219


Hand number: 12726
Flush number: 29
Flush probability: 0.002279


Hand number: 12777
Flush number: 30
Flush probability: 0.002348


Hand number: 12820
Flush number: 31
Flush probability: 0.002418


Hand number: 13265
Flush number: 32
Flush probability: 0.002412


Hand number: 14653
Flush number: 33
Flush probability: 0.002252


Hand number: 15289
Flush number: 34
Flush probability: 0.002224


Hand number: 15718
Flush number: 35
Flush probability: 0.002227


Hand number: 16483
Flush number: 36
Flush probability: 0.002184


Hand number: 16620
Flush number: 37
Flush probability: 0.002226


Hand number: 16753
Flush number: 38
Flush probability: 0.002268


Hand number: 16968
Flush number: 39
Flush probability: 0.002298


Hand number: 17097
Flush number: 40
Flush probability: 0.002340


Hand number: 17495
Flush number: 41
Flush probability: 0.002344

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NDEALS 3000 /* number of deals */
#define NPLAYERS 6  /* number of players */

typedef enum {clubs, diamonds, hearts, spades} suits;

struct card {
    int rank;
    suits suit;
};

typedef struct card card;

card assign_values(int rank, suits suit);
void prn_card_values(card *c_ptr);
void play_poker(card deck[52]);
void shuffle(card deck[52]);
void swap(card *p, card *q);
void deal_the_cards(card deck[52], card hand[NPLAYERS][5]);
int is_flush(card hand[5]);

int main(void) {
    suits suit;
    int i, rank;
    card deck[52];

    for (i = 0; i < 52; ++i) {
        rank = i % 13 + 1;
        if (i < 13) {
            suit = clubs;
        } else if (i < 26) {
            suit = diamonds;
        } else if (i < 39) {
            suit = hearts;
        } else {
            suit = spades;
        }

        deck[i] = assign_values(rank, suit);
    }

    for (i = 26; i < 39; ++i) {
        prn_card_values(&deck[i]);
    }
    putchar('\n');

    play_poker(deck);

    return 0;
}

card assign_values(int rank, suits suit) {
    card c;

    c.rank = rank;
    c.suit = suit;
    return c;
}

void prn_card_values(card *c_ptr) {
    int rank = c_ptr -> rank;
    suits suit = c_ptr -> suit;
    char *suit_name;

    switch (suit) {
        case clubs:
            suit_name = "clubs"; break;
        case diamonds:
            suit_name = "diamonds"; break;
        case hearts:
            suit_name = "hearts"; break;
        case spades:
            suit_name = "spades"; break;
    }

    printf("card: %2d of %s\n", rank, suit_name);
}

void play_poker(card deck[52]) {
    int flush_cnt = 0, hand_cnt = 0;
    int i, j;
    card hand[NPLAYERS][5]; /* Each player dealt 5 cards */

    srand(time(NULL));

    for (i = 0; i < NDEALS; ++i) {
        shuffle(deck);
        deal_the_cards(deck, hand);

        for (j = 0; j < NPLAYERS; ++j) {
            ++hand_cnt;
            if (is_flush(hand[j])) {
                ++flush_cnt;
                printf(
                    "%s%d\n%s%d\n%s%f\n\n\n",
                    "Hand number: ", hand_cnt,
                    "Flush number: ", flush_cnt,
                    "Flush probability: ",
                    (double) flush_cnt / hand_cnt
                );
            }
        }
    }
}

void shuffle(card deck[52]) {
    int i, j;

    for (i = 0; i < 52; ++i) {
        j = rand() % 52;
        swap(&deck[i], &deck[j]);
    }
}

void swap(card *p, card *q) {
    card tmp;

    tmp = *p;
    *p = *q;
    *q = tmp;
}

void deal_the_cards(card deck[52], card hand[NPLAYERS][5]) {
    int card_cnt = 0, i, j;

    for (j = 0; j < 5; ++j) {
        for (i = 0; i < NPLAYERS; ++i) {
            hand[i][j] = deck[card_cnt++];
        }
    }
}

int is_flush(card hand[5]) {
    int i;

    for (i = 0; i < 5; ++i) {
        if (hand[i].suit != hand[0].suit) {
            return 0;
        };
    }

    return 1;
}


