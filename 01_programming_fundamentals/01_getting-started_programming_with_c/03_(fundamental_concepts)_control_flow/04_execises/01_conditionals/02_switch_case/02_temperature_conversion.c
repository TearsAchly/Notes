/*
 * Program Title: Temperature Conversion
 * Author: Achly
 * Date: July 2023
 * Description: This program converts temperatures between Celsius, Fahrenheit, Reamur,
 *              and Kelvin based on the user's choice.
 *
 * Logic:
 * 1. Declare a variable to store the user's selection of conversion program.
 * 2. Define constants for the conversion calculations.
 * 3. Display a menu of available conversion options for the user.
 * 4. Read the user's choice of conversion.
 * 5. Use a switch-case statement to perform the selected conversion based on user input:
 *    - Convert Celsius to Fahrenheit, Reamur, or Kelvin.
 *    - Convert Fahrenheit to Celsius, Reamur, or Kelvin.
 *    - Convert Reamur to Celsius, Fahrenheit, or Kelvin.
 *    - Convert Kelvin to Celsius, Fahrenheit, or Reamur.
 * 6. Print the result of the conversion.
 * 7. Handle invalid inputs for the conversion selection.
 * 8. End the program.
 *
 * Preconditions: The program assumes that the user will enter valid numerical inputs for temperatures
 *                and a valid selection from the conversion menu.
 * Postconditions: The program outputs the converted temperature based on the user's choice.
 * Edge Cases:
 * - The program does not check for negative values for Kelvin, as it should be non-negative.
 *
 * Output:
 * The program prints the result of the temperature conversion based on the user's input,
 * e.g., for input of `1` for Celsius to Fahrenheit and `25` for the temperature, the output will be `25.0°C to °F = 77.0°F`.
 *
 * Program Flow:
 * 1. Initialize variables and constants needed for conversion.
 * 2. Display the conversion options to the user.
 * 3. Read the user's conversion selection.
 * 4. Read the temperature input based on the selected conversion.
 * 5. Execute the chosen conversion using a switch statement:
 *    - Perform the conversion based on the user's input.
 * 6. Print the result or an error message if applicable.
 * 7. End the program.
 */

#include <stdio.h>

int main() {
    int select_proggram; // Variable to store user's selection of conversion program
    // Constants for conversion calculations
    double fix_num1 = 1.8;    // 9/5
    double fix_num2 = 0.8;    // 4/5
    double fix_num3 = 1.25;   // 5/4
    double fix_num4 = 32;     // offset for Fahrenheit
    double fix_num5 = 273.15; // offset for Kelvin

    double T; // Variable to store the converted temperature
    double C, F, R, K; // Variables to store temperatures in different scales

    // Display available conversion options
    printf("Select Program\n\n");
    printf("\n1. Celsius to Fahrenheit\n2. Celsius to Reamur\n3. Celsius to Kelvin\n");
    printf("\n4. Fahrenheit to Celsius\n5. Fahrenheit to Reamur\n6. Fahrenheit to Kelvin\n");
    printf("\n7. Reamur to Celsius\n8. Reamur to Fahrenheit\n9. Reamur to Kelvin\n");
    printf("\n10. Kelvin to Celsius\n11. Kelvin to Fahrenheit\n12. Kelvin to Reamur\n\n");

    // Read user's choice of conversion
    scanf("%d", &select_proggram);

    // Perform the chosen conversion
    switch (select_proggram) {
        case 1: // Celsius to Fahrenheit
            printf("Enter Celsius: ");
            scanf("%lf", &C);
            T = (C * fix_num1) + fix_num4;
            printf("%lf°C to °F = %lf°F\n", C, T);
            break;
        case 2: // Celsius to Reamur
            printf("Enter Celsius: ");
            scanf("%lf", &C);
            T = C * fix_num2;
            printf("%lf°C to °R = %lf°R\n", C, T);
            break;
        case 3: // Celsius to Kelvin
            printf("Enter Celsius: ");
            scanf("%lf", &C);
            T = C + fix_num5;
            printf("%lf°C to °K = %lf°K\n", C, T);
            break;
        case 4: // Fahrenheit to Celsius
            printf("Enter Fahrenheit: ");
            scanf("%lf", &F);
            T = (F - fix_num4) / fix_num1;
            printf("%lf°F to °C = %lf°C\n", F, T);
            break;
        case 5: // Fahrenheit to Reamur
            printf("Enter Fahrenheit: ");
            scanf("%lf", &F);
            T = (F - fix_num4) * fix_num2 / fix_num1;
            printf("%lf°F to °R = %lf°R\n", F, T);
            break;
        case 6: // Fahrenheit to Kelvin
            printf("Enter Fahrenheit: ");
            scanf("%lf", &F);
            T = (F - fix_num4) / fix_num1 + fix_num5;
            printf("%lf°F to °K = %lf°K\n", F, T);
            break;
        case 7: // Reamur to Celsius
            printf("Enter Reamur: ");
            scanf("%lf", &R);
            T = R * fix_num3;
            printf("%lf°R to °C = %lf°C\n", R, T);
            break;
        case 8: // Reamur to Fahrenheit
            printf("Enter Reamur: ");
            scanf("%lf", &R);
            T = (R * fix_num1) + fix_num4;
            printf("%lf°R to °F = %lf°F\n", R, T);
            break;
        case 9: // Reamur to Kelvin
            printf("Enter Reamur: ");
            scanf("%lf", &R);
            T = (R * fix_num3) + fix_num5;
            printf("%lf°R to °K = %lf°K\n", R, T);
            break;
        case 10: // Kelvin to Celsius
            printf("Enter Kelvin: ");
            scanf("%lf", &K);
            T = K - fix_num5;
            printf("%lf°K to °C = %lf°C\n", K, T);
            break;
        case 11: // Kelvin to Fahrenheit
            printf("Enter Kelvin: ");
            scanf("%lf", &K);
            T = (K - fix_num5) * fix_num1 + fix_num4;
            printf("%lf°K to °F = %lf°F\n", K, T);
            break;
        case 12: // Kelvin to Reamur
            printf("Enter Kelvin: ");
            scanf("%lf", &K);
            T = (K - fix_num5) * fix_num2;
            printf("%lf°K to °R = %lf°R\n", K, T);
            break;
        default: // Invalid input
            printf("Invalid input\n");
    }

    return 0; // Indicate successful completion
}
