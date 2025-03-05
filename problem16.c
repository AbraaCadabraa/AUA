#include <stdio.h>

/*
Problem 16: Occurrence of Numbers

Write a program which will allow user to input numbers in range 1-10 (as much asthe user would like to, till -1 is entered). Calculate and print how many times each of  he numbers have been entered.
*/

int main() {
    int num, occurrences[11] = {0}; // Array to count occurrences (index 1-10)

    // Prompt the user
    printf("Enter numbers (1-10), enter -1 to stop:\n");

    // Read numbers until -1 is entered
    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;  // Exit loop when -1 is entered
        }

        // Validate range (only count numbers between 1 and 10)
        if (num >= 1 && num <= 10) {
            occurrences[num]++;
        } else {
            printf("Invalid input! Enter a number between 1 and 10.\n");
        }
    }

    // Print occurrences
    printf("\nOccurrences:\n");
    for (int i = 1; i <= 10; i++) {
        if (occurrences[i] > 0) {
            printf("%d appeared %d times\n", i, occurrences[i]);
        }
    }

    return 0;
}

