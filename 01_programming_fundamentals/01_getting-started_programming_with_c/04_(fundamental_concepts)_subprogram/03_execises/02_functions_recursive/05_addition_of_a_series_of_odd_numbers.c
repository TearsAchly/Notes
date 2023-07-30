/*
 * Program Title: Addition of a Series of Odd Numbers
 * Author: Achly
 * Date: July 2023
 * Description: This program recursively calculates the sum of a series of odd numbers.
 *
 * Logic:
 *        1. Define a recursive function `addition_of_a_series_of_odd_numbers` that takes an integer `sum` as input.
 *        2. If `sum` is greater than 0 and odd:
 *           a. Print the current value of `sum`.
 *           b. If `sum` is greater than 1, print a '+' sign to indicate addition.
 *           c. Call `addition_of_a_series_of_odd_numbers` with the value `sum - 2`, and add the result to `sum`.
 *        3. If `sum` is not greater than 0 or is even, return 0 as the base case.
 *
 * Preconditions: The input to the function should be a positive odd integer.
 * Postconditions: The program prints each odd number from the input down to 1,
 *                 followed by the total sum of these odd numbers.
 * Edge Cases: If the input is even, the program will only sum odd numbers down to the largest odd number less than the input.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The function `addition_of_a_series_of_odd_numbers` is called with the input value of 11.
 * 3. The recursive function prints each odd number and computes the sum.
 * 4. After the recursion completes, the program prints the total sum.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Current Value of `sum`  | Condition Check        | Result           | Action                           |
 * |-------------------------|------------------------|------------------|----------------------------------|
 * | 11                      | 11 > 0 && 11 % 2 != 0  | Print: 11        | Recursive call with 9            |
 * | 9                       | 9 > 0 && 9 % 2 != 0    | Print: 9         | Recursive call with 7            |
 * | 7                       | 7 > 0 && 7 % 2 != 0    | Print: 7         | Recursive call with 5            |
 * | 5                       | 5 > 0 && 5 % 2 != 0    | Print: 5         | Recursive call with 3            |
 * | 3                       | 3 > 0 && 3 % 2 != 0    | Print: 3         | Recursive call with 1            |
 * | 1                       | 1 > 0 && 1 % 2 != 0    | Print: 1         | Recursive call with -1           |
 * | -1                      | -1 > 0 && -1 % 2 != 0  | FALSE            | Return 0                         |
 * |                         |                        |                  | Sum: 11 + 9 + 7 + 5 + 3 + 1 = 36 |
 */

#include <stdio.h>

/*
 * Function Name: addition_of_a_series_of_odd_numbers
 * Parameters: 
 *   int sum - the odd number to be added
 * Returns: 
 *   int - the sum of odd numbers
 * Description: This function prints and sums a series of odd numbers recursively.
 */
int addition_of_a_series_of_odd_numbers(int sum) {
    if (sum > 0 && sum % 2 != 0) { // Check if sum is positive and odd
        printf("%d", sum); // Print current odd number
        if (sum > 1) {
            printf(" + "); // Print '+' if more numbers follow
        }
        return sum + addition_of_a_series_of_odd_numbers(sum - 2); // Recursive call
    } else {
        return 0; // Base case
    }
}

/*
 * Function Name: main
 * Description: The main function initializes the program and calculates 
 *              the sum of the series of odd numbers starting from 11.
 * Returns: 
 *   int - status code (0 for success)
 */
int main() {
    int result = addition_of_a_series_of_odd_numbers(11); // Start recursion with 11
    printf(" = %d", result); // Print the total sum
    return 0; // Exit the program
}
