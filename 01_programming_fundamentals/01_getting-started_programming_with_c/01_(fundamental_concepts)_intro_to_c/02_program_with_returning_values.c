/*
 * Program Title: Program with Returning Values
 * Author: Achly
 * Date: June 2023
 * Description: This program prints a simple message to the console and returns an integer value (0) from the `main` function.
 *
 * Logic: The program uses `printf` to display a message and returns 0 to indicate successful execution.
 * Preconditions: None
 * Postconditions: A message is displayed on the console and the program exits with status 0.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `printf` function is called to print "Hello Mom!" to the console.
 * 3. The program reaches the `return 0;` statement, indicating successful execution.
 * 4. The program terminates, returning the value `0` to the operating system.
 */

#include <stdio.h>

int main() {
    // Print a simple message to the console
    printf("Hello Mom!");
    
    // Return 0 to indicate that the program executed successfully
    return 0;
}
