/*
 * Program Title: Display Message
 * Author: Achly
 * Date: July 2023
 * Description: This program defines a simple procedure to display
 *              a message. It calls the display_message function 
 *              multiple times to print "Hello Mom!" to the console.
 *
 * Logic:
 *        1. A function `display_message` is defined to print a message.
 *        2. The main function calls `display_message` three times.
 * 
 * Preconditions: None
 * Postconditions: The message "Hello Mom!" is printed three times.
 * Edge Cases: None
 *
 * Program Flow:
 * 1. The main function calls `display_message` three times, printing the message each time.
 */

#include <stdio.h>

/*
 * Function Name: display_message
 * Parameters: None
 * Returns: 
 *   - void: The function prints a message to the console.
 * Description: This function prints "Hello Mom!" to the console.
 */
void display_message() { 
    printf("Hello Mom!\n"); 
}

int main() {
    display_message(); // Call the display_message function
    display_message(); // Call the display_message function
    display_message(); // Call the display_message function
    return 0; // Exit the program
}
