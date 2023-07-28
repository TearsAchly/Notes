/*
 * Program Title: Addition of Added Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of integers from 0 to a specified upper limit N and prints the series.
 *
 * Logic:
 *        1. Declare and initialize an integer variable `N` to define 
 *           the upper limit for the integer series.
 *        2. Initialize an integer variable `sum` to store the total sum, 
 *           starting from 0.
 *        3. Use a `for` loop to iterate through integers from 0 to N.
 *        4. In each iteration, print the current integer value.
 *        5. If the current integer is less than N, print a plus sign "+" 
 *           to indicate the continuation of the series.
 *        6. Add the current integer to the `sum` variable.
 *        7. After the loop completes, print the total sum of the series.
 *
 * Preconditions:
 *        - The variable `N` must be a non-negative integer.
 *
 * Postconditions:
 *        - The program outputs the series of integers from 0 to N 
 *          followed by the total sum.
 *
 * Edge Cases:
 *        - If N is set to 0, the program will output "0 = 0".
 *
 * Program Flow:
 * 1. Initialize `N` with the upper limit for the series.
 * 2. Initialize `sum` to 0.
 * 3. Enter the `for` loop to iterate from 0 to N.
 * 4. Print each number and the appropriate plus sign as needed.
 * 5. After the loop, print the calculated total sum.
 */

#include <stdio.h>

/*
 * Function Name: calculate_sum_series
 * Parameters: int N - the upper limit of the series
 * Returns: void
 * Description: This function calculates and prints the sum of integers from 0 to N,
 *              along with the series.
 */
void calculate_sum_series(int N) {
    int sum = 0; // Initialize sum to 0

    // Loop through integers from 0 to N
    for (int i = 0; i <= N; i++) {
        printf("%d", i); // Print the current number
        if (i < N) {
            printf(" + "); // Print plus sign if not the last number
        }
        sum += i; // Add current number to sum
    }

    printf(" = %d", sum); // Print the total sum
}

int main() {
    int N = 5; // Upper limit for the integer series

    // Call the function to calculate and print the sum series
    calculate_sum_series(N);

    return 0;
}
