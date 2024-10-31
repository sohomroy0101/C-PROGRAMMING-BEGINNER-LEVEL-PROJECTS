//String length calculator
//Finds the length of a string without using built-in functions
#include <stdio.h>

int findStringLength(char str[]) {
    int length = 0;
    
    // Loop through the string until the null character is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    int len = findStringLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    printf("The length of the string is: %d\n", len);
    
    return 0;
}
