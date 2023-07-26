/*
 * Program Title: Temperature Conversion
 * Author: Achly
 * Date: July 2023
 * Description: This program converts temperatures between Celsius, Fahrenheit, Reamur, 
 *              and Kelvin using user-defined functions for different conversions.
 *
 * Logic:
 *        1. The user selects the conversion type (e.g., Celsius to Fahrenheit).
 *        2. Based on the selection, the corresponding conversion function is called.
 *        3. The function performs the conversion using appropriate formulas and constants.
 *        4. The result is printed on the screen.
 *
 * Preconditions:
 *        - The user inputs a valid temperature and selects a conversion type.
 *
 * Postconditions:
 *        - The program outputs the converted temperature in the desired scale.
 *
 * Edge Cases:
 *        - The program does not handle invalid temperature inputs (e.g., strings).
 *        - The user must select a valid conversion type (1 to 12); otherwise, an error message is displayed.
 *
 * Program Flow:
 * 1. The program displays a menu for the user to select the desired temperature conversion type.
 * 2. The user inputs a valid temperature for conversion.
 * 3. The program calls the appropriate conversion function based on the user's selection.
 * 4. The converted temperature is printed in the selected scale.
 * 5. If an invalid selection is made, the program displays an error message.
 */

#include <stdio.h>

// Conversion constants
const double fix_num1 = 1.8;    // 9/5
const double fix_num2 = 0.8;    // 4/5
const double fix_num3 = 1.25;   // 5/4
const double fix_num4 = 32;     // offset for Fahrenheit
const double fix_num5 = 273.15; // offset for Kelvin

/*
 * Function Name: celsius_to_fahrenheit
 * Parameters:
 *   - double C: Temperature in Celsius
 * Returns: double - Converted temperature in Fahrenheit
 * Description: Converts Celsius to Fahrenheit using the formula (C * 9/5) + 32.
 */
double celsius_to_fahrenheit(double C) { return (C * fix_num1) + fix_num4; }

/*
 * Function Name: celsius_to_reamur
 * Parameters:
 *   - double C: Temperature in Celsius
 * Returns: double - Converted temperature in Reamur
 * Description: Converts Celsius to Reamur using the formula C * 4/5.
 */
double celsius_to_reamur(double C) { return C * fix_num2; }

/*
 * Function Name: celsius_to_kelvin
 * Parameters:
 *   - double C: Temperature in Celsius
 * Returns: double - Converted temperature in Kelvin
 * Description: Converts Celsius to Kelvin using the formula C + 273.15.
 */
double celsius_to_kelvin(double C) { return C + fix_num5; }

/*
 * Function Name: fahrenheit_to_celsius
 * Parameters:
 *   - double F: Temperature in Fahrenheit
 * Returns: double - Converted temperature in Celsius
 * Description: Converts Fahrenheit to Celsius using the formula (F - 32) * 5/9.
 */
double fahrenheit_to_celsius(double F) { return (F - fix_num4) / fix_num1; }

/*
 * Function Name: fahrenheit_to_reamur
 * Parameters:
 *   - double F: Temperature in Fahrenheit
 * Returns: double - Converted temperature in Reamur
 * Description: Converts Fahrenheit to Reamur using the formula (F - 32) * 4/9.
 */
double fahrenheit_to_reamur(double F) { return (F - fix_num4) * fix_num2 / fix_num1; }

/*
 * Function Name: fahrenheit_to_kelvin
 * Parameters:
 *   - double F: Temperature in Fahrenheit
 * Returns: double - Converted temperature in Kelvin
 * Description: Converts Fahrenheit to Kelvin using the formula (F - 32) * 5/9 + 273.15.
 */
double fahrenheit_to_kelvin(double F) { return (F - fix_num4) / fix_num1 + fix_num5; }

/*
 * Function Name: reamur_to_celsius
 * Parameters:
 *   - double R: Temperature in Reamur
 * Returns: double - Converted temperature in Celsius
 * Description: Converts Reamur to Celsius using the formula R * 5/4.
 */
double reamur_to_celsius(double R) { return R * fix_num3; }

/*
 * Function Name: reamur_to_fahrenheit
 * Parameters:
 *   - double R: Temperature in Reamur
 * Returns: double - Converted temperature in Fahrenheit
 * Description: Converts Reamur to Fahrenheit using the formula (R * 5/4) * 9/5 + 32.
 */
