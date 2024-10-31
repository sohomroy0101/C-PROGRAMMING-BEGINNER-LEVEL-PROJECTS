//Vowel or Consonant
//Checks if a character is a vowel or character
#include <stdio.h>

int main() {
    char ch;

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the character is a consonant (i.e., an alphabet letter that is not a vowel)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // If it's neither a vowel nor a consonant, it is not an alphabet letter
    else {
        printf("%c is not an alphabet letter.\n", ch);
    }

    return 0;
}