#include <stdio.h>

/*
Problem 5: Inverse the number
Write a program which will input an integer number and calculate the inverse of the number. Print the output.
*/

int main() {
    int num, reversed = 0, digit;  // Variables to store input number, reversed number, and digits

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers (keep sign)
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;  // Mark as negative
        num = -num;  // Make it positive for processing
    }

    // Reverse the number
    while (num > 0) {
        digit = num % 10;  // Get last digit
        reversed = reversed * 10 + digit;  // Shift digits and add new one
        num /= 10;  // Remove last digit
    }

    // Restore negative sign if needed
    if (isNegative) {
        reversed = -reversed;
    }

    // Print the reversed number
    printf("Inverse: %d\n", reversed);

    return 0;
}

