#include <stdio.h>

/*
Problem 14: Guess a Number (Roles Changed)

Write a program which asks the user to think a of random number from 1 to 100 and try to guess the number. The user must tell the computer whether the guessed number is too high or too low. Modify the program so that no matter what num ber the user thinks of (1-100) the computer can guess it in 7 or less guesses.
*/

int main() {
    int low = 1, high = 100, guess, attempts = 0;
    char response;

    printf("Think of a number between 1 and 100. I will guess it!\n");

    // Loop until the computer finds the number
    while (low <= high) {
        guess = (low + high) / 2;  // Binary search: Pick middle value
        attempts++;

        // Ask the user for feedback
        printf("Is it %d? (h = too high, l = too low, c = correct): ", guess);
        scanf(" %c", &response);  // Space before %c avoids newline issues

        if (response == 'c') {
            printf("I guessed it in %d attempts! 🎉\n", attempts);
            break;
        } else if (response == 'h') {
            high = guess - 1;  // Adjust upper bound
        } else if (response == 'l') {
            low = guess + 1;  // Adjust lower bound
        } else {
            printf("Invalid input! Please enter 'h', 'l', or 'c'.\n");
        }
    }

    return 0;
}

