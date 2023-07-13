/*
 * Program Title: Addition of a Series of Odd Numbers
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of odd numbers starting from 1 to a specified upper limit N.
 *
 * Logic:
 *        1. Declare and initialize an integer variable `N` to define 
 *           the upper limit for the odd number series.
 *        2. Initialize an integer variable `sum` to store the total sum, 
 *           starting from 0.
 *        3. Use a `for` loop starting from 1 and iterating while `i` 
 *           is less than or equal to `N`.
 *        4. Inside the loop, check if `i` is odd. If true, print the current 
 *           odd number and add it to the sum.
 *        5. If the current odd number is not the last in the series, 
 *           print a plus sign "+" to indicate continuation.
 *        6. After the loop, print the total sum of the series.
 *
 * Preconditions:
 *        - The variable `N` must be a non-negative integer and should 
 *          ideally be odd to represent the series correctly.
 *
 * Postconditions:
 *        - The program outputs the series of odd numbers from 1 to N 
 *          followed by the total sum.
 *
 * Edge Cases:
 *        - If N is set to 1, the program will output "1 = 1".
 *        - If N is set to 0 or negative, no output will be generated.
 *
 * Program Flow:
 * 1. Initialize `N` with the upper limit for the series.
 * 2. Initialize `sum` to 0.
 * 3. Enter the `for` loop to iterate starting from 1.
 * 4. Print each odd number and the appropriate plus sign as needed.
 * 5. After the loop, print the calculated total sum.
 */

#include <stdio.h>

int main() {
    int N = 9; // Upper limit for the odd number series
    int sum = 0; // Initialize sum to 0

    printf("Series: ");
    for (int i = 1; i <= N; i += 2) { // Increment by 2 to get odd numbers
        printf("%d", i); // Print the current odd number
        sum += i; // Add current odd number to sum
        
        if (i < N - 1) {
            printf(" + "); // Print plus sign if not the last number
        }
    }

    printf(" = %d\n", sum); // Print the total sum
    return 0;
}
