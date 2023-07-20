/*
 * Program Title: Factorial Calculation (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the factorial of 
 *              a specified number N by multiplying all 
 *              integers from 1 to N using a do-while loop.
 *
 * Logic:
 *        1. Declare three integer variables: `i` for the counter, `N` for the upper limit, and `mul` to hold the multiplication result.
 *        2. Initialize `i` to 1 (the starting point for factorial calculation), and `mul` to 1 to start the multiplication.
 *        3. Use a do-while loop that continues as long as `i` is less than or equal to `N`.
 *        4. Inside the loop:
 *            - Print the current value of `i`.
 *            - Multiply the current value of `i` to the total `mul`.
 *            - Print the multiplication sign ("*") if `i` is less than `N` to format the output correctly.
 *            - Increment `i` to move to the next integer.
 *        5. After the loop, print the total factorial result.
 *
 * Preconditions:
 *        - The variable `N` should be a non-negative integer representing the number for which the factorial is calculated.
 *
 * Postconditions:
 *        - The program outputs the factorial calculation of \( N \) in the format "1 * 2 * ... * N = result".
 *
 * Edge Cases:
 *        - If `N` is 0, the program should return 1 as \( 0! \) is defined to be 1.
 *
 * Program Flow:
 * 1. The program initializes the variable `i` to 1 and `N` to 5, with `mul` initialized to 1.
 * 2. The do-while loop executes, printing each number involved in the factorial calculation and updating the result.
 * 3. The loop continues until `i` exceeds the value of `N`, at which point it terminates.
 * 4. Finally, the program prints the total factorial result in a formatted manner.
 */

#include <stdio.h>

int main() {
    int i = 1; // Initialize the counter to 1
    int N = 5; // Upper limit for the factorial calculation
    int mul = 1; // Initialize multiplication result to 1

    do {
        printf("%d", i); // Print the current number
        mul *= i; // Multiply current number to result
        if (i < N) {
            printf(" * "); // Print multiplication sign if not the last number
        }
        i++; // Increment i
    } while (i <= N); // Loop until i is less than or equal to N

    printf(" = %d", mul); // Print the factorial result
    return 0;
}
