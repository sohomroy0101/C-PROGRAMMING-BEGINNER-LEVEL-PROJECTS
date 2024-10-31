#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: If n is 0 or 1, the factorial is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: Multiply n by the factorial of (n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    // Asking the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the entered number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calling the factorial function and displaying the result
        printf("Factorial of %d is: %d\n", number, factorial(number));
    }

    return 0;
}