double reamur_to_fahrenheit(double R) { return (R * fix_num3) * fix_num1 + fix_num4; }

/*
 * Function Name: reamur_to_kelvin
 * Parameters:
 *   - double R: Temperature in Reamur
 * Returns: double - Converted temperature in Kelvin
 * Description: Converts Reamur to Kelvin using the formula (R * 5/4) + 273.15.
 */
double reamur_to_kelvin(double R) { return (R * fix_num3) + fix_num5; }

/*
 * Function Name: kelvin_to_celsius
 * Parameters:
 *   - double K: Temperature in Kelvin
 * Returns: double - Converted temperature in Celsius
 * Description: Converts Kelvin to Celsius using the formula K - 273.15.
 */
double kelvin_to_celsius(double K) { return K - fix_num5; }

/*
 * Function Name: kelvin_to_fahrenheit
 * Parameters:
 *   - double K: Temperature in Kelvin
 * Returns: double - Converted temperature in Fahrenheit
 * Description: Converts Kelvin to Fahrenheit using the formula (K - 273.15) * 9/5 + 32.
 */
double kelvin_to_fahrenheit(double K) { return (K - fix_num5) * fix_num1 + fix_num4; }

/*
 * Function Name: kelvin_to_reamur
 * Parameters:
 *   - double K: Temperature in Kelvin
 * Returns: double - Converted temperature in Reamur
 * Description: Converts Kelvin to Reamur using the formula (K - 273.15) * 4/5.
 */
double kelvin_to_reamur(double K) { return (K - fix_num5) * fix_num2; }

int main() {
    int select_program;  // Variable to store user's conversion choice
    double T, result;    // Variable for input temperature and conversion result

    // Display menu to select conversion type
    printf("Select Program\n\n");
    printf("1. Celsius to Fahrenheit\n2. Celsius to Reamur\n3. Celsius to Kelvin\n");
    printf("4. Fahrenheit to Celsius\n5. Fahrenheit to Reamur\n6. Fahrenheit to Kelvin\n");
    printf("7. Reamur to Celsius\n8. Reamur to Fahrenheit\n9. Reamur to Kelvin\n");
    printf("10. Kelvin to Celsius\n11. Kelvin to Fahrenheit\n12. Kelvin to Reamur\n\n");

    // Input user's choice
    printf("Enter your choice: ");
    scanf("%d", &select_program);

    // Input the temperature based on the choice
    printf("Enter the temperature: ");
    scanf("%lf", &T);

    // Switch-case to handle the conversion based on user selection
    switch (select_program) {
        case 1:
            result = celsius_to_fahrenheit(T);
            printf("%.2lf°C to °F = %.2lf°F\n", T, result);
            break;
        case 2:
            result = celsius_to_reamur(T);
            printf("%.2lf°C to °R = %.2lf°R\n", T, result);
            break;
        case 3:
            result = celsius_to_kelvin(T);
            printf("%.2lf°C to °K = %.2lf°K\n", T, result);
            break;
        case 4:
            result = fahrenheit_to_celsius(T);
            printf("%.2lf°F to °C = %.2lf°C\n", T, result);
            break;
        case 5:
            result = fahrenheit_to_reamur(T);
            printf("%.2lf°F to °R = %.2lf°R\n", T, result);
            break;
        case 6:
            result = fahrenheit_to_kelvin(T);
            printf("%.2lf°F to °K = %.2lf°K\n", T, result);
            break;
        case 7:
            result = reamur_to_celsius(T);
            printf("%.2lf°R to °C = %.2lf°C\n", T, result);
            break;
        case 8:
            result = reamur_to_fahrenheit(T);
            printf("%.2lf°R to °F = %.2lf°F\n", T, result);
            break;
        case 9:
            result = reamur_to_kelvin(T);
            printf("%.2lf°R to °K = %.2lf°K\n", T, result);
            break;
        case 10:
            result = kelvin_to_celsius(T);
            printf("%.2lf°K to °C = %.2lf°C\n", T, result);
            break;
        case 11:
            result = kelvin_to_fahrenheit(T);
            printf("%.2lf°K to °F = %.2lf°F\n", T, result);
            break;
        case 12:
            result = kelvin_to_reamur(T);
            printf("%.2lf°K to °R = %.2lf°R\n", T, result);
            break;
        default:
            printf("Invalid selection.\n");
            break;
    }

    return 0;
}
