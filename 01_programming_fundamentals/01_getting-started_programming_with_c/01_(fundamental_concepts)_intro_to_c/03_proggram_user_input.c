/*
 * Program Title: User Input Example
 * Author: Achly
 * Date: June 2023
 * Description: This program prompts the user to input a number, then prints the entered number back to the console.
 *
 * Logic: The program first prompts the user to enter an integer number 
 *        using `printf` and `scanf`. The entered number is stored in the `user_input`
 *        variable and is printed back to the user. Finally, the program returns 0 to indicate
 *        successful execution.
 * 
 * Preconditions: User must input a valid integer. If the user inputs a non-integer, the behavior is undefined.
 * Postconditions: The entered integer is printed to the console. The program exits with status 0.
 * Edge Cases: Input of negative numbers or very large numbers will still be handled as integers.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `printf` function displays a message to prompt the user to enter a number.
 * 3. The `scanf` function captures the user's input and stores it in the `user_input` variable.
 * 4. The program then uses `printf` to display the entered number back to the user.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 */

#include <stdio.h>

int main () {
    int user_input;  // Variable to store user input
    
    // Prompt the user to enter a number
    printf("Please enter a number: ");
    
    // Read the number input by the user
    scanf("%d", &user_input);
    
    // Display the entered number
    printf("\nYou entered the number: %d", user_input);
    
    return 0; // Indicate successful completion
}
