/*
 * Program Title: Simple Math Calculator
 * Author: Achly
 * Date: July 2023
 * Description: This program performs basic arithmetic operations (+, -, *, /, %) 
 *              based on the user's choice.
 *
 * Logic:
 *        1. The program prompts the user to select a mathematical operation.
 *        2. Based on the selection, the appropriate function (addition, subtraction, etc.) is called.
 *        3. Each function performs the calculation and prints the result to the screen.
 *        4. Special cases such as division and modulus by zero are handled with error messages.
 *
 * Preconditions:
 *        - The user must input valid integer numbers for the operations.
 *        - A valid operation choice (1 to 5) must be selected.
 *
 * Postconditions:
 *        - The program outputs the result of the selected arithmetic operation.
 *
 * Edge Cases:
 *        - If division or modulus by zero is selected, an error message is displayed.
 *        - If the user selects an invalid operation (anything outside 1 to 5), an error message is displayed.
 *
 * Program Flow:
 * 1. The program prompts the user to select a mathematical operation.
 * 2. The user inputs two integers as the operands for the operation.
 * 3. Based on the selected operation, the appropriate function (addition, subtraction, multiplication, etc.) is called.
 * 4. The program prints the result of the operation.
 * 5. If division or modulus by zero is selected, the program displays an error message.
 * 6. If an invalid operation is selected, the program displays an error message.
 * 7. The program ends after displaying the result.
 */

#include <stdio.h>

/*
 * Function Name: sum
 * Parameters:
 *   - int a: The first operand
 *   - int b: The second operand
 * Returns: void
 * Description: Performs addition of two integers and prints the result.
 */
void sum(int a, int b) {
  printf("\n%d + %d = %d", a, b, a + b);
}

/*
 * Function Name: sub
 * Parameters:
 *   - int a: The first operand
 *   - int b: The second operand
 * Returns: void
 * Description: Performs subtraction of two integers and prints the result.
 */
void sub(int a, int b) {
  printf("\n%d - %d = %d", a, b, a - b);
}

/*
 * Function Name: mul
 * Parameters:
 *   - int a: The first operand
 *   - int b: The second operand
 * Returns: void
 * Description: Performs multiplication of two integers and prints the result.
 */
void mul(int a, int b) {
  printf("\n%d * %d = %d", a, b, a * b);
}

/*
 * Function Name: div
 * Parameters:
 *   - int a: The first operand
 *   - int b: The second operand
 * Returns: void
 * Description: Performs division of two integers and prints the result. Handles division by zero by printing an error message.
 */
void div(int a, int b) {
  if (b != 0) {
    printf("\n%d / %d = %d", a, b, a / b);
  } else {
    printf("\nError: Division by zero is not allowed.");
  }
}

/*
 * Function Name: mod
 * Parameters:
 *   - int a: The first operand
 *   - int b: The second operand
 * Returns: void
 * Description: Performs modulus operation on two integers and prints the result. Handles modulus by zero by printing an error message.
 */
void mod(int a, int b) {
  if (b != 0) {
    printf("\n%d %% %d = %d", a, b, a % b);
  } else {
    printf("\nError: Modulus by zero is not allowed.");
  }
}

int main() {
  int input_user; // Variable to store user's choice of operation
  int a, b;       // Variables to store the two numbers for the operation

  // Display operation choices to the user
  printf("Select a mathematical operation:\n");
  printf("1. + (Addition)\n2. - (Subtraction)\n3. * (Multiplication)\n4. / (Division)\n5. %% (Modulus)\n\n");

  // Input user choice of operation
  scanf("%d", &input_user);

  // Input numbers from user
  printf("\nEnter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  // Perform the operation based on user choice
  switch (input_user) {
    case 1:
      sum(a, b);
      break;
    case 2:
      sub(a, b);
      break;
    case 3:
      mul(a, b);
      break;
    case 4:
      div(a, b);
      break;
    case 5:
      mod(a, b);
      break;
    default:
      printf("\nInvalid input");
  }

  return 0;
}
