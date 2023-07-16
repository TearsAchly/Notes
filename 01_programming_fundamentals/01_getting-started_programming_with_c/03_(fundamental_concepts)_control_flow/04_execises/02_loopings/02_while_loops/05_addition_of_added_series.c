/*
 * Program Title: Addition of Added Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of integers 
 *              from 0 to a specified upper limit N using a while loop. 
 *              The output displays the series and the total sum.
 *
 * Logic:
 *        1. Initialize an integer variable `i` to 0, which acts as the counter 
 *           for the loop.
 *        2. Set an integer variable `N` to 5, representing the upper limit of the series.
 *        3. Initialize an integer variable `sum` to 0, which stores the running total 
 *           of the sum.
 *        4. Use a `while` loop that continues as long as `i` is less than `N`.
 *        5. Inside the loop:
 *           - Print the current value of `i`.
 *           - Add `i` to the running total `sum`.
 *           - Increment `i`.
 *           - Print a plus sign "+" if `i` is still less than `N`.
 *        6. Once the loop terminates, print the total sum of the series.
 *
 * Preconditions:
 *        - The variable `N` is a positive integer representing the upper limit of the series.
 *
 * Postconditions:
 *        - The program prints the integer series from 0 to `N-1` and the total sum.
 *
 * Edge Cases:
 *        - If `N` is 0 or less, the program will not print any series and the sum will be 0.
 *
 * Program Flow:
 * 1. Initialize the counter (`i`) and the upper limit (`N`).
 * 2. Enter the `while` loop to calculate the sum of the series.
 * 3. In each iteration, print the current value of `i`, add it to `sum`, and increment `i`.
 * 4. Print the total sum after the loop completes.
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter to 0
    int N = 5; // Upper limit for the integer series
    int sum = 0; // Initialize sum to 0

    while (i < N) { // Loop until i is less than N
        printf(" %d ", i); // Print the current number
        sum += i; // Add current number to sum
        i++; // Increment i

        if (i < N) {
            printf(" + "); // Print plus sign if not the last number
        }
    }
    printf(" = %d", sum); // Print the total sum
    return 0;
}
