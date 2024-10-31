//Binary to Decimal converter
//Converts a binary number to decimal equivalent
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;      // Variable to store the binary number
    int decimal = 0, base = 1, remainder;

    // Prompting the user to enter a binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Loop through each digit of the binary number
    while (binary > 0) {
        remainder = binary % 10;        // Get the last digit (0 or 1)
        decimal += remainder * base;    // Multiply the remainder by the base and add it to decimal
        binary /= 10;                   // Remove the last digit from binary
        base *= 2;                      // Update base to the next power of 2
    }

    // Output the decimal equivalent
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
