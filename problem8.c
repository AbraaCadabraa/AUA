#include <stdio.h>

/*
Problem 8: Concatenate Numbers
Input 2 numbers and concatenate them together.
*/

int concatenate(int a, int b) {
    int multiplier = 1;

    // Find the correct multiplier to shift 'a' left
    while (multiplier <= b) {
        multiplier *= 10;
    }

    return a * multiplier + b;
}

int main() {
    int num1, num2, result;

    // Get user input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Concatenate numbers
    result = concatenate(num1, num2);

    // Print the concatenated number
    printf("Concatenated number: %d\n", result);

    return 0;
}

