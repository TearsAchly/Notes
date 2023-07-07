/*
 * Program Title: For Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of a for loop 
 *              to print numbers from 0 to N (inclusive).
 *
 * Logic:
 *        1. Declare an integer variable `N` to define the maximum value to print.
 *        2. Use a for loop to iterate from 0 to `N`, inclusive.
 *        3. In each iteration of the loop, print the current value of the loop variable.
 *
 * Preconditions: The variable `N` should be a non-negative integer.
 * Postconditions: The program outputs all integers from 0 to N, each on a new line.
 * Edge Cases: If N is less than 0, the program will not output any numbers.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The for loop iterates from 0 to `N` (0 to 10).
 * 3. In each iteration, the current value of `i` is printed.
 * 4. The program reaches the `return 0;` statement, indicating successful execution.
 * 5. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Initial Value | Termination Condition | Result   | Action             | Increment/Decrement |
 * |---------------|-----------------------|----------|--------------------|---------------------|
 * | 0             | 0 <= 10               | TRUE     | print: 0           | 0 + 1 = 1           |
 * | 1             | 1 <= 10               | TRUE     | print: 1           | 1 + 1 = 2           |
 * | 2             | 2 <= 10               | TRUE     | print: 2           | 2 + 1 = 3           |
 * | 3             | 3 <= 10               | TRUE     | print: 3           | 3 + 1 = 4           |
 * | 4             | 4 <= 10               | TRUE     | print: 4           | 4 + 1 = 5           |
 * | 5             | 5 <= 10               | TRUE     | print: 5           | 5 + 1 = 6           |
 * | 6             | 6 <= 10               | TRUE     | print: 6           | 6 + 1 = 7           |
 * | 7             | 7 <= 10               | TRUE     | print: 7           | 7 + 1 = 8           |
 * | 8             | 8 <= 10               | TRUE     | print: 8           | 8 + 1 = 9           |
 * | 9             | 9 <= 10               | TRUE     | print: 9           | 9 + 1 = 10          |
 * | 10            | 10 <= 10              | TRUE     | print: 10          | 10 + 1 = 11         |
 * | 11            | 11 <= 10              | FALSE    | not executed       | exit the loop       |
 */

#include <stdio.h>

int main() {
    int N = 10; // Maximum value to print

    // For loop iterating from 0 to N
    for (int i = 0; i <= N; i++) {
        printf("%d\n", i); // Print the current value of i
    }
    
    return 0; // Indicate successful completion
}
