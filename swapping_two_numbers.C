//Swapping two numbers
//Swaps the values of two variables without using a third variable
#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without a third variable
    a = a + b;  // Step 1: Add both numbers and store the result in 'a'
    b = a - b;  // Step 2: Subtract 'b' from the new 'a' to get the original value of 'a' in 'b'
    a = a - b;  // Step 3: Subtract the new 'b' from 'a' to get the original value of 'b' in 'a'

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
