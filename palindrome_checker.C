#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindromeString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
    return 1;  // Palindrome
}

// Function to check if a number is a palindrome
int isPalindromeNumber(int num) {
    int reversed = 0, original = num, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int choice;
    char str[100];
    int num;
    
    printf("Menu:\n");
    printf("1. Check Palindrome for a String\n");
    printf("2. Check Palindrome for a Number\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str);  // Read string input
            
            if (isPalindromeString(str)) {
                printf("\"%s\" is a palindrome.\n", str);
            } else {
                printf("\"%s\" is not a palindrome.\n", str);
            }
            break;
            
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);  // Read number input
            
            if (isPalindromeNumber(num)) {
                printf("%d is a palindrome.\n", num);
            } else {
                printf("%d is not a palindrome.\n", num);
            }
            break;
            
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}
