/*
 * Program Title: Reverse Dynamic Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a reverse dynamic star pattern using nested loops.
 *
 * Logic:
 *        1. Declare two integer variables, `outer` and `inner`, 
 *           to control the number of rows and the number of stars printed in each row.
 *        2. Define an integer variable `N` and set it to 4, representing 
 *           the total number of rows for the star pattern.
 *        3. Use a `for` loop to control the outer loop, iterating from `N` down to 0.
 *        4. Inside the outer loop, use another `for` loop to control the inner loop, 
 *           which prints the stars in each row. This loop runs from 0 to the current value of `outer`.
 *        5. Print a star followed by a space for each iteration of the inner loop.
 *        6. After completing each row, print a newline character to move to the next line.
 *        7. The outer loop continues until all rows are printed.
 *
 * Preconditions:
 *        - The value of `N` should be a non-negative integer representing the number of rows.
 *
 * Postconditions:
 *        - The program will print a reverse star pattern to the console.
 *
 * Edge Cases:
 *        - If `N` is set to 0, the output will simply be one star on a single line.
 *
 * Program Flow:
 * 1. The program initializes the variable `N` for the number of rows.
 * 2. The outer loop starts from `N` and decrements until it reaches 0.
 * 3. For each row, the inner loop prints stars equal to the current row number.
 * 4. After printing the stars, the program moves to the next line.
 * 5. The program terminates after all rows have been printed.
 */

#include <stdio.h>

int main() {
    int outer;
    int inner;
    int N = 4; // Number of rows

    for (outer = N; outer >= 0; outer--) {
        for (inner = 0; inner <= outer; inner++) {
            printf("* "); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
