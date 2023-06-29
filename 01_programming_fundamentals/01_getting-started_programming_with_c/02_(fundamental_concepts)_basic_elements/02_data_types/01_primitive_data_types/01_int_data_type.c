/*
 * Program Title: Integer Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates various integer data types including int, signed int, unsigned int, and their values.
 *
 * Logic: The program declares various integer types and initializes them with values.
 * Preconditions: The data types must be defined before use.
 * Postconditions: The values of the declared integer types are printed to the console.
 * Edge Cases: Overflow can occur if values exceed the limits of the data types.
 *
 * Program Flow:
 * 1. The program starts with the `main` function.
 * 2. Several integer variables of different types are declared and initialized:
 *      - `int_value` is a regular integer initialized to 110.
 *      - `signed_value` is a signed integer initialized to -10.
 *      - `signed_int_value` is another signed integer declared using an alternative syntax.
 *      - `unsigned_value` is an unsigned integer initialized to 10.
 *      - `unsigned_int_value` is another unsigned integer using an alternative syntax.
 * 3. The values of these variables are printed to the console using `printf`.
 * 4. The program ends with `return 0;`, indicating successful execution.
 * 5. The program terminates and returns `0` to the operating system.
 */

#include <stdio.h>

int main() {
    int int_value = 110;                       // Regular integer
    signed signed_value = -10;                 // Signed integer
    signed int signed_int_value = -10;        // Signed integer (alternative declaration)
    unsigned unsigned_value = 10;               // Unsigned integer
    unsigned int unsigned_int_value = 10;     // Unsigned integer (alternative declaration)

    // Print the values of the different integer data types
    printf("\nThe int_value of this data type is = %d", int_value);
    printf("\nThe signed_value of this data type is = %d", signed_value);
    printf("\nThe signed_int_value of this data type is = %d", signed_int_value);
    printf("\nThe unsigned_value of this data type is = %d", unsigned_value);
    printf("\nThe unsigned_int_value of this data type is = %d", unsigned_int_value);

    return 0;
}
