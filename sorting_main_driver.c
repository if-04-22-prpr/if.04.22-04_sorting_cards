/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding
 *-----------------------------------------------------------------------------
 * Author:			*/<your name>;/*
 *-----------------------------------------------------------------------------
 * Description:
 * Implement a sorting algorithm.
 *-----------------------------------------------------------------------------
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Provides the name of the implemented algorithm.
 * 
 * @return The name of the algorithm.
 */
const char* get_algo_name() {

}

/**
 * Sorts the playing cards of a card game in the players hand by 
 * their shape and value. Cards are represented as 0-terminated string 
 * consisting of one character for the shape (C: club, D: diamond, H: heart, S: spade) 
 * followed by one HEX-character for their value: 2 .. A (10), B (Jack), C (Queen), D (King), E (Ace).
 * E.g. Card 'Heart 7' is represented as "H7", 'Spade Ace' is represented as 'SE'.
 * The cards shall be sorted in the order noted above.
 * 
 * Note: Bubble Sort must NOT be used!
 * 
 * @param string The 0-terminated string to sort.
 */
void sort(char* hand[], size_t len) {

}

/** 
 * Test the sort order of the given string. 
 * Note: The given function shall not be modified.
 */
bool test_order(char* orig[], char* arr[], size_t len) {
    bool rc = arr != 0;
    for (size_t i = 1; rc && i < len; i++) {
        rc = rc && strcmp(arr[i-1], arr[i]) <= 0;
    }
    for (size_t i = 0; rc && i < len; i++) {
        size_t j = 0;
        while (j < len && strcmp(orig[i], arr[j]) != 0) {
            j++;
        }
        rc = rc && j < len;
    }
    return rc;
}

/** 
 * Runs the program 
 * 
 * Note: Implement the missing pieces as described in the comments
 */
int main(int argc, char *argv[]) {
    char* cards[] = {
        "D5", "S9", "D1", "HD", "C8", "C2", "S4", "DC", "H3", "CB", "H2", "S9", "D6", "S8", "HB"
    };

    /* copy the 'cards' array into another array named 'hand'
       and sort that array afterwards */

    printf("\n");
    printf("Algorithm: '%s'\n", get_algo_name());

    printf("Original: ");
    /* print the initial 'cards' array into a single line, cards are comma-separated */
    printf("\n");

    /* sort the 'hand' array */

    printf("Sorted:   ");
    /* print the sorted array into a single line, cards in both lines shall be aligned */

    /* test the sorting using the following line:
    bool check = test_order(cards, hand, len);
    */
    /* and print the result */
    
    printf("\n");
}