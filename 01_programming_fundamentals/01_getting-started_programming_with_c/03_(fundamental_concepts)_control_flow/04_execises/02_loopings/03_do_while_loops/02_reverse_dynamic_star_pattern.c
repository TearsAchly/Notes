/*
 * Program Title: Reverse Dynamic Star Pattern (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a reverse dynamic star pattern using a do-while loop.
 *
 * Logic:
 *        1. Declare two integer variables: `outer` for the outer loop and `inner` for the inner loop.
 *        2. Initialize an integer variable `outer` to define the maximum number of stars in the first row.
 *        3. Use a do-while loop for the outer loop, which runs while `outer` is greater than `N` (in this case, `N` is 0).
 *        4. Inside the outer loop, use another do-while loop for the inner loop, which runs from 0 to `outer - 1`.
 *        5. In each iteration of the inner loop, print a star (`*`).
 *        6. After each row, move to the next line to continue printing the pattern.
 *        7. Decrement the `outer` value after each iteration to reduce the number of stars in the next row.
 *
 * Preconditions:
 *        - The initial value of `outer` determines the maximum number of stars printed in the first row.
 *
 * Postconditions:
 *        - The program will output a reverse star pattern, with the number of stars decreasing by one for each subsequent row.
 *
 * Edge Cases:
 *        - If `outer` is set to 0 or less initially, no output will be generated.
 *
 * Program Flow:
 * 1. The program initializes the outer loop variable `outer` with the maximum number of rows (4 in this case).
 * 2. The outer loop runs as long as `outer` is greater than `N` (0 in this case), decrementing the value of `outer` after each iteration.
 * 3. For each iteration of the outer loop, the inner loop runs from 0 to `outer - 1`, printing a star for each iteration.
 * 4. After completing the inner loop, the program prints a newline character to move to the next row.
 * 5. The program terminates after printing the reverse star pattern.
 */

#include <stdio.h>

int main() {
    int outer = 4; // Initialize the outer loop counter
    int N = 0; // Not used in this program

    do {
        int inner = 0; // Initialize the inner loop counter
        do {
            printf("* "); // Print star
            inner++; // Increment inner
        } while (inner < outer); // Loop for stars in each row

        printf("\n"); // Move to the next line after each row
        outer--; // Decrement outer
    } while (outer > N); // Loop until outer is greater than N

    return 0;
}
