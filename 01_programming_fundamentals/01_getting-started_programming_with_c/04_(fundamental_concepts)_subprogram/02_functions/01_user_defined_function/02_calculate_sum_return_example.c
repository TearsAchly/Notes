/*
 * Program Title: Calculate Sum with Various Return Types
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates different return types 
 *              from a sum function that adds two integers and prints 
 *              the result in various formats.
 *
 * Logic:
 *        1. The function `sum_function` takes two integers as input.
 *        2. It calculates the sum of the two integers using different 
 *           methods.
 *        3. The results are printed in various ways, demonstrating 
 *           different return types.
 *
 * Preconditions: The inputs must be valid integers.
 * Postconditions: The program will output the sum of the two integers.
 */

#include <stdio.h>

/*
 * Function Name: sum_function
 * Parameters: 
 *   - int a: First integer to be summed.
 *   - int b: Second integer to be summed.
 * Returns: 
 *   - int: Returns the result of the sum, or performs printing.
 * Description: This function demonstrates multiple return types 
 *              by calculating the sum of two integers in various ways.
 */
int sum_function(int a, int b) {

    /*
    int result = a + b; 
    printf("%d + %d = %d\n", a, b, result); // Print the sum
    return 0; // Return 0 indicating success (not the sum)
    */

    /*
    printf("%d + %d\n", a, b); // Print the operands
    return a + b; // Return the sum without printing the result
    */

    /*
    int sum = 0; 
    return printf("%d + %d = %d\n", a, b, a + b); // Return the number of characters printed
    */

    // Option that calculates the sum, prints, and returns the sum
    int sum = a + b; 
    printf("%d + %d = %d\n", a, b, sum); // Print the sum
    return sum; // Return the calculated sum
}

int main() {
    int result = sum_function(10, 20); // Call sum function with arguments 10 and 20
    printf("Result from sum_function: %d\n", result); // Print the returned result from the function
    return 0; // Exit the program
}
