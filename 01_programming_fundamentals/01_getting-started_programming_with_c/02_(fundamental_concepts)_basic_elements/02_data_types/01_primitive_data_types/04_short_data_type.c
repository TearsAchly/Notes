/*
 * Program Title: Short Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates various short data types including
 *              short, signed short, and unsigned short.
 * Logic: The program declares various short types and initializes them with values.
 * Preconditions: The data types must be defined before use.
 * Postconditions: The values of the declared short types are printed to the console.
 * Edge Cases: Overflow can occur if values exceed the limits of the data types.
 *
 * Program Flow:
 * 1. The program starts execution from the `main` function.
 * 2. Several short data types are declared and initialized:
 *    - `short`: Initialized with the maximum positive value 32767.
 *    - `signed short`: Initialized with the minimum negative value -32768.
 *    - `signed short int`: An alternative way to declare a signed short with the maximum positive value 32767.
 *    - `unsigned short`: Initialized with 0, representing the lower boundary for unsigned short types.
 *    - `unsigned short int`: Another way to declare an unsigned short with a positive value.
 * 3. The values of these variables are printed using `printf`.
 * 4. The program returns `0`, indicating successful execution.
 */
#include <stdio.h>

int main() {
  short value = 32767;
  short int short_int_value = -32768;
  signed short signed_short_value = -32768;
  signed short int signed_short_int_value = 32767;
  unsigned short unsigned_short_value = 0;
  unsigned short int unsigned_short_int_value = 37856;

  printf("\nThe value of this data type is = %d", value);
  printf("\nThe signed_short_value of this data type is = %d", short_int_value);
  printf("\nThe short_int_value of this data type is = %d", signed_short_value);
  printf("\nThe signed_short_int_value of this data type is = %d",signed_short_int_value);
  printf("\nThe unsigned_short_value of this data type is = %d ",unsigned_short_value);
  printf("\nThe unsigned_short_int_value of this data type is = %d",unsigned_short_int_value);

  return 0;
}
