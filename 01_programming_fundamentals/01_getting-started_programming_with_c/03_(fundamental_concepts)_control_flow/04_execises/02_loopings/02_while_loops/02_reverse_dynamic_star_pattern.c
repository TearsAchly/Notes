/*
 * Program Title: Reverse Dynamic Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a reverse 
 *              dynamic star pattern using nested while loops.
 *
 * Logic:
 *        1. Initialize an integer variable `outer` to 4, which acts as the 
 *           counter for the outer loop, representing the maximum number of stars.
 *        2. Set an integer variable `N` to 0, representing the stopping condition 
 *           for the outer loop.
 *        3. Use a `while` loop that continues as long as `outer` is greater than `N`.
 *        4. Inside the outer loop, initialize another integer variable `inner` 
 *           to 0 for the inner loop counter.
 *        5. Use another `while` loop that iterates while `inner` is less than `outer`.
 *        6. Print a star (*) for each iteration of the inner loop.
 *        7. After printing stars for the current row, move to the next line.
 *        8. Decrement the `outer` variable to move to the next row, reducing 
 *           the number of stars printed.
 *
 * Preconditions:
 *        - The variable `outer` is initialized to 4, controlling the maximum number of stars in the first row.
 *
 * Postconditions:
 *        - The program outputs an inverted triangle of stars that decreases in size with each row.
 *
 * Edge Cases:
 *        - If `outer` is 0 or negative, no stars will be printed.
 *
 * Program Flow:
 * 1. Initialize the outer loop counter to 4.
 * 2. Enter the outer `while` loop to start generating the reverse star pattern.
 * 3. For each iteration of the outer loop, initialize the inner loop counter.
 * 4. Enter the inner `while` loop to print stars for the current row.
 * 5. Print the appropriate number of stars based on the current value of `outer`.
 * 6. Move to the next line after printing stars for the row.
 * 7. Decrement the outer counter and repeat until no stars are left to print.
 */

#include <stdio.h>

int main() {
    int outer = 4; // Initialize the outer loop counter
    int N = 0; // Stopping condition for the loop

    while (outer > N) { // Loop until outer is greater than N
        int inner = 0; // Initialize the inner loop counter
        while (inner < outer) { // Loop for stars in each row
            printf("* "); // Print star
            inner++; // Increment inner
        }

        printf("\n"); // Move to the next line after each row
        outer--; // Decrement outer
    }

    return 0;
}
