/*
 * Program Title: Dynamic O Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a dynamic star 
 *              pattern with 'o' at the borders using 
 *              nested while loops.
 *
 * Logic:
 *        1. Initialize an integer `outer` to 0, representing the outer loop counter.
 *        2. Set an integer `N` to 4, which represents the number of rows for the pattern.
 *        3. Use a `while` loop to iterate until `outer` exceeds `N` (for row generation).
 *        4. In each row, check if it is the first or last row:
 *           - If it is, print 'o' for the entire row.
 *           - Otherwise, print 'o' at both borders and fill the middle with '*'.
 *        5. Increment `outer` after completing each row to move to the next.
 *        6. Print a newline after each row to generate the pattern in rows.
 *
 * Preconditions:
 *        - The variable `N` represents the number of rows and must be a positive integer.
 *
 * Postconditions:
 *        - The program outputs a star pattern where 'o' appears at the borders 
 *          and '*' fills the middle rows.
 *
 * Edge Cases:
 *        - If `N` is 1, only a single row of 'o' will be printed.
 *        - If `N` is 0 or negative, the program will not generate any output.
 *
 * Program Flow:
 * 1. Initialize the outer loop counter and set the number of rows.
 * 2. Enter the outer `while` loop to start generating each row.
 * 3. For the first and last row, print only 'o'. For middle rows, print 'o' on the borders 
 *    and '*' in between.
 * 4. Print a newline after each row is completed.
 * 5. Continue until all rows are printed, then terminate the program.
 */

#include <stdio.h>

int main() {
    int outer = 0; // Initialize the outer loop counter
    int N = 4; // Number of rows

    while (outer <= N) { // Loop until outer is less than or equal to N
        if (outer == 1 || outer == N) { // Check for the first and last row
            int o = 0; // Initialize counter for 'o'
            while (o < N) {
                printf("o"); // Print 'o'
                o++; // Increment inner counter
            }
        } else if (outer > 1 && outer < N) { // Middle rows
            printf("o"); // Print 'o' for the left border
            int b = 0; // Initialize counter for '*'
            while (b < N - 2) {
                printf("*"); // Print star for the middle part
                b++; // Increment inner counter
            }
            printf("o"); // Print 'o' for the right border
        }
        printf("\n"); // Move to the next line after each row
        outer++; // Increment outer
    }

    return 0;
}
