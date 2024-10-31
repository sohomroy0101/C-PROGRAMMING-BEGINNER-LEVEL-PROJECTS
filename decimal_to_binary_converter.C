#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    int binary[32];  // Array to store binary digits (maximum 32 bits for an int)
    int index = 0;   // Index for binary array

    // Edge case: if the decimal number is 0, print 0 directly
    if (decimalNumber == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Loop to get the binary digits by repeatedly dividing by 2
    while (decimalNumber > 0) {
        binary[index] = decimalNumber % 2;  // Store remainder (binary digit)
        decimalNumber /= 2;                 // Divide number by 2
        index++;
    }

    // Print the binary digits in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    // Prompt the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Call the function to convert decimal to binary
    decimalToBinary(decimalNumber);

    return 0;
}
