#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Variables to store number, loop counter, and prime status

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0;  // Numbers less than 2 are not prime
    } else {
        // Loop to check for divisors
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If num is divisible by any number other than 1 and itself
                break;        // Exit the loop since it's not a prime number
            }
        }
    }

    // Output result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
