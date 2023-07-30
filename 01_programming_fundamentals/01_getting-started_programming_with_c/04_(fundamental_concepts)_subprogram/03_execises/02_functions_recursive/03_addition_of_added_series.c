/*
 * Program Title: Addition of Added Series
 * Author: Achly
 * Date: July 2023
 * Description: This program recursively calculates the sum of a decreasing series of integers.
 *
 * Logic:
 *        1. Define a recursive function `addition_of_added_series` that takes an integer `sum` as input.
 *        2. If `sum` is greater than 0:
 *           a. Print the current value of `sum`.
 *           b. If `sum` is greater than 1, print a '+' sign to indicate addition.
 *           c. Call `addition_of_added_series` with the value `sum - 1`, and add the result to `sum`.
 *        3. If `sum` is not greater than 0, return 0 as the base case.
 *
 * Preconditions: The input to the function should be a positive integer.
 * Postconditions: The program prints each integer from the input down to 1,
 *                 followed by the total sum of these integers.
 * Edge Cases: If the input is less than 1, the program will not output any numbers.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The function `addition_of_added_series` is called with the input value of 5.
 * 3. The recursive function prints each integer and computes the sum.
 * 4. After the recursion completes, the program prints the total sum.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Current Value of `sum`  | Condition Check  | Result           | Action                      |
 * |-------------------------|------------------|------------------|-----------------------------|
 * | 5                       | 5 > 0            | Print: 5         | Recursive call with 4       |
 * | 4                       | 4 > 0            | Print: 4         | Recursive call with 3       |
 * | 3                       | 3 > 0            | Print: 3         | Recursive call with 2       |
 * | 2                       | 2 > 0            | Print: 2         | Recursive call with 1       |
 * | 1                       | 1 > 0            | Print: 1         | Recursive call with 0       |
 * | 0                       | 0 > 0            | FALSE            | Return 0                    |
 * |                         |                  |                  | Sum: 5 + 4 + 3 + 2 + 1 = 15 |
 */

#include <stdio.h>

/*
 * Function Name: addition_of_added_series
 * Parameters: 
 *   int sum - the current number in the series
 * Returns: 
 *   int - the total sum of the series
 * Description: This function prints and sums the series of integers recursively. 
 *              It prints the current number and calls itself with a decremented value, 
 *              accumulating the sum in the process.
 */
int addition_of_added_series(int sum) {
    if (sum > 0) { // Check if sum is greater than 0
        printf("%d", sum); // Print current number
        if (sum > 1) {
            printf(" + "); // Print '+' if more numbers follow
        }
        return sum + addition_of_added_series(sum - 1); // Recursive call
    } else {
        return 0; // Base case
    }
}

/*
 * Function Name: main
 * Description: The main function initializes the program and calculates 
 *              the sum of the series starting from 5 down to 1.
 *              It calls the `addition_of_added_series` function and prints the result.
 * Returns: 
 *   int - status code (0 for success)
 */
int main() {
    int result = addition_of_added_series(5); // Start recursion with 5
    printf(" = %d", result); // Print the total sum
    return 0; // Exit the program
}
