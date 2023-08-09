/*
 * File: index.c
 * Description: Main file for the student grade management system. This file allows
 *              user interaction for displaying grades, calculating average, and
 *              finding the highest score.
 */

#include "../include/all_student_grades.h"
#include "../include/calculate_the_average_value.h"
#include <stdio.h>

int main() {
  int choice;

  printf("Choose an option:\n");
  printf("1. Display All Student Grades\n");
  printf("2. Calculate Average Value\n");
  printf("3. Find Highest Score\n");
  scanf("%d", &choice); // Read user choice

  switch (choice) {
    case 1:
      display_all_student_grades(); // Display all student grades
      break;
    case 2:
      total_values();                // Calculate total values
      calculate_the_average_value(); // Calculate and display average value
      break;
    case 3:
      highest_score();               // Find and display the highest score
      break;
    default:
      printf("Invalid option selected.\n"); // Handle invalid input
  }

  return 0; // Return success
}
