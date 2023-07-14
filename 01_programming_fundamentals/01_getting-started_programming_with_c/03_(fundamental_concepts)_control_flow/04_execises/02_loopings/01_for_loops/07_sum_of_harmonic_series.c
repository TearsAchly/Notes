/*
 * Program Title: Sum of Harmonic Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates and displays the 
 *              sum of a harmonic series up to a specified 
 *              number N.
 *
 * Logic:
 *        1. Declare an integer variable `N` to define the upper 
 *           limit for the harmonic series and set it to 4.
 *        2. Initialize a double variable `sum` to 1.0 to account 
 *           for the first term of the series.
 *        3. Print the first term of the harmonic series (1).
 *        4. Use a `for` loop to iterate from 2 to `N`.
 *        5. Inside the loop, print the current term of the series 
 *           in the format " + 1/outer".
 *        6. Add the current term (1/outer) to the `sum`.
 *        7. After the loop, print the total sum of the series.
 *
 * Preconditions:
 *        - The variable `N` must be a positive integer indicating 
 *          the number of terms in the harmonic series.
 *
 * Postconditions:
 *        - The program outputs the harmonic series up to `N` and 
 *          the total sum.
 *
 * Edge Cases:
 *        - If `N` is set to 1, the output will simply be "1 = 1.000000".
 *
 * Program Flow:
 * 1. Initialize `N` with the upper limit for the series.
 * 2. Initialize `sum` to 1.0 to include the first term.
 * 3. Print the first term of the series (1).
 * 4. Enter the `for` loop to iterate through terms from 2 to `N`.
 * 5. Print each term and accumulate the sum.
 * 6. Print the total sum after the loop completes.
 */

#include <stdio.h>

int main() {
    int N = 4; // Upper limit for the harmonic series
    double sum = 1.0; // Initialize sum to 1.0

    printf("1"); // Print the first term
    for (int outer = 2; outer <= N; outer++) {
        if (outer <= N) {
            printf(" + 1/%d", outer); // Print the current term
        }
        sum += 1.0 / outer; // Add the term to sum
    }
    printf(" = %f", sum); // Print the total sum
    return 0;
}
