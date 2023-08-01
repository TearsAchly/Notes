/*
 * Program Title: Union Data Type Example
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates the use of the `union` data type in C
 *              by creating a union to store a string (name) and printing the stored value.
 *
 * Logic:
 *        1. Define a union `myunion` that contains a character array `name` with a size of 99.
 *        2. Declare a union variable `biodata`.
 *        3. Use the `strcpy` function to copy the string "achly" into the `name` field of the union.
 *        4. Print the value of `name` using the `printf` function.
 *
 * Preconditions:
 *        - The `union myunion` must be declared before accessing its fields.
 *        - The character array `name` in the union must be initialized with a valid string before printing.
 *
 * Postconditions:
 *        - The program will output the string stored in the `name` field of the union.
 *
 * Edge Cases:
 *        - Since this program uses only one field of the union, there are no immediate concerns with overwriting other data, which is a common concern when multiple fields are used in a union.
 *
 * Program Flow:
 * 1. The union `myunion` is declared with one field: a character array `name` with a size of 99.
 * 2. The variable `biodata` of type `union myunion` is declared.
 * 3. The string "achly" is copied into the `name` field using `strcpy`.
 * 4. The value of the `name` field is printed using `printf`.
 * 5. The program terminates.
 */

#include <stdio.h>
#include <string.h>

// Define a union that can store a string
union myunion {
  char name[99];
};

int main() {

  // Declare a union variable
  union myunion biodata;

  // Copy the string "achly" into the name field of the union
  strcpy(biodata.name, "achly");

  // Print the value of the name field
  printf("hello %s ", biodata.name);

  return 0;
}

