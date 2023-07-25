/*
 * Program Title: Age Grouping
 * Author: Achly
 * Date: July 2023
 * Description: This program categorizes a person's age into specific age groups 
 *              based on user input.
 *
 * Logic:
 *        1. The function `age_category` takes an integer representing a person's age.
 *        2. Based on the value of the age, the function determines the person's age category:
 *           - Babies and Toddlers (age <= 5)
 *           - Children (6 <= age <= 10)
 *           - Teenager (11 <= age <= 18)
 *           - Mature (19 <= age <= 59)
 *           - Elderly (age >= 60)
 *        3. The category is printed accordingly.
 *
 * Preconditions: The input must be a valid integer for age.
 * Postconditions: The program will output the appropriate age group.
 * Edge Cases: Negative ages or unusually high ages are not explicitly handled.
 *
 * Program Flow:
 * 1. Declare an `int` variable `age` to store the user's age.
 * 2. Prompt the user to input their age.
 *    - Display the message: "Enter your current age:"
 * 3. Use `scanf` to read the user's input and store it in the `age` variable.
 * 4. Call the `age_category` function, passing the user's age as an argument.
 * 5. Inside the `age_category` function:
 *    - Check the value of `age`:
 *      - If `age <= 5`, print "babies and toddlers".
 *      - If `age` is between 6 and 10, print "children".
 *      - If `age` is between 11 and 18, print "teenager".
 *      - If `age` is between 19 and 59, print "mature".
 *      - If `age >= 60`, print "elderly".
 * 6. After printing the age category, the control returns to the `main` function.
 * 7. The program terminates after displaying the age group.
 */

#include <stdio.h>

/*
 * Function Name: age_category
 * Parameters: 
 *   - int age: The age of the person.
 * Returns: 
 *   - void: The function prints the corresponding age group.
 * Description: This function determines and prints the age category 
 *              based on the provided age.
 */
void age_category(int age) {
    if (age <= 5) {
        printf("babies and toddlers");
    } else if (age >= 6 && age <= 10) {
        printf("children");
    } else if (age >= 11 && age <= 18) {
        printf("teenager");
    } else if (age >= 19 && age <= 59) {
        printf("mature");
    } else {
        printf("elderly");
    }
}

int main() {
    int age; // Variable to store the user's input for age

    // Input age from user
    printf("Enter your current age: ");
    scanf("%d", &age);

    // Call function to determine age category
    age_category(age);

    return 0;
}
