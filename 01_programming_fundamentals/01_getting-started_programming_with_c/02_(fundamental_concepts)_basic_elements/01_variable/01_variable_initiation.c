/*
 * Program Title: Variable Initialization
 * Author: Achly
 * Date: june 2023
 * Description: This program initializes a variable of type integer and prints its value to the console.
 *
 * Logic: The program initializes an integer variable 'i' with a value of 5.
 * Preconditions: None
 * Postconditions: The initialized value of variable 'i' is printed to the console.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The integer variable `i` is initialized with a value of 5.
 * 3. The `printf` function prints the value of `i` to the console.
 * 4. The program reaches the `return 0;` statement, indicating successful execution.
 * 5. The program terminates and returns the value `0` to the operating system.
 */

#include <stdio.h>

int main() {
    int i = 5;  // Initialize variable 'i' with the value 5
    
    // Print the initialized value of variable 'i'
    printf("Variable i is initialized with the value int %d\n", i);

    return 0; // Indicate successful completion
}
