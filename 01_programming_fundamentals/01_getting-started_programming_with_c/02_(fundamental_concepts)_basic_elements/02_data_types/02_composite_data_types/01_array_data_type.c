/*
 * Program Title: Array Data Type with Multidimensional Array
 * Author: Achly
 * Date: October 2024
 * Description: This program demonstrates how to declare and initialize both a 
 *              one-dimensional array and a two-dimensional array (matrix) in C, 
 *              and how to print their elements in a formatted way.
 *
 * Logic:
 *        1. Declare a one-dimensional integer array `myarr` with 10 elements 
 *           initialized to values 1 through 10.
 *        2. Declare a two-dimensional integer array `matrix` (3x3 matrix) with 
 *           predefined values.
 *        3. Use a `for` loop to iterate through the elements of the one-dimensional array.
 *        4. Use nested `for` loops to iterate through the elements of the two-dimensional array.
 *        5. Format the output to include square brackets around each element 
 *           and print the arrays in a clean, structured manner.
 *
 * Preconditions:
 *        - The array `myarr` is initialized with exactly 10 integer values.
 *        - The two-dimensional array `matrix` contains predefined values with 3 rows and 3 columns.
 *
 * Postconditions:
 *        - The program will output the elements of `myarr` in the format:
 *          { [1], [2], [3], [4], [5], [6], [7], [8], [9], [10] }
 *        - The program will output the elements of `matrix` in the format:
 *          { [2] [6] [7], [3] [6] [2] }
 *
 * Edge Cases:
 *        - The program assumes `myarr` always contains 10 elements and `matrix` is 3x3. If the size changes, 
 *          loop conditions should be updated accordingly.
 *
 * Program Flow:
 * 1. The one-dimensional array `myarr` is declared and initialized with values 1 to 10.
 * 2. The two-dimensional array `matrix` is declared and initialized with predefined values.
 * 3. The program prints the opening curly brace `{` for `myarr`.
 * 4. The `for` loop iterates through each element of `myarr`, printing its value enclosed in square brackets `[ ]`.
 * 5. A comma is printed after each element of `myarr` except the last one. After the loop ends, the closing curly brace `}` is printed.
 * 6. The program prints the opening curly brace `{` for `matrix`.
 * 7. Nested `for` loops iterate through each element of `matrix`, printing its value in square brackets `[ ]` with commas separating rows.
 * 8. After all matrix elements are printed, the closing curly brace `}` is printed, and the program ends with a return statement.
 */

#include <stdio.h>

int main() {

  // Declare and initialize a one-dimensional array with 10 elements
  int myarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Declare and initialize a 2x3 two-dimensional array (matrix)
  int matrix[2][3] = {{2, 6, 7}, {3, 6, 2}};

  // Print the one-dimensional array
  printf("{");
  for (int index_array = 0; index_array < 10; index_array++) {
    printf(" [%d] ", myarr[index_array]);
    if (index_array < 9) {
      printf(",");
    }
  }
  printf("}\n");

  // Print the two-dimensional array (matrix)
  printf("{");
  for (int index_matrix = 0; index_matrix < 2; index_matrix++) {
    for (int index_matrix_inner = 0; index_matrix_inner < 3; index_matrix_inner++) {
      printf(" [%d] ", matrix[index_matrix][index_matrix_inner]);
    }
    if (index_matrix < 1) {
      printf(",");
    }
  }
  printf("}");

  return 0;
}
