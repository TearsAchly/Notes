/*
 * Program Title: Square Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a square 
 *              given the length of its side.
 * Logic: 
 *        1. Declare variables for side length, area, and perimeter.
 *        2. Prompt the user to enter the length of the side of the square.
 *        3. Read the side length input from the user.
 *        4. Calculate the area using the formula: Area = side * side.
 *        5. Calculate the perimeter using the formula: Perimeter = 4 * side.
 *        6. Print the calculated area and perimeter.
 *
 * Preconditions: The user must input a valid integer value for the side length.
 * Postconditions: The program outputs the calculated area and perimeter to the console.
 * Edge Cases: Input values less than or equal to zero may not represent a valid square.
 *
 * Program Flow:
 * 1. Declare integer variables for side length, area, and perimeter.
 * 2. Display a message prompting the user to enter the length of the side of the square.
 * 3. Read the side length input from the user.
 * 4. Calculate the area of the square using the formula: Area = side * side.
 * 5. Calculate the perimeter of the square using the formula: Perimeter = 4 * side.
 * 6. Display the calculated area and perimeter to the console.
 */

#include <stdio.h>

int main() {
    int side;       // Variable to store side length
    int Area;       // Variable to store area
    int Perimeter;  // Variable to store perimeter

    // Input side length
    printf("\nEnter the length of the side of the square: ");
    scanf("%d", &side);

    // Calculate area and perimeter
    Area = side * side;
    Perimeter = 4 * side;

    // Print results
    printf("\nThe area of this square is: %d cm²", Area);
    printf("\nThe perimeter of this square is: %d cm", Perimeter);
  
    return 0;
}

