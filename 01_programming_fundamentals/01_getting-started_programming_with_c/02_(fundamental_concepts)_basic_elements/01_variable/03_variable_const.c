/*
 * Program Title: Constant Variable
 * Author: Achly
 * Date: June 2023
 * Description: This program defines a constant variable and prints its value.
 *
 * Logic: The program defines a constant double variable 'π' and initializes it with the value 3.14.
 * Preconditions: The constant variable must be initialized at the time of declaration.
 * Postconditions: The value of the constant variable 'π' is printed to the console.
 * Edge Cases: Changing the value of a constant variable will lead to a compile-time error.
 *
 * Program Flow:
 * 1. The program starts execution in the `main` function.
 * 2. A constant double variable `π` is declared and initialized with the value 3.14.
 * 3. Since `π` is a constant, its value cannot be changed after initialization.
 * 4. The value of the constant `π` is printed to the console using the `printf` function.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 */

#include <stdio.h>

int main () {
    const double π = 3.14;  // Define a constant variable 'π'
    
    // Print the value of the constant variable 'π'
    printf("The constant variable π is given the value double %lf\n", π);

    return 0; // Indicate successful completion
}
