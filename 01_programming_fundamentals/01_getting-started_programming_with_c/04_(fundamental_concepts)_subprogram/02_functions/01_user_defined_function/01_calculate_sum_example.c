/*
 * Program Title: Calculate Sum Example
 * Author: Achly
 * Date: July 2023
 * Description: This program defines a function to calculate the 
 *              sum of two integers. It calls the sum function 
 *              with two numbers and displays the result.
 *
 * Logic:
 *        1. The function `sum` takes two integers as input.
 *        2. It calculates the sum of the two integers.
 *        3. The result is printed in the format "a + b = result".
 *
 * Preconditions: The inputs must be valid integers.
 * Postconditions: The program will output the sum of the two integers.
 *
 * Program Flow:
 * 1. The main function calls the `sum_function` with two numbers (10 and 20).
 * 2. The sum is printed as part of the function's logic.
 */

#include <stdio.h>

/*
 * Function Name: sum
 * Parameters: 
 *   - int a: First integer to be summed.
 *   - int b: Second integer to be summed.
 * Returns: 
 *   - int: Returns 0 (function return type is int, but it's not used).
 * Description: This function calculates the sum of two integers 
 *              and prints the result.
 */
int sum(int a, int b) {
    int result = a + b; // Calculate the sum
    printf("%d + %d = %d\n", a, b, result); // Print the sum
    return 0; // Return 0 (not used)
}

int main() {
    sum(10, 20); // Call sum function with arguments 10 and 20
    return 0; // Exit the program
}
