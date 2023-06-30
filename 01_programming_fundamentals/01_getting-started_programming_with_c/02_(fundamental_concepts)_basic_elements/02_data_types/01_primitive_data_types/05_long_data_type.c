/*
 * Program Title: Long Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates various long data types including long, signed long, unsigned long, and their maximum values.
 *
 * Logic: The program declares various long types and initializes them with maximum values.
 * Preconditions: The data types must be defined before use.
 * Postconditions: The maximum values of the declared long types are printed to the console.
 * Edge Cases: Overflow can occur if values exceed the limits of the data types.
 *
 * Program Flow:
 * 1. The program starts execution from the `main` function.
 * 2. Various long data types are declared and initialized to their maximum values:
 *    - `long`: Regular long initialized to `LONG_MAX`.
 *    - `long int`: Another representation of a long initialized to `LONG_MAX`.
 *    - `signed long`: A signed long initialized to `LONG_MAX`.
 *    - `signed long int`: Another representation of signed long initialized to `LONG_MAX`.
 *    - `unsigned long`: An unsigned long initialized to `ULONG_MAX`.
 *    - `unsigned long int`: Another representation of unsigned long initialized to `ULONG_MAX`.
 *    - `long long`: A long long initialized to `LLONG_MAX`.
 *    - `long long int`: Another representation of long long initialized to `LLONG_MAX`.
 *    - `signed long long`: A signed long long initialized to `LLONG_MAX`.
 *    - `signed long long int`: Another representation of signed long long initialized to `LLONG_MAX`.
 *    - `unsigned long long`: An unsigned long long initialized to `ULLONG_MAX`.
 *    - `unsigned long long int`: Another representation of unsigned long long initialized to `ULLONG_MAX`.
 *    - `long double`: A long double initialized to `LDBL_MAX`.
 * 3. The maximum values of these variables are printed to the console using `printf`.
 * 4. The program returns `0`, indicating successful execution.
 */

#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    long long_value = LONG_MAX;                         // Regular long
    long int long_int_value = LONG_MAX;                 // Long int
    signed long signed_long_value = LONG_MAX;           // Signed long
    signed long int signed_long_int_value = LONG_MAX;   // Signed long int
    unsigned long unsigned_long_value = ULONG_MAX;      // Unsigned long
    unsigned long int unsigned_long_int_value = ULONG_MAX; // Unsigned long int

    long long long_long_value = LLONG_MAX;              // Long long
    long long int long_long_int_value = LLONG_MAX;      // Long long int
    signed long long signed_long_long_value = LLONG_MAX; // Signed long long
    signed long long int signed_long_long_int_value = LLONG_MAX; // Signed long long int
    unsigned long long unsigned_long_long_value = ULLONG_MAX; // Unsigned long long
    unsigned long long int unsigned_long_long_int_value = ULLONG_MAX; // Unsigned long long int

    long double long_double_value = LDBL_MAX;           // Long double

    // Print the maximum values of long and long long data types
    printf("Max value of long: %ld\n", long_value);
    printf("Max value of long int: %ld\n", long_int_value);
    printf("Max value of signed long: %ld\n", signed_long_value);
    printf("Max value of signed long int: %ld\n", signed_long_int_value);
    printf("Max value of unsigned long: %lu\n", unsigned_long_value);
    printf("Max value of unsigned long int: %lu\n", unsigned_long_int_value);
    printf("Max value of long long: %lld\n", long_long_value);
    printf("Max value of long long int: %lld\n", long_long_int_value);
    printf("Max value of signed long long: %lld\n", signed_long_long_value);
    printf("Max value of signed long long int: %lld\n", signed_long_long_int_value);
    printf("Max value of unsigned long long: %llu\n", unsigned_long_long_value);
    printf("Max value of unsigned long long int: %llu\n", unsigned_long_long_int_value);
    printf("Max value of long double: %Lg\n", long_double_value);

    return 0;
}
