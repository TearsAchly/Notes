/*
 * Program Title: Sum of Harmonic Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of a harmonic series 
 *              up to a specified number N, using a while loop. 
 *              The series is displayed alongside the sum.
 *
 * Logic:
 *        1. Initialize an integer variable `i` to 2 to represent the starting point of the harmonic series after the first term.
 *        2. Set an integer variable `N` to 4, representing the upper limit for the harmonic series.
 *        3. Initialize a double variable `sum` to 1.0, as the first term of the harmonic series is always 1.
 *        4. Print the first term "1" before the loop begins.
 *        5. Use a `while` loop that continues as long as `i` is less than or equal to `N`:
 *           - Add the current term `1/i` to `sum`.
 *           - Print the current term in the format `1/i` to display the series.
 *           - Increment `i` after each iteration.
 *        6. After exiting the loop, print the total sum of the harmonic series.
 *
 * Preconditions:
 *        - `N` should be a positive integer greater than or equal to 1.
 *
 * Postconditions:
 *        - The program will output the harmonic series and its sum.
 *
 * Edge Cases:
 *        - If `N` is less than 1, the series will not have any terms to sum beyond the first (which is always 1).
 *        - When `N` is 1, the sum is just the first term "1".
 *
 * Program Flow:
 * 1. Initialize the counter `i` and the sum variable.
 * 2. Print the first term of the series (1).
 * 3. Enter the `while` loop to calculate and print the terms of the harmonic series.
 * 4. For each term, add `1/i` to the sum and print the term.
 * 5. After all terms are printed, display the total sum of the series.
 */

#include <stdio.h>

int main() {
    int i = 2; // Initialize counter to start from 2
    int N = 4; // Upper limit for the harmonic series
    double sum = 1.0; // Initialize sum to 1.0

    printf("1"); // Print the first term

    while (i <= N) { // Loop until i is less than or equal to N
        sum += 1.0 / i; // Add the term to sum
        if (i <= N) {
            printf(" + 1/%d", i); // Print current term
        }
        i++; // Increment i
    }
    printf(" = %f", sum); // Print the total sum
    return 0;
}
