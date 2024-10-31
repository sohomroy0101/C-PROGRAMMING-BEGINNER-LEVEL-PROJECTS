#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the input string
    int count = 0; // Variable to store the number of characters

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the string (including spaces)

    // Loop through each character until we reach the end of the string ('\0')
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Ignore the newline character added by fgets
            count++; // Increase count for each character
        }
    }

    // Display the result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}