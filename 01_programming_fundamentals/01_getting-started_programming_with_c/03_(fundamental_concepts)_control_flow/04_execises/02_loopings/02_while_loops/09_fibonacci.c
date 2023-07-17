/*
 * Program Title: Fibonacci Sequence
 * Author: Achly
 * Date: July 2023
 * Description: This program generates and prints the 
 *              Fibonacci sequence up to N terms using a while loop.
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter to 0
    int current_number = 0; // Current Fibonacci number
    int next_number = 1; // Next Fibonacci number
    int now_number; // Sum of current and next numbers
    int N = 19; // Number of terms to display

    printf("0"); // Print the first term

    while (i < N) { // Loop until i is less than N
        now_number = current_number + next_number; // Calculate new Fibonacci number
        current_number = next_number; // Update current number
        next_number = now_number; // Update next number

        printf(" %d ", now_number); // Print the current Fibonacci number
        i++; // Increment i
    }

    return 0;
}
