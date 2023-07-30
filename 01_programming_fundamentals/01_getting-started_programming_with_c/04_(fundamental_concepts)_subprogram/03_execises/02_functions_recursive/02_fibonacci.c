/*
 * Program Title: Fibonacci Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the Fibonacci series up to a specified number.
 *
 * Logic:
 *        1. Define a recursive function `fibonacci` that calculates the Nth term in the Fibonacci series.
 *        2. If `N` is 0, return 0.
 *        3. If `N` is 1, return 1.
 *        4. For any other value of `N`, return the sum of the previous two Fibonacci numbers 
 *           (i.e., `fibonacci(N - 1) + fibonacci(N - 2)`).
 *
 * Preconditions: The parameter `N` should be a non-negative integer.
 * Postconditions: The program outputs the Fibonacci numbers from the 0th to the Nth term.
 * Edge Cases: If `N` is less than 0, the function will not be executed as the loop will not run.
 *
 * Traversal Table:
 * | Current Value (N) | Fibonacci Calculation                         | Result |
 * |--------------------|----------------------------------------------|--------|
 * | 0                  | fibonacci(0)                                 | 0      |
 * | 1                  | fibonacci(1)                                 | 1      |
 * | 2                  | fibonacci(2) = fibonacci(1) + fibonacci(0)  | 1      |
 * | 3                  | fibonacci(3) = fibonacci(2) + fibonacci(1)  | 2      |
 * | 4                  | fibonacci(4) = fibonacci(3) + fibonacci(2)  | 3      |
 * | 5                  | fibonacci(5) = fibonacci(4) + fibonacci(3)  | 5      |
 * | 6                  | fibonacci(6) = fibonacci(5) + fibonacci(4)  | 8      |
 * | 7                  | fibonacci(7) = fibonacci(6) + fibonacci(5)  | 13     |
 * | 8                  | fibonacci(8) = fibonacci(7) + fibonacci(6)  | 21     |
 * | 9                  | fibonacci(9) = fibonacci(8) + fibonacci(7)  | 34     |
 * | 10                 | fibonacci(10) = fibonacci(9) + fibonacci(8) | 55     |
 */

#include <stdio.h>

/*
 * Function Name: fibonacci
 * Parameters: 
 *   int N - the Nth term in the Fibonacci series
 * Returns: 
 *   int - the Fibonacci value of the Nth term
 * Description: This function calculates the Fibonacci value recursively. 
 *              It utilizes base cases for `N` equal to 0 and 1 and uses recursion
 *              to compute Fibonacci numbers for values greater than 1.
 */
int fibonacci(int N) {
    if (N == 0) {
        return 0; // Base case for 0
    } else if (N == 1) {
        return 1; // Base case for 1
    } else {
        return fibonacci(N - 1) + fibonacci(N - 2); // Recursive case
    }
}

/*
 * Function Name: main
 * Description: The main function initializes the program and calculates 
 *              the Fibonacci series up to the specified term (N = 10).
 *              It uses a loop to call the `fibonacci` function for each term
 *              from 0 to N-1, printing the results.
 * Returns: 
 *   int - status code (0 for success)
 */
int main() {
    int i;
    int N = 10; // Calculate Fibonacci series up to the 10th term
    for (i = 0; i < N; i++) {
        printf(" %d ", fibonacci(i)); // Print Fibonacci numbers from 0 to N-1
    }
    return 0; // Exit the program
}
