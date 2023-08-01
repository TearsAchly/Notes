/*
 * Program Title: Enum Data Type Example
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates the use of the `enum` data type in C
 *              by defining an enumeration for difficulty levels and iterating through
 *              them using a loop and a `switch` statement to print each level.
 *
 * Logic:
 *        1. Define an `enum` type `myenum` with three values: `low`, `medium`, and `hard`.
 *        2. Declare an `enum` variable `level` and initialize it with the value `low`.
 *        3. Use a `for` loop to iterate through the values of the enum, from `low` to `hard`.
 *        4. Inside the loop, update the `level` variable and use a `switch` statement to 
 *           print the corresponding level as a string ("low", "medium", or "hard").
 *
 * Preconditions:
 *        - The `enum myenum` must be declared before the loop.
 *
 * Postconditions:
 *        - The program will print the string representation of each enum value in sequence:
 *          "low", "medium", "hard".
 *
 * Edge Cases:
 *        - Since the loop runs through all possible enum values from `low` to `hard`, no unexpected behavior is expected.
 *
 * Program Flow:
 * 1. The `enum` type `myenum` is defined with three values: `low`, `medium`, and `hard`.
 * 2. The variable `level` is declared and initialized to `low`.
 * 3. A `for` loop iterates through the values of the enum.
 * 4. In each iteration, the `switch` statement checks the current value of `level` and prints the corresponding string:
 *    - "low" for the value `low`.
 *    - "medium" for the value `medium`.
 *    - "hard" for the value `hard`.
 * 5. The program terminates after printing all the levels.
 */

#include <stdio.h>

// Define an enum with three levels of difficulty
enum myenum { low, medium, hard };

int main() {

  // Declare an enum variable and initialize it to 'low'
  enum myenum level = low;

  // Iterate through the enum values from 'low' to 'hard'
  for (int index_enum = low; index_enum <= hard; index_enum++) {

    // Set the current level to the enum value in the iteration
    level = index_enum;

    // Use a switch statement to print the string representation of each enum value
    switch (level) {
    case low:
      printf("low\n");
      break;
    case medium:
      printf("medium\n");
      break;
    case hard:
      printf("hard\n");
      break;
    }
  }

  return 0;
}

