/*
 * Program Title: Decrement Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of decrement operators 
 *              (pre-decrement and post-decrement) in C. The program shows 
 *              how these operators affect the value of a variable in different 
 *              ways.
 *
 * Logic: The program initializes an integer variable and applies both 
 *        pre-decrement and post-decrement operators on it. The final 
 *        value of the variable is printed to the console.
 * 
 * Preconditions: The integer variable must be initialized before using 
 *                decrement operators.
 * 
 * Postconditions: The final value of the variable after applying 
 *                 decrement operators is printed to the console.
 * 
 * Edge Cases: Ensure that decrementing does not lead to underflow 
 *             if the variable is of an unsigned type.
 */

#include <stdio.h>

int main() {
    int i = 3; // Initialize i with a value of 3

    // Pre-decrement
    --i; // i = 3 - 1; now i = 2

    // Post-decrement
    i--; // i = 2 - 1; now i = 1

    printf("%d\n", i); // Print the final value of i
    return 0;
}
