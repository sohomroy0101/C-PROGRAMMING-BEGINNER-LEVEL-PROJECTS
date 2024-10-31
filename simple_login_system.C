#include <stdio.h>
#include <string.h>

// Function to verify login credentials
int login(char username[], char password[]) {
    // Predefined username and password
    const char correctUsername[] = "user";
    const char correctPassword[] = "pass123";
    
    // Check if entered username and password match predefined ones
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        return 1;  // Successful login
    } else {
        return 0;  // Failed login
    }
}

int main() {
    char username[50];
    char password[50];
    
    printf("Welcome to the Login System\n");
    
    // Prompt user for username
    printf("Enter username: ");
    scanf("%s", username);
    
    // Prompt user for password
    printf("Enter password: ");
    scanf("%s", password);
    
    // Check login credentials
    if (login(username, password)) {
        printf("Login successful! Welcome, %s!\n", username);
    } else {
        printf("Invalid username or password. Please try again.\n");
    }
    
    return 0;
}
