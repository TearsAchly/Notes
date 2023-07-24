/*
 * Program Title: Parallelogram Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a parallelogram 
 *              given the lengths of its sides, base, and height.
 *
 * Logic:
 *        1. Create a function `calculate_parallelogram` that takes the side lengths, 
 *           base, and height as parameters.
 *        2. Inside the function, calculate the area using the formula:
 *           area = base * height.
 *        3. Calculate the perimeter using the formula: perimeter = 2 * (a + b).
 *        4. Print the calculated area and perimeter.
 *
 * Preconditions: The input side lengths, base, and height should be positive integers.
 * Postconditions: The program outputs the area and perimeter of the parallelogram.
 * Edge Cases: If any side length, base, or height is less than or equal to zero, 
 *              the area and perimeter cannot be calculated meaningfully.
 */

#include <stdio.h>

/*
 * Function Name: calculate_parallelogram
 * Parameters: 
 *   - int a: Length of side A.
 *   - int b: Length of side B.
 *   - int base: The base length of the parallelogram.
 *   - int height: The height of the parallelogram.
 * Returns: 
 *   - int: Always returns 0.
 * Description: Calculates the area and perimeter of a parallelogram 
 *              using the given side lengths, base, and height.
 */
int calculate_parallelogram(int a, int b, int base, int height) {
    int area;      // Variable to store area
    int perimeter; // Variable to store perimeter

    // Calculate area and perimeter
    area = base * height;               // Area formula for parallelogram
    perimeter = 2 * (a + b);            // Perimeter formula for parallelogram

    // Print results
    printf("\nThe area of this parallelogram is: %d cm²", area);
    printf("\nThe perimeter of this parallelogram is: %d cm", perimeter);

    return 0; // Indicate completion of the function
}

int main() {
    int a, b;    // Variables to store the lengths of the sides
    int height;  // Variable to store height
    int base;    // Variable to store base length

    // Input lengths of sides, base, and height
    printf("\nEnter the length A of the parallelogram: ");
    scanf("%d", &a);
    printf("\nEnter the length B of the parallelogram: ");
    scanf("%d", &b);
    printf("\nEnter the base of the parallelogram: ");
    scanf("%d", &base);
    printf("\nEnter the height of the parallelogram: ");
    scanf("%d", &height);

    // Calculate and display parallelogram properties
    calculate_parallelogram(a, b, base, height);

    return 0; // Program termination
}
