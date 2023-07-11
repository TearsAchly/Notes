/*
 * Program Title: Simple Math Calculator
 * Author: Achly
 * Date: July 2023
 * Description: This program performs basic arithmetic operations (addition, subtraction,
 *              multiplication, division, and modulus) based on the user's input of
 *              mathematical operators and numbers.
 *
 * Logic:
 * 1. Declare variables for user-selected operation, result, and the two input numbers.
 * 2. Display a list of available mathematical operators for the user to select from.
 * 3. Read the user's choice of operator.
 * 4. Prompt the user to enter two numbers for the calculation.
 * 5. Use a switch-case statement to perform the operation based on the user's choice:
 *    - Case 1: Addition
 *    - Case 2: Subtraction
 *    - Case 3: Multiplication
 *    - Case 4: Division (with a check to prevent division by zero)
 *    - Case 5: Modulus
 * 6. Print the result of the operation.
 * 7. Handle invalid inputs for the operator.
 * 8. End the program.
 *
 * Preconditions: The program assumes the user will enter valid integers for both the operator
 *                and the numbers.
 * Postconditions: The program outputs the result of the selected arithmetic operation.
 * Edge Cases:
 * - Division by zero is checked to avoid runtime errors.
 * - Invalid operator selections are handled with an error message.
 *
 * Output:
 * The program prints the result of the arithmetic operation based on the user's input,
 * e.g., for input of `1` for addition and `5` and `3` as the numbers, the output will be `5 + 3 = 8`.
 *
 * Program Flow:
 * 1. Initialize variables for user input and results.
 * 2. Display operator options to the user.
 * 3. Read the operator choice from the user.
 * 4. Read two numbers from the user for the calculation.
 * 5. Execute the chosen operation using a switch statement:
 *    - For addition, subtraction, multiplication, division, or modulus.
 * 6. Print the result or an error message if applicable.
 * 7. End the program.
 */

#include <stdio.h>

int main() {
    int input_user; // Variable to store user-selected operation
    int result; // Variable to store the result of the calculation
    int a, b; // Variables to store user-input numbers

    // Display available mathematical operators
    printf("Select mathematical operators:\n");
    printf("1. + \n2. - \n3. * \n4. /\n5. %%\n\n");

    // Read user's choice of operator
    scanf("%d", &input_user);

    // Read numbers to calculate
    printf("\nEnter numbers to calculate: ");
    scanf("%d", &a);
    printf("Enter another number to calculate: ");
    scanf("%d", &b);

    // Perform the chosen operation
    switch (input_user) {
        case 1: // Addition
            result = a + b;
            printf("\n%d + %d = %d\n", a, b, result);
            break;
        case 2: // Subtraction
            result = a - b;
            printf("\n%d - %d = %d\n", a, b, result);
            break;
        case 3: // Multiplication
            result = a * b;
            printf("\n%d * %d = %d\n", a, b, result);
            break;
        case 4: // Division
            if (b != 0) { // Prevent division by zero
                result = a / b;
                printf("\n%d / %d = %d\n", a, b, result);
            } else {
                printf("\nError: Division by zero is undefined.\n");
            }
            break;
        case 5: // Modulus
            result = a % b;
            printf("\n%d %% %d = %d\n", a, b, result);
            break;
        default: // Invalid input
            printf("\nInvalid input\n");
    }

    return 0; // Indicate successful completion
}
