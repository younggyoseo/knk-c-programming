/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three;
int pairs;  /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int hand[5][2]);
int find_min(int arr[], int n);
int find_max(int arr[], int n);
bool check_straight(int hand[5][2]);
bool check_duplicate(int card_idx, int hand[5][2], int rank, int suit);
void analyze_hand(int hand[5][2]);
void print_result(void);


/*
 * main: Calls read_cards, analyze_hand, and print_result
 *       repeatedly.
 */
int main(void)
{
    int hand[5][2];
    
    for (;;) {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}

/*
 * read_cards: Reads the cards into the external
 *             variables num_in_rank, num_in_suit;
 *             checks for bad cards and duplicate cards.
 */
void read_cards(int hand[5][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit, i, j;
    bool bad_card;
    int cards_read = 0;
    int card_idx = 0;
    
    for (i = 0; i < 5; i++)
        for (j = 0; j < 2; j++)
            hand[i][j] = -1;
     
    while (cards_read < NUM_CARDS) {
        bad_card = false;
        
        printf("Enter a card: ");
        
        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }
        
        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }
        
        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;
        
        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (check_duplicate(card_idx, hand, rank, suit) == true)
            printf("Duplicate card; ignored.\n");
        else {
            hand[card_idx][0] = rank;
            hand[card_idx][1] = suit;
            cards_read++;
            card_idx++;
        }
    }
}

int find_min(int arr[], int n)
{
    int min = arr[0], i;
    
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int find_max(int arr[], int n)
{
    int max = arr[0], i;
    
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

bool check_straight(int hand[5][2])
{
    int rank_arr[5] = {0}, min, max, i;
    
    for (i = 0; i < 5; i++)
        rank_arr[i] = hand[i][0];
    
    min = find_min(rank_arr, 5);
    max = find_max(rank_arr, 5);
    
    if (max - min + 1 == 5)
    {
        bool consecutive_arr[5] = {false};
        for (i = 0; i < 5; i++)
        {
            if (consecutive_arr[i - min] != false)
                return false;
            else
                consecutive_arr[i - min] = true;
        }
        return true;
    }
    return false;
}

bool check_duplicate(int card_idx, int hand[5][2], int rank, int suit)
{
    int i;
    bool is_duplicate = false;
    for (i = 0; i < card_idx; i++) {
        if (rank == hand[i][0])
            if (suit == hand[i][1]) {
                is_duplicate = true;
                break;
            }
    }
    return is_duplicate;
}

/*
 * analyze_hand: Determines whether the hand contains a
 *               straight, a flush, four-of-a-kind,
 *               and/or three-of-a-kind; determines the
 *               number of pairs; stores the results into
 *               the external variables straight, flush,
 *               four, three, and pairs.
 */
 void analyze_hand(int hand[5][2])
 {
    int i, rank, cnt;
    straight = false;
    flush = true;
    four = false;
    three = false;
    pairs = 0;
    
    /* check for flush */
    for (i = 1; i < 5; i++)
        if (hand[i-1][1] != hand[i][1])
            flush = false;
    
    /* check for straight */
    if (check_straight(hand) == true)
    {
        straight = true;
        return;
    }
    
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for (rank = 0; rank < NUM_RANKS; rank++) {
        cnt = 0;
        for (i = 0; i < 5; i++)
            if (hand[i][0] == rank)
                cnt++;
        if (cnt == 4) four = true;
        if (cnt == 3) three = true;
        if (cnt == 2) pairs++;
    }
 }
 
 /*
  * print_result: Prints the classification of the hand,
  *               based on the values of the external
  *               variables straight, flush, four, three,
  *               and pairs.
  */
void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");
    
    printf("\n\n");
}
