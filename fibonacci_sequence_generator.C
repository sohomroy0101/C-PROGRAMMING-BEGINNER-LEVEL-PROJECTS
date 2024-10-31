#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    // Ask the user to enter the limit
    printf("Enter the limit for the Fibonacci sequence: ");
    scanf("%d", &limit);

    // Print the first two Fibonacci numbers (0 and 1)
    printf("Fibonacci sequence up to %d:\n", limit);

    // Print the first Fibonacci number
    if (limit >= first) {
        printf("%d ", first);
    }

    // Print the second Fibonacci number
    if (limit >= second) {
        printf("%d ", second);
    }

    // Generate the rest of the Fibonacci sequence
    next = first + second;
    while (next <= limit) {
        printf("%d ", next);  // Print the next Fibonacci number

        // Move the first and second numbers forward
        first = second;
        second = next;
        
        // Calculate the new next number in the sequence
        next = first + second;
    }

    printf("\n");  // Print a new line at the end

    return 0;
}
