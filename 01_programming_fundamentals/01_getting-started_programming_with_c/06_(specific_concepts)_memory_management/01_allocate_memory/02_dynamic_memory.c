/*
 * Program Title: Dynamic Memory Allocation Example
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates dynamic memory allocation in C
 *              using `malloc` and `calloc` to allocate memory for integer
 * pointers.
 *
 * Logic:
 *        1. Declare two integer pointers, `ptr1` and `ptr2`.
 *        2. Use `malloc` to allocate memory for one integer and assign it to
 * `ptr1`.
 *        3. Use `calloc` to allocate memory for one integer and initialize it
 * to zero, assigning it to `ptr2`.
 *        4. Print the memory addresses stored in `ptr1` and `ptr2` to verify
 * that memory was allocated.
 *
 * Preconditions:
 *        - Memory must be available in the system for allocation. If allocation
 * fails, the pointers will return `NULL`.
 *
 * Postconditions:
 *        - The program will print the memory addresses where the dynamically
 * allocated memory resides.
 *
 * Edge Cases:
 *        - If memory allocation fails, the program will still print a `NULL`
 * pointer.
 *
 * Program Flow:
 * 1. The program declares two integer pointers `ptr1` and `ptr2`.
 * 2. Memory is allocated for one integer using `malloc` and assigned to `ptr1`.
 * 3. Memory is allocated for one integer using `calloc`, which also initializes
 * it to zero, and assigned to `ptr2`.
 * 4. The memory addresses held by `ptr1` and `ptr2` are printed using the `%p`
 * format specifier.
 * 5. The program ends after printing the addresses.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

  int *ptr1, *ptr2;

  // Allocate memory for one integer using malloc
  ptr1 = malloc(sizeof(*ptr1));

  // Allocate memory for one integer using calloc and initialize it to 0
  ptr2 = calloc(1, sizeof(*ptr2));

  // Print the memory address stored in ptr1
  printf("Memory address allocated by malloc: %p\n", ptr1);

  // Print the memory address stored in ptr2
  printf("Memory address allocated by calloc: %p\n", ptr2);

  // Free the allocated memory
  free(ptr1);
  free(ptr2);

  return 0;
}
