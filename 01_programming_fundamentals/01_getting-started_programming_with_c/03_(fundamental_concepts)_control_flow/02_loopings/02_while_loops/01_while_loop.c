/*
 * Program Title: While Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of a while loop 
 *              to print numbers from 0 to 10.
 *
 * Logic:
 *        1. Declare and initialize an integer variable `i` to 0 as a counter.
 *        2. Use a while loop to check the condition (i.e., `i` should be less than or equal to 10).
 *        3. Inside the loop, print the current value of `i`.
 *        4. Increment `i` by 1 after printing to avoid an infinite loop.
 * 
 * Preconditions: The variable `i` should be initialized to 0.
 * Postconditions: The program will print integers from 0 to 10, inclusive.
 * Edge Cases: If the initial value of `i` is greater than 10, no output will be generated.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The while loop iterates as long as `i` is less than or equal to 10.
 * 3. The value of `i` is printed in each iteration.
 * 4. After printing, `i` is incremented to move to the next number.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Initial Value | Termination Condition | Result   | Action             | Increment/Decrement |
 * |---------------|-----------------------|----------|--------------------|---------------------|
 * | 0             | 0 <= 10               | TRUE     | Print: 0           | 0 + 1 = 1           |
 * | 1             | 1 <= 10               | TRUE     | Print: 1           | 1 + 1 = 2           |
 * | 2             | 2 <= 10               | TRUE     | Print: 2           | 2 + 1 = 3           |
 * | 3             | 3 <= 10               | TRUE     | Print: 3           | 3 + 1 = 4           |
 * | 4             | 4 <= 10               | TRUE     | Print: 4           | 4 + 1 = 5           |
 * | 5             | 5 <= 10               | TRUE     | Print: 5           | 5 + 1 = 6           |
 * | 6             | 6 <= 10               | TRUE     | Print: 6           | 6 + 1 = 7           |
 * | 7             | 7 <= 10               | TRUE     | Print: 7           | 7 + 1 = 8           |
 * | 8             | 8 <= 10               | TRUE     | Print: 8           | 8 + 1 = 9           |
 * | 9             | 9 <= 10               | TRUE     | Print: 9           | 9 + 1 = 10          |
 * | 10            | 10 <= 10              | TRUE     | Print: 10          | 10 + 1 = 11         |
 * | 11            | 11 <= 10              | FALSE    | Not executed       | Exit the loop       |
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize counter

    while (i <= 10) { // Loop condition
        printf("%d\n", i); // Print the current value
        i++; // Increment counter
    }

    return 0; // Indicate successful completion
}
