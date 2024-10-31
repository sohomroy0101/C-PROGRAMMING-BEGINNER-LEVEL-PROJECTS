#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simpleInterest;

    // Get user input for principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
