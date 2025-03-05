#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Problem 13: Guess a Number

Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number. If the user guesses too high or too low then the prog am should output "too high" or "too low" accordingly.
The program must let the user continue to guess until the user correctly guesses the number. Output how many guesses it took the user to correctly guess the right number. Tip: use standard library functionality to generate the random number.
*/

int main() {
    int secretNumber, userGuess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    secretNumber = (rand() % 100) + 1;

    printf("Guess the number (between 1 and 100):\n");

    // Loop until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++; // Increment attempt counter

        if (userGuess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
        }
    } while (userGuess != secretNumber);

    return 0;
}

