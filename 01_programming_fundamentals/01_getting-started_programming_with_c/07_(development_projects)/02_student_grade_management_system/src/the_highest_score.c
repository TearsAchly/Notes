/*
 * File: the_highest_score.c
 * Description: Implementation of a function to find and display the highest score
 *              among student grades.
 */

#include "../include/all_student_grades.h"
#include <stdio.h>

extern int student_grades[];
extern int all_score;

int max = 0; // Initialize max score

void highest_score() {
  for (int i = 0; i < all_score; i++) {
    if (student_grades[i] > max) {
      max = student_grades[i]; // Update max if current grade is higher
    }
  }
  printf("Highest Score: %d\n", max); // Display the highest score
}
