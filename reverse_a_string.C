#include <stdio.h>
#include <string.h>

// Function to reverse the string
void reverseString(char str[]) {
    int length = strlen(str);  // Find the length of the string
    int start = 0;
    int end = length - 1;
    char temp;

    // Swap characters from the start and end moving towards the middle
    while (start < end) {
        // Swap the characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[100];  // Declare a string with a maximum size of 100

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Using gets to read the input string

    // Reverse the string
    reverseString(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
