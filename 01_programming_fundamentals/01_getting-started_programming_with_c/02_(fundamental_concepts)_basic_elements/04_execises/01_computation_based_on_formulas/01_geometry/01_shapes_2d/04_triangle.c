/*
 * Program Title: Triangle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a triangle
 *              given the lengths of its sides and its base and height.
 * Logic:
 *        1. Declare variables for the lengths of the sides, base, height, area, and perimeter.
 *        2. Prompt the user to enter the lengths of the sides, base, and height of the triangle.
 *        3. Read the input values from the user.
 *        4. Calculate the area using the formula: Area = 0.5 * base * height.
 *        5. Calculate the perimeter using the formula: Perimeter = a + b + c.
 *        6. Print the calculated area and perimeter.
 *
 * Preconditions: The user must input valid integer values for the lengths of
 * the sides, base, and height. Postconditions: The program outputs the
 * calculated area and perimeter to the console. Edge Cases: Input values for
 * the sides that do not satisfy the triangle inequality may lead to an invalid
 * triangle.
 *
 * Program Flow:
 * 1. Declare integer variables for the lengths of sides A, B, and C, the base,
 * height, area, and perimeter.
 * 2. Display messages prompting the user to enter the lengths of sides A, B, C,
 * the base, and the height.
 * 3. Read the side lengths, base, and height input from the user.
 * 4. Calculate the area of the triangle using the formula: Area = 0.5 * base *
 * height.
 * 5. Calculate the perimeter of the triangle using the formula: Perimeter = a +
 * b + c.
 * 6. Display the calculated area and perimeter to the console.
 */

#include <stdio.h>

int main() {
  int a, b, c;   // Lengths of the sides
  int base;      // Base of the triangle
  int height;    // Height of the triangle
  float Area;    // Variable to store area
  int Perimeter; // Variable to store perimeter

  // Input lengths of sides, base, and height
  printf("\nEnter the length A of the triangle: ");
  scanf("%d", &a);
  printf("\nEnter the length B of the triangle: ");
  scanf("%d", &b);
  printf("\nEnter the length C of the triangle: ");
  scanf("%d", &c);
  printf("\nEnter the base of the triangle: ");
  scanf("%d", &base);
  printf("\nEnter the height of the triangle : ");
  scanf("%d", &height);

  // Calculate the area and perimeter
  Area = 0.5 * base * height;
  Perimeter = a + b + c;

  // Print the results
  printf("\nThe area of this triangle is : %0.2fcm²", Area);
  printf("\nThe Perimeter of this triangle is : %dcm", Perimeter); 

  return 0; 
}
