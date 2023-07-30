/*
 * Program Title: Alternating Harmonic Series
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of an alternating harmonic series.
 *
 * Logic:
 *        1. Define a recursive function `alternating_harmonic_series` that takes three parameters:
 *           a. `n` - current term.
 *           b. `max` - total number of terms.
 *           c. `sum` - cumulative sum.
 *        2. If `n` is greater than `max`, return the cumulative `sum`.
 *        3. If `n` is even, subtract the term from the sum and print it.
 *        4. If `n` is odd, add the term to the sum and print it.
 *        5. Call `alternating_harmonic_series` recursively, incrementing `n` by 1.
 *
 * Preconditions: The maximum number of terms (`max`) should be a positive integer.
 * Postconditions: The program prints the series and outputs the total sum of the alternating harmonic series.
 * Edge Cases: If `max` is less than 1, the function will terminate immediately.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The function `alternating_harmonic_series` is called with the initial term set to 2.
 * 3. The recursive function calculates the series terms and their cumulative sum.
 * 4. The result is printed after the recursion completes.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Current Term (n) | Condition Check     | Action                                    | Cumulative Sum          |
 * |-------------------|----------------------|-----------------------------------------|-------------------------|
 * | 2                 | 2 <= 4               | Print: - (1/20)                         | 1.0 - 0.05 = 0.95       |
 * | 3                 | 3 <= 4               | Print: + (1/30)                         | 0.95 + 0.0333 = 0.9833  |
 * | 4                 | 4 <= 4               | Print: - (1/40)                         | 0.9833 - 0.025 = 0.9583 |
 * | 5                 | 5 > 4                | Exit recursion                          | Final Result: 0.9583    |
 */

#include <stdio.h>

/*
 * Function Name: alternating_harmonic_series
 * Parameters: 
 *   int n - current term, 
 *   int max - total number of terms, 
 *   float sum - cumulative sum
 * Returns: 
 *   float - the sum of the alternating harmonic series
 * Description: This function calculates the alternating harmonic series up to the given number of terms.
 */
float alternating_harmonic_series(int n, int max, float sum) {
    if (n > max) { // Check if current term exceeds maximum
        return sum; // Return cumulative sum
    }
    if (n % 2 == 0) { // Even terms
        printf(" - (1/%d)", n * 10); // Print negative term
        sum -= 1.0 / (n * 10); // Subtract from sum
    }
    if (n % 2 != 0) { // Odd terms
        printf(" + (1/%d)", n * 10); // Print positive term
        sum += 1.0 / (n * 10); // Add to sum
    }
    return alternating_harmonic_series(n + 1, max, sum); // Recursive call
}

/*
 * Function Name: main
 * Description: The main function initializes the program and calculates 
 *              the sum of the alternating harmonic series starting from 2.
 * Returns: 
 *   int - status code (0 for success)
 */
int main() {
    printf("1"); // Print the starting term of the series
    int n = 4; // Maximum number of terms
    float result = alternating_harmonic_series(2, n, 1.0); // Start recursion with initial term 2
    printf(" = %f", result); // Print the total sum
    return 0; // Exit the program
}
