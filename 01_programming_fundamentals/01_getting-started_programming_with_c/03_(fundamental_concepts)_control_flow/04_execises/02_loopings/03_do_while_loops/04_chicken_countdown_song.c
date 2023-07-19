/*
 * Program Title: Chicken Countdown Song (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program prints the lyrics of a countdown song for chicks, starting from 
 *              10 and going down to 1 using a do-while loop.
 *
 * Logic:
 *        1. Declare an integer variable `N` and initialize it to 10, representing the number of chicks.
 *        2. Use a do-while loop to iterate as long as `N` is greater than 1.
 *        3. Inside the loop, print the current number of chicks and the message about one chick dying.
 *        4. If `N` equals 2, print a special message indicating that only the mother is left.
 *        5. Decrement the value of `N` after each iteration to continue the countdown.
 *
 * Preconditions:
 *        - The variable `N` should be a positive integer representing the starting number of chicks.
 *
 * Postconditions:
 *        - The program outputs the lyrics of the countdown song until there is only one chick left.
 *
 * Edge Cases:
 *        - If `N` is initialized to a value less than 2, the program will print nothing as the loop condition won't be met.
 *
 * Program Flow:
 * 1. The program initializes the variable `N` to 10.
 * 2. The do-while loop executes, printing the lyrics for the countdown song for each value of `N`.
 * 3. When `N` reaches 2, it prints a specific message indicating that only the mother is left.
 * 4. The loop continues until `N` decrements to 1, at which point the loop terminates.
 * 5. The program ends after printing the final message, indicating the countdown is complete.
 */

#include <stdio.h>

int main() {
    int N = 10; // Initialize the number of chicks

    do {
        printf("\n%d little chicks went down, 1 died, %d are left.", N, N - 1);
        if (N == 2) {
            printf("\n1 little chick went down, 1 died, only the mother is left.");
        }
        N--; // Decrement N
    } while (N > 1); // Loop until N is greater than 1

    return 0;
}
