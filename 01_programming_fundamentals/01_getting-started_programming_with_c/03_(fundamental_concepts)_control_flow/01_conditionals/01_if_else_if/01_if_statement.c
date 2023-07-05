/*
 * Program Title: Simple If Statement
 * Author: Achly
 * Date: July 2023
 * Description: This program checks if it is raining. If it is, 
 *              it advises the user to bring an umbrella.
 *
 * Logic:
 *        1. Declare a boolean variable to represent the rain condition.
 *        2. Use an if statement to evaluate the condition of rain.
 *        3. If it is raining, print a message advising to bring an umbrella.
 *
 * Preconditions: The rain variable should be set to either true or false.
 * Postconditions: The program will output a message if it is raining.
 * Edge Cases: The rain variable must hold a valid boolean value (true or false).
 *
 * Program Flow:
 * 1. Declare an integer variable to represent whether it is raining.
 * 2. Initialize the variable to true (indicating rain).
 * 3. Use an if statement to check the value of the rain variable.
 * 4. If the value of rain is true, output a message advising to bring an umbrella.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    bool rain = true; // Set rain to true (indicating that it is raining)

    if (rain) { // Check if it is raining
        printf("It is raining, bring an umbrella.\n");
    }

    return 0; // Indicate successful completion
}
