#include <stdio.h>

// Function prototypes
void celsiusToOther(float celsius);
void fahrenheitToOther(float fahrenheit);
void kelvinToOther(float kelvin);

int main() {
    int choice;
    float temperature;

    // Display menu options to the user
    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit and Kelvin\n");
    printf("2. Convert Fahrenheit to Celsius and Kelvin\n");
    printf("3. Convert Kelvin to Celsius and Fahrenheit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform conversion based on user's choice
    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            celsiusToOther(temperature);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            fahrenheitToOther(temperature);
            break;
        case 3:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temperature);
            kelvinToOther(temperature);
            break;
        default:
            printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

// Convert Celsius to Fahrenheit and Kelvin
void celsiusToOther(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    float kelvin = celsius + 273.15;

    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
    printf("%.2f Celsius is %.2f Kelvin\n", celsius, kelvin);
}

// Convert Fahrenheit to Celsius and Kelvin
void fahrenheitToOther(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    float kelvin = celsius + 273.15;

    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
    printf("%.2f Fahrenheit is %.2f Kelvin\n", fahrenheit, kelvin);
}

// Convert Kelvin to Celsius and Fahrenheit
void kelvinToOther(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f Kelvin is %.2f Celsius\n", kelvin, celsius);
    printf("%.2f Kelvin is %.2f Fahrenheit\n", kelvin, fahrenheit);
}
