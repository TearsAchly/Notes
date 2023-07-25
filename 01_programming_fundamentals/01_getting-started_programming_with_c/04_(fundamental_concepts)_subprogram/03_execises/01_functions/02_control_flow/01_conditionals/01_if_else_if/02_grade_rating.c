/*
 * Program Title: Grade Rating
 * Author: Achly
 * Date: July 2023
 * Description: This program determines the academic grade rating based on 
 *              a user's grade input.
 *
 * Logic:
 *        1. The function `grade_rank` takes a numerical grade as input.
 *        2. Based on the value of the grade, the function determines the grade rating:
 *           - "A" for grades >= 80.00
 *           - "A-" for grades between 77.5 and 79.99
 *           - "A/B" for grades between 75.00 and 77.49, etc.
 *        3. The grade rating is printed accordingly.
 *
 * Preconditions: The input must be a valid floating-point number representing the grade.
 * Postconditions: The program will output the appropriate grade rating.
 * Edge Cases: If the grade is lower than 55, the output will be "E".
 *
 * Program Flow:
 * 1. Declare a `double` variable `grade` to store the user's input grade.
 * 2. Prompt the user to input their grade:
 *    - Display the message "Enter the grade given by your math teacher:".
 * 3. Read the user input and store it in the `grade` variable.
 * 4. Call the `grade_rank` function, passing the `grade` as its argument.
 * 5. Inside the `grade_rank` function:
 *    - Check the value of the grade:
 *      - If the grade is greater than or equal to 80, print "A".
 *      - If the grade is between 77.5 and 79.99, print "A-".
 *      - If the grade is between 75.00 and 77.49, print "A/B", etc.
 *      - For grades below 55, print "E".
 * 6. After printing the corresponding grade rating, return control back to the `main` function.
 * 7. The program terminates after displaying the grade rating.
 */

#include <stdio.h>

/*
 * Function Name: grade_rank
 * Parameters: 
 *   - double grade: The academic grade.
 * Returns: 
 *   - void: The function prints the corresponding grade rating.
 * Description: This function determines and prints the grade rating 
 *              based on the provided grade.
 */
void grade_rank(double grade) {
    if (grade >= 80.00) {
        printf("A");
    } else if (grade >= 77.5 && grade <= 79.99) {
        printf("A-");
    } else if (grade >= 75.00 && grade <= 77.49) {
        printf("A/B");
    } else if (grade >= 72.50 && grade <= 74.99) {
        printf("B+");
    } else if (grade >= 70.00 && grade <= 72.49) {
        printf("B");
    } else if (grade >= 67.50 && grade <= 69.00) {
        printf("B-");
    } else if (grade >= 65.00 && grade <= 67.49) {
        printf("B/C");
    } else if (grade >= 62.50 && grade <= 64.49) {
        printf("C+");
    } else if (grade >= 60.00 && grade <= 62.49) {
        printf("C");
    } else if (grade >= 57.00 && grade <= 59.99) {
        printf("C-");
    } else if (grade >= 55.00 && grade <= 57.49) {
        printf("D");
    } else {
        printf("E");
    }
}

int main() {
    double grade; // Variable to store user-input grade

    // Input grade from user
    printf("Enter the grade given by your math teacher: ");
    scanf("%lf", &grade);

    // Call function to determine grade rating
    grade_rank(grade);

    return 0;
}
