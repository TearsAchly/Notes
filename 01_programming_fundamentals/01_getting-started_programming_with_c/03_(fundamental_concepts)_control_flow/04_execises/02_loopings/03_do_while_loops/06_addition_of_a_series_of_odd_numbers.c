/*
 * Program Title: Addition of a Series of Odd Numbers
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of odd numbers 
 *              from 0 to a specified upper limit N using a while loop. 
 *              There are issues with variable manipulation that may lead 
 *              to incorrect results.
 *
 * Logic:
 *        1. Initialize an integer variable `i` to 0 to act as a counter.
 *        2. Set an integer variable `N` to 4, representing the upper limit for the odd number series.
 *        3. Initialize an integer variable `sum` to 0 to store the cumulative sum.
 *        4. Use a `while` loop that continues as long as `i` is less than `N`:
 *           - The loop erroneously increments `N` within each iteration, leading to unexpected behavior.
 *           - Check if `i` is an even number and, if so, increment it by 1 to get to the next odd number.
 *           - Add the odd number to `sum` and print it.
 *           - Increment `i` twice in each iteration, which skips odd numbers.
 *        5. After the loop, print the total sum of odd numbers.
 *
 * Issues:
 *        - The manipulation of `N` inside the loop causes infinite or incorrect behavior.
 *        - Incrementing `i` multiple times inside the loop makes the program skip odd numbers.
 *
 * Preconditions:
 *        - `N` should be a non-negative integer.
 *
 * Postconditions:
 *        - The program prints the series of odd numbers and the sum (which may be incorrect due to the issues).
 *
 * Edge Cases:
 *        - The program may fail to properly sum odd numbers due to multiple increments of `i` and changes to `N`.
 *
 * Program Flow:
 * 1. Initialize the counter `i` and the sum variable.
 * 2. Enter the `while` loop to calculate the sum of odd numbers.
 * 3. Check if the current value of `i` is even and, if so, adjust `i` to make it odd.
 * 4. Print the odd number and its sum, but due to improper increments, odd numbers may be skipped.
 * 5. Print the total sum.
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter to 0
    int N = 4; // Upper limit for the odd number series
    int sum = 0; // Initialize sum to 0

    while (i < N) { // Loop until i is less than N
        N += 1; // Incorrect manipulation of N
        if (i % 2 == 0) { // Check if i is even
            i += 1; // Increment i by 1 to get to the next odd number
            sum += i; // Add the current value of i to sum
            printf(" %d ", i); // Print the current odd number
            i++; // Increment i again to skip the current odd number
        }

        if (i < N) {
            printf(" + "); // Print plus sign if not the last number
        }
    }
    printf(" = %d", sum); // Print the total sum
    return 0;
}
