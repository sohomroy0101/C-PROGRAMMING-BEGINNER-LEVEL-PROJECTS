//Number Guessing Game
//A simple C program for a "Number Guessing Game" where the user has to guess a randomly generated number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("\nWelcome to the Number Guessing Game!\n");
    printf("\nI have selected a number between 1 and 100.\n");
    printf("\nCan you guess what it is?\n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}