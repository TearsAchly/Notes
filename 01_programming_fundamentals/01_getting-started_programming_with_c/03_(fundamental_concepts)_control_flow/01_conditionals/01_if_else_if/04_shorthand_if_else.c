/*
 * Program Title: Shorthand If-Else Statement
 * Author: Achly
 * Date: July 2023
 * Description: This program uses a shorthand conditional (ternary operator) 
 *              to check if it is raining and provide a message accordingly.
 *
 * Logic:
 *        1. Declare and initialize a boolean variable to indicate whether it is raining.
 *        2. Use the ternary operator to evaluate the condition.
 *        3. If it is raining, print a message indicating the need for an umbrella.
 *        4. If it is not raining, print a message indicating no need for an umbrella.
 *
 * Preconditions: The variable indicating rain must be set to either true or false.
 * Postconditions: The program will output a message based on the rain condition.
 * Edge Cases: The variable must hold a valid boolean value (true or false).
 *
 * Program Flow:
 * 1. Declare an integer variable to represent whether it is raining (using a boolean value).
 * 2. Use a ternary operator to check the value of the rain variable.
 * 3. Based on the value of rain, output the corresponding message.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    bool rain = true; // Set rain to true

    // Shorthand if-else statement using the ternary operator
    (rain) ? printf("It's raining, bring an umbrella.\n") // Output for raining
           : printf("It's not raining, no need to bring an umbrella.\n"); // Output for not raining

    return 0; // Indicate successful completion
}
