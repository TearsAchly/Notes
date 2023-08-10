/*
 * File: index.c
 * Description: Main file for the student grade management system. This file
 * allows user interaction for displaying grades, calculating average, and
 *              finding the highest score.
 */

#include "../include/all_student_grades.h"
#include "../include/calculate_the_average_value.h"
#include <stdio.h>

int main() {

  int choice;
  do {

    printf("\n===============================\n");
    printf(" Student Grade Management System \n");
    printf("===============================\n");
    printf("Choose an option:\n");
    printf("1. Display All Student Grades\n");
    printf("2. Calculate Average Value\n");
    printf("3. Find Highest Score\n");
    printf("4. Find Lowest Score\n");
    printf("5.exit\n");
    printf("===============================\n");
    scanf("%d", &choice); // Read user choice

    printf("\n"); // Add newline for better separation

    switch (choice) {
    case 1:
      display_all_student_grades(); // Display all student grades
      break;
    case 2:
      total_values();                // Calculate total values
      calculate_the_average_value(); // Calculate and display average value
      break;
    case 3:
      highest_score(); // Find and display the highest score
      break;
    case 4:
      lowest_score(); // Find and display the lowest score
      break;
    case 5:
      printf("exit Program");
      break;
    default:
      printf("Invalid option selected. Please try again.\n"); // Handle invalid
                                                              // input
    }

    printf("\n===============================\n");
    printf("   End of the Program         \n");
    printf("===============================\n");

  } while (choice != 5);

  return 0; // Return success
}
