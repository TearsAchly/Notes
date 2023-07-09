/*
 * Program Title: Continue Statement Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of the continue statement 
 *              to skip the current iteration of a loop when a specific 
 *              condition is met.
 * 
 * Logic:
 * 1. Initialize a variable `N` to 10, representing the maximum value for 
 *    the loop.
 * 2. Iterate over values from 0 to `N` using a `for` loop.
 * 3. Inside the loop, check if the current loop variable `outer` equals 4.
 * 4. If `outer` equals 4, use the `continue` statement to skip the 
 *    current iteration, preventing 4 from being printed.
 * 5. If `outer` is not 4, print its value to the console.
 * 
 * Preconditions: None
 * Postconditions: The numbers from 0 to N are printed, except for the number 4.
 * 
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `for` loop iterates from 0 to `N` (0 to 10).
 * 3. If `outer` is 4, the program skips printing that value and moves to the 
 *    next iteration.
 * 4. The program prints the values of `outer` except for 4.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 * 
 * Traversal Table:
 * +-------+----------------------+---------------------+------------------+----------------+
 * | Iter  | Current Value of `outer` | Termination Condition | Action Taken| New Value of `outer` |
 * +-------+----------------------+---------------------+------------------+----------------+
 * | 1     | 0                    | 0 <= 10             | Print 0          | 1              |
 * | 2     | 1                    | 1 <= 10             | Print 1          | 2              |
 * | 3     | 2                    | 2 <= 10             | Print 2          | 3              |
 * | 4     | 3                    | 3 <= 10             | Print 3          | 4              |
 * | 5     | 4                    | 4 <= 10             | Skip (continue)  | 5              |
 * | 6     | 5                    | 5 <= 10             | Print 5          | 6              |
 * | 7     | 6                    | 6 <= 10             | Print 6          | 7              |
 * | 8     | 7                    | 7 <= 10             | Print 7          | 8              |
 * | 9     | 8                    | 8 <= 10             | Print 8          | 9              |
 * | 10    | 9                    | 9 <= 10             | Print 9          | 10             |
 * | 11    | 10                   | 10 <= 10           | Print 10         | 11             |
 * +-------+----------------------+---------------------+------------------+----------------+
 * 
 * Output:
 * The output of the program will be:
 * 0 1 2 3 5 6 7 8 9 10
 * 
 */

#include <stdio.h>

int main() {
    int N = 10; // Maximum value for outer loop
    int outer;

    // For loop iterating from 0 to N
    for (outer = 0; outer <= N; outer++) {
        if (outer == 4) {
            continue; // Skip the current iteration if outer is equal to 4
        }
        printf("%d ", outer); // Print the current value of outer
    }
    
    return 0; // Indicate successful completion
}

