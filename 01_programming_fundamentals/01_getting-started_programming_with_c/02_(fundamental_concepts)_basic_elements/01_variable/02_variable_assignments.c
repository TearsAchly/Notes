/*
 * Program Title: Variable Assignments
 * Author: Achly
 * Date: June 2023
 * Description: This program assigns a value to a variable of type integer and prints its value to the console.
 *
 * Logic: The program first declares an integer variable 'i', then assigns it the value 5.
 * Preconditions: The variable must be declared before assignment.
 * Postconditions: The assigned value of variable 'i' is printed to the console.
 *
 * Program Flow:
 * 1. The program begins execution in the `main` function.
 * 2. The integer variable `i` is declared, but no initial value is assigned at this point.
 * 3. The value 5 is then assigned to the variable `i`.
 * 4. The `printf` function prints the value of `i` to the console.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 */

#include <stdio.h>

int main () {
    int i;  // Declare variable 'i'
    i = 5;  // Assign the value 5 to variable 'i'
    
    // Print the assigned value of variable 'i'
    printf("Variable i is assigned the value int %d\n", i);
    
    return 0; // Indicate successful completion
}
