/*
 * Program Title: Factorial Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the factorial of 
 *              a specified number N by multiplying all 
 *              integers from 1 to N and displays the result.
 *
 * Logic:
 *        1. Declare an integer variable `N` and set it 
 *           to 5, representing the upper limit for the 
 *           factorial calculation.
 *        2. Initialize an integer variable `mul` to 1 
 *           to store the multiplication result.
 *        3. Use a `for` loop to iterate from 1 to `N`.
 *        4. Inside the loop, print the current number `i`.
 *        5. Print a multiplication sign (" * ") if `i` 
 *           is not the last number.
 *        6. Multiply the current number `i` to `mul` 
 *           to compute the factorial.
 *        7. After the loop, print the final factorial 
 *           result stored in `mul`.
 *
 * Preconditions:
 *        - The variable `N` must be a non-negative integer 
 *          for valid factorial calculation.
 *
 * Postconditions:
 *        - The program outputs the factorial of the number 
 *          `N` in a readable format, showing the calculation 
 *          process.
 *
 * Edge Cases:
 *        - If `N` is set to 0, the output should indicate 
 *          that the factorial of 0 is 1 (not handled in this 
 *          example, but typically defined).
 *
 * Program Flow:
 * 1. Initialize `N` with the value for which the factorial 
 *    is to be calculated.
 * 2. Initialize `mul` to 1 to start the multiplication.
 * 3. Enter the `for` loop to calculate the factorial by 
 *    multiplying each integer from 1 to `N`.
 * 4. Print the calculation steps and the final result.
 */

#include <stdio.h>

int main() {
    int N = 5; // Upper limit for the factorial calculation
    int mul = 1; // Initialize multiplication result to 1

    for (int i = 1; i <= N; i++) {
        printf("%d", i); // Print the current number
        if (i < N) {
            printf(" * "); // Print multiplication sign if not the last number
        }
        mul *= i; // Multiply current number to result
    }

    printf(" = %d", mul); // Print the factorial result
    return 0;
}
