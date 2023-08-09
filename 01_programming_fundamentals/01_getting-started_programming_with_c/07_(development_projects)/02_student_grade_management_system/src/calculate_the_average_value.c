/*
 * File: calculate_the_average_value.c
 * Description: Implementation of functions to calculate the average value
 *              and total values of student grades.
 */

#include "../include/calculate_the_average_value.h"
#include "../include/all_student_grades.h"
#include <stdio.h>

int mean; // Mean value of grades

extern int student_grades[];
extern int all_score;

int sum = 0;

int total_values() {
  sum = 0; // Reset sum to 0 for each calculation
  // printf("\nCalculating total values...\n");
  
  for (int i = 0; i < all_score; i++) {
    sum += student_grades[i]; // Sum all student grades
  }
  return sum; // Return the total sum
}

void calculate_the_average_value() {
  mean = total_values() / all_score; // Calculate mean using total values
  printf("Average Value: %d\n", mean); // Display the average value
}
