/*
 * Program Title: Leap Year Checking
 * Author: Achly
 * Date: July 2023
 * Description: This program checks whether a given year is a leap year 
 *              based on the rules of the Gregorian calendar.
 *
 * Logic:
 * 1. Declare an integer variable `year` to store the user's input.
 * 2. Prompt the user to enter a year.
 * 3. Read the user's input and store it in the variable `year`.
 * 4. Check if the year is a leap year using the following conditions:
 *    - If year is divisible by 4 AND not divisible by 100, it is a leap year.
 *    - If year is divisible by 400, it is also a leap year.
 *    - If neither of the above conditions is met, it is not a leap year.
 * 5. Print "leap year" if the conditions are true, otherwise print "no leap year".
 * 6. End the program.
 *
 * Preconditions: The program assumes the user will enter a valid integer for the year.
 * Postconditions: The program will output whether the given year is a leap year or not.
 * Edge Cases: 
 * - Years like 1900 (not a leap year) and 2000 (is a leap year) are correctly handled.
 *
 * Output:
 * The program will print either "leap year" or "no leap year" based on the input:
 * - For example, if the user inputs `2020`, the output will be `leap year`.
 * - If the user inputs `1900`, the output will be `no leap year`.
 *
 * Program Flow:
 * 1. Initialize `year` to store the user's input.
 * 2. Prompt for user input.
 * 3. Read input from the user.
 * 4. Evaluate if the year is a leap year:
 *    - If the year is divisible by 4 and not divisible by 100, print "leap year".
 *    - If the year is divisible by 400, print "leap year".
 *    - Otherwise, print "no leap year".
 * 5. End the program.
 */

#include <stdio.h>

int main() {
    int year; // Variable to store the input year

    printf("Enter the year to check whether it is a leap year or not: "); // Prompt the user
    scanf("%d", &year); // Read the year input

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("leap year"); // Print if it is a leap year
    } else {
        printf("no leap year"); // Print if it is not a leap year
    }

    return 0; // Indicate successful completion
}
