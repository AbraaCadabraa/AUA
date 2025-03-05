#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN

/*
Problem 15: Minimum and Maximum

Write a program to input 10 numbers and find the minimal and maximal numbers in the sequence. Print the results
*/

int main() {
    int numbers[10], min = INT_MAX, max = INT_MIN;

    // Get 10 numbers from the user
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        // Update min and max values
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Print the minimum and maximum values
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}

