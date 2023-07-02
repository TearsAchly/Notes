/*
 * Program Title: Comparison Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of comparison operators 
 *              in C, including less than (<), greater than (>), equal to (==),
 *              and not equal to (!=). These operators are used to compare values 
 *              and return boolean results (true or false).
 * 
 * Logic: The program initializes three integer variables and performs various 
 *        comparison operations, storing the results in variables and printing 
 *        the outcomes.
 *
 * Preconditions: The variables must be initialized before performing comparison operations.
 * Postconditions: The results of the comparison operations are printed to the console.
 * Edge Cases: Ensure that comparisons are made between compatible types to avoid 
 *             unexpected results.
 */

#include <stdio.h>

int main() {
    int a = 10;    // First integer
    int b = 20;    // Second integer
    int c = 10;    // Third integer

    // Variables to store comparison results
    int less_than;
    int greater_than;
    int less_than_or_equal;
    int greater_than_or_equal;
    int equal_to;
    int not_equal_to;

    // Print initial values
    printf("a = %d\nb = %d\nc = %d\n\n", a, b, c);

    // Comparison operations
    less_than = a < b;  // Check if a is less than b
    printf("a < b  = %d (true)\n", less_than);
    greater_than = a > b; // Check if a is greater than b
    printf("a > b  = %d (false)\n\n", greater_than);

    less_than = a < c; // Check if a is less than c
    printf("a < c  = %d (false)\n", less_than);
    greater_than = a > c; // Check if a is greater than c
    printf("a > c  = %d (false)\n\n", greater_than);

    less_than_or_equal = a <= c; // Check if a is less than or equal to c
    printf("a <= c = %d (true)\n", less_than_or_equal);
    greater_than_or_equal = a >= c; // Check if a is greater than or equal to c
    printf("a >= c = %d (true)\n\n", greater_than_or_equal);

    equal_to = a == c; // Check if a is equal to c
    printf("a == c = %d (true)\n", equal_to);
    not_equal_to = a != b; // Check if a is not equal to b
    printf("a != b = %d (true)\n", not_equal_to);

    return 0;
}
